// Basic
#include <direct.h>
#include <fstream>
#include <iostream>
#include <memory>
#include <utility>

// Compress
#include <zlib.h>

// LL
#include <Plugin.h>
#include <ll/api/command/DynamicCommand.h>
#include <ll/api/plugin/NativePlugin.h>
#include <ll/api/service/Bedrock.h>
#include <ll/api/memory/Hook.h>

// MC
// Item
#include <mc/world/item/Item.h>
#include <mc/world/item/ItemDescriptor.h>
#include <mc/world/item/ItemInstance.h>
#include <mc/world/item/ItemTag.h>
#include <mc/world/item/VanillaItemTags.h>
#include <mc/world/item/registry/CreativeItemRegistry.h>
#include <mc/world/item/registry/ItemRegistry.h>
#include <mc/world/item/registry/ItemRegistryManager.h>
#include <mc/world/item/registry/ItemRegistryRef.h>
#include <mc/world/item/registry/ItemStack.h>
// Block
#include <mc/world/level/block/Block.h>
#include <mc/world/level/block/VanillaBlockTags.h>
#include <mc/world/level/block/registry/BlockTypeRegistry.h>
// Level
#include <mc/world/level/BlockPalette.h>
#include <mc/world/level/IConstBlockSource.h>
#include <mc/world/level/Level.h>
#include <mc/world/level/biome/Biome.h>
#include <mc/world/level/biome/registry/BiomeRegistry.h>
#include <mc/world/level/dimension/Dimension.h>
#include <mc/world/level/material/Material.h>
// Color
#include <mc/deps/core/mce/Color.h>
#include <mc/world/item/components/ItemColorUtil.h>
// Math
#include <mc/math/Vec3.h>
#include <mc/world/phys/AABB.h>
// Command
#include <mc/server/commands/CommandRegistry.h>
// NBT
#include <mc/nbt/CompoundTag.h>
#include <mc/nbt/CompoundTagVariant.h>
// Network
#include <mc/network/packet/CraftingDataPacket.h>
#include <mc/deps/core/utility/BinaryStream.h>


static bool folderExists(std::string folderName) {
    struct stat info {};
    if (stat(folderName.c_str(), &info) != 0) {
        return false;
    } else if (info.st_mode & S_IFDIR) {
        return true;
    } else {
        return false;
    }
}

static void createFolder(const ll::Logger& logger, const std::string folderName) {
    int result = _mkdir(folderName.c_str());
    if (result != 0) {
        logger.error("Failed to create folder.");
    } else {
        logger.info("Folder " + std::string(folderName) + " created successfully.");
    }
}

static bool gzip_compress(const std::string& original_str, std::string& str) {
    z_stream d_stream = {0};
    if (Z_OK != deflateInit2(&d_stream, Z_BEST_COMPRESSION, Z_DEFLATED, MAX_WBITS + 16, 9, Z_DEFAULT_STRATEGY)) {
        return false;
    }
    unsigned long len = compressBound(original_str.size());
    auto*         buf = (unsigned char*)malloc(len);
    if (!buf) {
        return false;
    }
    d_stream.next_in   = (unsigned char*)(original_str.c_str());
    d_stream.avail_in  = original_str.size();
    d_stream.next_out  = buf;
    d_stream.avail_out = len;
    deflate(&d_stream, Z_SYNC_FLUSH);
    deflateEnd(&d_stream);
    str.assign((char*)buf, d_stream.total_out);
    free(buf);
    return true;
}

static void writeNBT(const std::string& fileName, const CompoundTag& tag) {
    std::string compressed;
    gzip_compress(tag.toBinaryNbt(false), compressed);
    auto out = std::ofstream(fileName, std::ofstream::out | std::ofstream::binary | std::ofstream::trunc);
    out << compressed;
    out.close();
}

static void writeJSON(const std::string& fileName, const nlohmann::json& json) {
    auto out = std::ofstream(fileName, std::ofstream::out | std::ofstream::trunc);
    out << json.dump(4);
    out.close();
}

static void writeJSON(const std::string& fileName, const Json::Value& json) {
    auto out = std::ofstream(fileName, std::ofstream::out | std::ofstream::trunc);
    out << json.toStyledString();
    out.close();
}

static std::string aabbToStr(const AABB& aabb) {
    std::stringstream aabbStr;
    aabbStr << aabb.min.x << "," << aabb.min.y << "," << aabb.min.z << "," << aabb.max.x << "," << aabb.max.y << ","
            << aabb.max.z;
    return aabbStr.str();
}

ll::Logger hookLogger("DataExtractor-Hook");

//Recipe packet
LL_AUTO_TYPE_INSTANCE_HOOK(
    CraftingDataPacketHook,
    ll::memory::HookPriority::Normal,
    CraftingDataPacket,
    "?write@CraftingDataPacket@@UEBAXAEAVBinaryStream@@@Z",
    void,
    BinaryStream& stream
) {
    origin(stream);
    const std::string& data = stream.getAndReleaseData();
    std::string datacopy = data;
    stream.writeString(data, nullptr, nullptr);
    auto out = std::ofstream("data/crafting_data_packet.bin", std::ofstream::out | std::ofstream::binary | std::ofstream::trunc);
    out << datacopy;
    out.close();
    hookLogger.info("create crafting_data_packet.bin success!");
}

namespace plugin {

void dumpCreativeItemData(ll::Logger& logger) {
    logger.info("Extracting creative items...");

    auto         global = CompoundTag();
    unsigned int index  = 0;
    CreativeItemRegistry::forEachCreativeItemInstance([&logger, &index, &global](const ItemInstance& itemInstance) {
        if (itemInstance.getName().empty()) {
            logger.warn(
                "Failed to extract creative item - " + itemInstance.getName() + ", index: " + std::to_string(index)
            );
            return true;
        }
        logger.info("Extracting creative item - " + itemInstance.getName() + ", index: " + std::to_string(index));
        auto obj = CompoundTag();
        obj.putInt64("index", index);
        obj.putString("name", itemInstance.getItem()->getFullItemName());
        obj.putInt("damage", itemInstance.getAuxValue());
        if (itemInstance.isBlock()) {
            obj.putInt("blockStateHash", itemInstance.getBlock()->computeRawSerializationIdHashForNetwork());
        }
        auto nbt = itemInstance.save();
        if (nbt->contains("tag")) {
            obj.put("tag", nbt->getCompound("tag")->copy());
        }
        global.put(std::to_string(index), obj.copy());
        index++;
    });
    writeNBT("data/creative_items.nbt", global);
    logger.info(R"(Creative items data has been saved to "data/creative_items.nbt")");
}

static AABB ZERO_AABB = AABB(Vec3(0, 0, 0), Vec3(0, 0, 0));

void extractBlock(ListTag& dest, const Block& block, ll::Logger& logger) {
    auto nbt = CompoundTag();
    try {
        auto& legacy = block.getLegacyBlock();
        auto  name   = legacy.getNamespace() + ":" + legacy.getRawNameId();
        logger.info("Extracting block state - " + name + ":" + std::to_string(block.getRuntimeId()));
        const Material& material = legacy.getMaterial();
        auto            sid      = block.getSerializationId().clone();
        nbt.putString("name", sid->getString("name"));
        nbt.putString("descriptionId", block.getDescriptionId());
        nbt.putString("blockEntityName", std::string(magic_enum::enum_name(block.getBlockEntityType())));
        nbt.putCompound("states", sid->getCompound("states")->clone());
        nbt.putFloat("thickness", block.getThickness());
        nbt.putFloat("friction", block.getFriction());
        nbt.putFloat("hardness", block.getDestroySpeed());
        nbt.putFloat("explosionResistance", block.getExplosionResistance());
        nbt.putFloat("translucency", material.getTranslucency());
        nbt.putInt("version", sid->getInt("version"));
        nbt.putInt("runtimeId", block.getRuntimeId());
        nbt.putInt(
            "blockStateHash",
            ((name != "minecraft:unknown") ? block.computeRawSerializationIdHashForNetwork() : -2)
        );
        nbt.putInt("burnChance", block.getFlameOdds());
        nbt.putInt("burnAbility", block.getBurnOdds());
        nbt.putInt("lightDampening", (int)block.getLight().value);        // ����
        nbt.putInt("lightEmission", (int)block.getLightEmission().value); // ����
        mce::Color color = block.getMapColor(
            ll::service::getLevel()->getDimension(DimensionType(0))->getBlockSourceFromMainChunkSource(),
            BlockPos(0, 10, 0)
        );
        auto colornbt = CompoundTag();
        colornbt.putInt("r", (int)(color.r * 255));
        colornbt.putInt("g", (int)(color.g * 255));
        colornbt.putInt("b", (int)(color.b * 255));
        colornbt.putInt("a", (int)(color.a * 255));
        colornbt.putString("hexString", color.toHexString());
        nbt.putCompound("color", colornbt);
        AABB tmp = AABB(0, 0, 0, 0, 0, 0);
        block.getCollisionShapeForCamera(
            tmp,
            *(IConstBlockSource*)&ll::service::getLevel()
                 ->getDimension(DimensionType(0))
                 ->getBlockSourceFromMainChunkSource(),
            BlockPos(0, 0, 0)
        );
        nbt.putString("aabbVisual", aabbToStr(tmp));
        AABB                                                       tmp2 = AABB(0, 0, 0, 0, 0, 0);
        class optional_ref<class GetCollisionShapeInterface const> nullRef {};
        block.getCollisionShape(
            tmp2,
            *(IConstBlockSource*)&ll::service::getLevel()
                 ->getDimension(DimensionType(0))
                 ->getBlockSourceFromMainChunkSource(),
            BlockPos(0, 0, 0),
            nullRef
        );
        nbt.putString("aabbCollision", aabbToStr(tmp2));
        nbt.putBoolean("hasCollision", tmp2 != ZERO_AABB);
        nbt.putBoolean("hasBlockEntity", block.getBlockEntityType() != BlockActorType::Undefined);
        nbt.putBoolean("isAir", block.isAir());
        nbt.putBoolean("isBounceBlock", block.isAir());
        nbt.putBoolean("isButtonBlock", block.isButtonBlock());
        nbt.putBoolean("isCropBlock", block.isCropBlock());
        nbt.putBoolean("isDoorBlock", block.isDoorBlock());
        nbt.putBoolean("isFenceBlock", block.isFenceBlock());
        nbt.putBoolean("isFenceGateBlock", block.isFenceGateBlock());
        nbt.putBoolean("isThinFenceBlock", block.isThinFenceBlock());
        nbt.putBoolean("isFallingBlock", block.isFallingBlock());
        nbt.putBoolean("isStemBlock", block.isStemBlock());
        nbt.putBoolean("isSlabBlock", block.isSlabBlock());
        nbt.putBoolean("isLiquid", material.isLiquid());
        nbt.putBoolean("isAlwaysDestroyable", material.isAlwaysDestroyable()); // �Ƿ���Ա������ƻ��һ�ȡ����
        nbt.putBoolean("isLavaFlammable", block.isLavaFlammable());            // �Ƿ��ȼ
        nbt.putBoolean("isUnbreakable", block.isUnbreakable());                // �Ƿ񲻿��ƻ�
        nbt.putBoolean("isPowerSource", block.isSignalSource());
        // nbt->putBoolean("breaksFallingBlocks", block.breaksFallingBlocks(BaseGameVersion()));δ֪����
        nbt.putBoolean("isWaterBlocking", block.isWaterBlocking());             // �Ƿ����赲ˮ
        nbt.putBoolean("isMotionBlockingBlock", block.isMotionBlockingBlock()); // �Ƿ����赲�ƶ�
        nbt.putBoolean("hasComparatorSignal", block.hasComparatorSignal());     // �Ƿ��ܲ����Ƚ����ź�
        nbt.putBoolean("pushesUpFallingBlocks", block.pushesUpFallingBlocks()); // �����෽��
        // nbt->putBoolean("waterSpreadCausesSpawn", block.waterSpreadCausesSpawn());δ֪����
        nbt.putBoolean("canContainLiquid", block.getLegacyBlock().canContainLiquid());
        // nbt->putBoolean("canBeMovingBlock", material.getBlocksMotion());��isMotionBlockingBlockһ������
        // nbt->putBoolean("blocksPrecipitation", material.getBlocksPrecipitation());δ֪����
        nbt.putBoolean("superHot", material.isSuperHot()); // ���Ե����Ż�ķ���
        // nbt->putBoolean("canBeBrokenFromFalling", block.canBeBrokenFromFalling());δ֪����
        nbt.putBoolean("isSolid", block.isSolid());
        // nbt->putBoolean("isSolidBlocking", material.isSolidBlocking());δ֪����
        nbt.putBoolean("isContainerBlock", block.isContainerBlock());

    } catch (std::exception& e) {
        logger.error("Exception caught : " + std::string(e.what()));
    }

    dest.add(nbt);
}

static unsigned int blockStateCounter = 0;

void dumpBlockAttributesData(ll::Logger& logger) {
    logger.info("Extracting block states' attributes...");
    const auto& palette  = ll::service::getLevel()->getBlockPalette();
    int         airCount = 0;
    auto        array    = nlohmann::json::array();

    auto tag          = CompoundTag();
    auto list         = ListTag();
    blockStateCounter = 0;
    while (true) {
        const auto& block = palette.getBlock(blockStateCounter);
        // HACK: ����ȷ�����size
        if (block.getName().getString() == "minecraft:air") {
            airCount++;
            if (airCount == 2) {
                blockStateCounter--;
                break;
            }
        }
        extractBlock(list, block, logger);
        blockStateCounter++;
    }
    tag.put("block", list.copyList());
    logger.info("Successfully extract " + std::to_string(blockStateCounter) + " block states' attributes!");
    writeNBT("data/block_attributes.nbt", tag);
    logger.info(R"(Block attribute data have been saved to "data/block_attributes.nbt")");
}

void extractItem(ListTag& dest, const Item& item, ll::Logger& logger) {
    auto nbt = CompoundTag();
    logger.info("Extracting item - " + item.getFullItemName());
    nbt.putShort("id", item.getId());
    try {
        if (!item.getLegacyBlock().expired() && item.getLegacyBlock().get() != nullptr)
            nbt.putString(
                "blockId",
                item.getLegacyBlock()->getNamespace() + ":" + item.getLegacyBlock()->getRawNameId()
            );
    } catch (std::exception& e) {
        logger.warn("Exception occur when trying to get block for item " + item.getFullItemName());
    }
    nbt.putBoolean("isComponentBased", item.isComponentBased());
    nbt.putString("name", item.getFullItemName());
    nbt.putShort("maxDamage", item.getMaxDamage()); // ����;�
    nbt.putBoolean("isArmor", item.isArmor());
    nbt.putBoolean("isBlockPlanterItem", item.isBlockPlanterItem());
    nbt.putBoolean("isDamageable", item.isDamageable());
    nbt.putBoolean("isDye", item.isDye());
    nbt.putString("itemColorName", ItemColorUtil::getName(item.getItemColor()));
    nbt.putInt("itemColorRGB", ItemColorUtil::getRGBColor(item.getItemColor()));
    nbt.putBoolean("isFertilizer", item.isFertilizer());
    nbt.putBoolean("isThrowable", item.isThrowable());
    nbt.putBoolean("isFood", item.isFood());
    nbt.putBoolean("isUseable", item.isUseable());
    nbt.putBoolean("isElytra", item.isElytra());
    nbt.putBoolean("canBeDepleted", item.canBeDepleted());
    nbt.putBoolean("canDestroyInCreative", item.canDestroyInCreative());
    nbt.putBoolean("canUseOnSimTick", item.canUseOnSimTick());
    nbt.putBoolean("canBeCharged", item.canBeCharged());
    nbt.putString("creativeGroup", item.getCreativeGroup());
    nbt.putInt("creativeCategory", (int)item.getCreativeCategory());
    nbt.putInt("armorValue", item.getArmorValue());
    nbt.putInt("attackDamage", item.getAttackDamage());
    nbt.putInt("toughnessValue", item.getToughnessValue());
    nbt.putFloat("viewDamping", item.getViewDamping());
    nbt.putInt("cooldownTime", item.getCooldownTime());
    nbt.putString("cooldownType", item.getCooldownType().getString());
    // ��Щ��ƷgetMaxStackSize����255����ʱ�����ԭ��
    nbt.putInt("maxStackSize", item.getMaxStackSize(item.buildDescriptor(0, nullptr)));
    CompoundTag           descriptionId;
    std::set<std::string> uniqueStr;
    for (int i = 0; i <= 256; ++i) {
        try {
            if (item.isValidAuxValue(i)) {
                const auto itemstack = ItemStack(item, 1, i); // ignore some invaild aux exception
                if (!uniqueStr.contains(itemstack.getDescriptionId())) {
                    uniqueStr.insert(itemstack.getDescriptionId());
                    descriptionId.putString(std::to_string(i), itemstack.getDescriptionId());
                }
            }
        } catch (...) {}
    }
    nbt.putCompound("descriptionId", descriptionId);
    dest.add(nbt);
}

void dumpItemData(ll::Logger& logger) {
    auto  tag     = CompoundTag();
    auto  list    = ListTag();
    short counter = 0;
    for (auto& kv : ItemRegistryManager::getItemRegistry().getNameToItemMap()) {
        auto item = kv.second;
        extractItem(list, *item, logger);
        counter++;
    }
    tag.put("item", list);
    logger.info("Successfully extract " + std::to_string(counter) + " items' data!");
    writeNBT("data/item_data.nbt", tag);
    logger.info(R"(Items' data have been saved to "data/item_data.nbt")");
}

void dumpPalette(ll::Logger& logger) {
    logger.info("Extracting block palette...");

    auto& palette = ll::service::getLevel()->getBlockPalette();

    auto global = CompoundTag();
    auto blocks = ListTag();
    for (int i = 0; i <= blockStateCounter; ++i) {
        blocks.add(palette.getBlock(i).getSerializationId().clone());
    }
    global.put("blocks", blocks);
    writeNBT("data/block_palette.nbt", global);
    logger.info(R"(Block palette table has been saved to "data/block_palette.nbt"))");
}

void dumpCommandArgData(ll::Logger& logger) {
    CommandRegistry& registry = ll::service::getCommandRegistry();
    auto             global   = nlohmann::json::object();
    for (auto& symbol : registry.mCommandSymbols) {
        // symbol�����⣬���û�����쳣
        if (!registry.isValid(symbol)) {
            continue;
        }
        std::string sym = registry.symbolToString(symbol);
        logger.info("Extracting command arg type - " + sym);
        auto obj     = nlohmann::json::object();
        obj["value"] = symbol.value();
        obj["index"] = symbol.toIndex();
        global[sym]  = obj;
    }
    writeJSON("data/command_arg_types.json", global);
    logger.info("Command arg type data have been saved to \"data/command_arg_types.json\"");
}

void dumpBiomeData(ll::Logger& logger) {
    BiomeRegistry& registry     = ll::service::getLevel()->getBiomeRegistry();
    auto           biomeInfoMap = nlohmann::json::object();
    auto           biomes       = CompoundTag();
    TagRegistry<IDType<BiomeTagIDType>, IDType<BiomeTagSetIDType>>& tagReg = registry.getTagRegistry();
    registry.forEachBiome([&biomes, &registry, &logger, &tagReg, &biomeInfoMap](Biome& biome) {
        auto& name = biome.getName();
        int   id   = biome.getId();
        logger.info("Extracting biome data - " + name);
        auto tag = CompoundTag();
        biome.writePacketData(tag, tagReg);
        biomes.put(name, tag);
        auto obj           = nlohmann::json::object();
        obj["id"]          = id;
        obj["type"]        = std::string(magic_enum::enum_name(biome.getBiomeType()));
        biomeInfoMap[name] = obj;
    });
    writeNBT("data/biome_definitions.nbt", biomes);
    writeJSON("data/biome_id_and_type.json", biomeInfoMap);
    logger.info(R"(Biome definitions has been saved to "data/biome_definitions.nbt" and "data/biome_id_and_type.json")"
    );
}

struct PropertyType {
    std::string           serializationName;
    std::string           valueType;
    std::set<std::string> values;
    std::string           blockName;

    bool operator==(const PropertyType& other) const {
        return serializationName == other.serializationName && valueType == other.valueType
            && values.size() == other.values.size();
    }
};


void dumpPropertyTypeData(ll::Logger& logger) {
    logger.info("Extracting property type data...");

    std::map<std::string, std::vector<std::unique_ptr<class CompoundTag>>> blockToBlockStateData;

    auto& palette = ll::service::getLevel()->getBlockPalette();
    for (int i = 0; i <= blockStateCounter; ++i) {
        const Block& block = palette.getBlock(i);
        auto         name  = block.getLegacyBlock().getRawNameId();
        if (!blockToBlockStateData.contains(name)) {
            blockToBlockStateData[name] = std::vector<std::unique_ptr<class CompoundTag>>();
        }
        auto& blockStates = blockToBlockStateData[name];
        auto  nbt         = block.getSerializationId().clone();
        if (nbt->contains("states") && !nbt->getCompound("states")->isEmpty()) {
            blockStates.push_back(nbt->getCompound("states")->clone());
        }
    }

    std::map<std::string, std::map<std::string, PropertyType>> blockToPropertyTypeMap;

    for (auto& entry : blockToBlockStateData) {
        auto&                               states = entry.second;
        std::map<std::string, PropertyType> propertyTypeMap;

        for (auto& state : states) {
            for (auto& valueEntry : state->rawView()) {
                if (!propertyTypeMap.contains(valueEntry.first)) {
                    PropertyType p;
                    p.serializationName                  = valueEntry.first;
                    p.blockName                          = entry.first;
                    propertyTypeMap[p.serializationName] = p;
                }
                auto& propertyType = propertyTypeMap[valueEntry.first];
                switch (valueEntry.second.getId()) {
                case Tag::Type::Byte:
                    if (propertyType.valueType.empty()) {
                        propertyType.valueType = "BOOLEAN";
                    }
                    propertyType.values.insert(state->getBoolean(valueEntry.first) ? "true" : "false");
                    break;
                case Tag::Type::Int:
                    if (propertyType.valueType.empty()) {
                        propertyType.valueType = "INTEGER";
                    }
                    propertyType.values.insert(std::to_string(state->getInt(valueEntry.first)));
                    break;
                case Tag::Type::String:
                    if (propertyType.valueType.empty()) {
                        propertyType.valueType = "ENUM";
                    }
                    propertyType.values.insert(state->getString(valueEntry.first));
                    break;
                default:
                    if (propertyType.valueType.empty()) {
                        propertyType.valueType = "UNKNOWN";
                    }
                    logger.warn("Unknown tag type when dumping property type data: " + valueEntry.first);
                    break;
                }
            }
        }
        blockToPropertyTypeMap[entry.first] = propertyTypeMap;
    }

    std::set<std::string>                                     differentSizePropertyTypes;
    std::map<std::string, std::map<std::string, std::string>> specialBlockTypes;
    std::map<std::string, PropertyType>                       tmpLookUp;

    for (auto& entry : blockToPropertyTypeMap) {
        for (auto& entryInside : entry.second) {
            auto& propertyName = entryInside.first;
            auto& propertyType = entryInside.second;
            if (!tmpLookUp.contains(propertyName)) {
                tmpLookUp[propertyName] = propertyType;
            } else if (tmpLookUp[propertyName] != propertyType && !differentSizePropertyTypes.contains(propertyName)) {
                // ȡֵ��Χ��ͬ��ͬ����������
                logger.warn("Property type \"" + propertyName + "\" has different size in different blocks!");
                differentSizePropertyTypes.insert(propertyName);
                auto fullBlockName = "minecraft:" + entry.first;
                if (!specialBlockTypes.contains(fullBlockName)) {
                    specialBlockTypes[fullBlockName] = std::map<std::string, std::string>();
                }
            }
        }
    }

    std::map<std::string, PropertyType> globalPropertyTypeMap;

    for (auto& entry : blockToPropertyTypeMap) {
        for (auto& entryInside : entry.second) {
            auto&                  propertyName = entryInside.first;
            auto&                  propertyType = entryInside.second;
            auto                   keyName      = std::string(propertyName);
            std::string::size_type pos          = 0;
            while ((pos = keyName.find(':', pos)) != std::string::npos) {
                keyName.replace(pos, 1, "_");
                pos++;
            }
            if (!differentSizePropertyTypes.contains(propertyName)) {
                globalPropertyTypeMap[keyName] = propertyType;
            } else {
                auto newKey                               = keyName + "_" + std::to_string(propertyType.values.size());
                auto fullBlockName                        = "minecraft:" + entry.first;
                specialBlockTypes[fullBlockName][keyName] = newKey;
                globalPropertyTypeMap[newKey]             = propertyType;
            }
        }
    }

    auto globalJson    = nlohmann::json::object();
    auto propertyTypes = nlohmann::json::object();

    for (auto& propertyTypeEntry : globalPropertyTypeMap) {
        if (propertyTypeEntry.second.serializationName.empty()) {
            continue;
        }
        auto obj = nlohmann::json::object();

        obj["serializationName"] = propertyTypeEntry.second.serializationName;
        obj["valueType"]         = propertyTypeEntry.second.valueType;
        if (propertyTypeEntry.second.valueType == "INTEGER") {
            // ���� propertyTypeEntry.second.values �е�ֵ
            std::vector<int> values;
            for (auto& value : propertyTypeEntry.second.values) {
                values.push_back(stoi(value));
            }
            std::sort(values.begin(), values.end());
            obj["values"] = values;
        } else if (propertyTypeEntry.second.valueType == "BOOLEAN") {
            // ת����bool
            std::vector<bool> values{false, true};
            obj["values"] = values;
        } else {
            obj["values"] = propertyTypeEntry.second.values;
        }

        propertyTypes[propertyTypeEntry.first] = obj;
    }
    globalJson["propertyTypes"]              = propertyTypes;
    globalJson["differentSizePropertyTypes"] = differentSizePropertyTypes;
    globalJson["specialBlockTypes"]          = specialBlockTypes;
    writeJSON("data/block_property_types.json", globalJson);
    logger.info("Block property type data have been saved to \"data/block_property_types.json\"");
}

void dumpItemTags(ll::Logger& logger) {
    logger.info("Extracting item tags...");
    nlohmann::json res = nlohmann::json::object();
#define DUMP(TAG)                                                                                                      \
    do {                                                                                                               \
        auto items = ItemRegistryManager::getItemRegistry().lookupByTag(VanillaItemTags::##TAG);                       \
        auto arr   = nlohmann::json::array();                                                                          \
        for (auto item : items) {                                                                                      \
            arr.push_back(item->getFullItemName());                                                                    \
        }                                                                                                              \
        res[VanillaItemTags::##TAG.getString()] = arr;                                                                 \
        logger.info(VanillaItemTags::##TAG.getString());                                                                \
    } while (false)
    DUMP(Armor);
    DUMP(Arrows);
    DUMP(Banners);
    DUMP(Boat);
    DUMP(Boats);
    DUMP(BookshelfBooks);
    DUMP(ChainmailTier);
    DUMP(ChestBoat);
    DUMP(Coals);
    DUMP(Cooked);
    DUMP(CrimsonStems);
    DUMP(DecoratedPotSherds);
    DUMP(DiamondTier);
    DUMP(Digger);
    DUMP(Door);
    DUMP(Fishes);
    DUMP(Food);
    DUMP(GoldenTier);
    DUMP(HangingActor);
    DUMP(HangingSign);
    DUMP(Hatchet);
    DUMP(Hoe);
    DUMP(HorseArmor);
    DUMP(IronTier);
    DUMP(LeatherTier);
    DUMP(LecternBooks);
    DUMP(Logs);
    DUMP(LogsThatBurn);
    DUMP(MangroveLogs);
    DUMP(Meat);
    DUMP(Minecart);
    DUMP(MusicDiscs);
    DUMP(NetheriteTier);
    DUMP(Pickaxe);
    DUMP(PiglinLoved);
    DUMP(PiglinRepellents);
    DUMP(Planks);
    DUMP(Sand);
    DUMP(Shovel);
    DUMP(Sign);
    DUMP(SoulFireBaseBlocks);
    DUMP(SpawnEgg);
    DUMP(StoneBricks);
    DUMP(StoneCraftingMaterials);
    DUMP(StoneTier);
    DUMP(StoneToolMaterials);
    DUMP(Sword);
    DUMP(Tool);
    DUMP(TransformMaterials);
    DUMP(TransformTemplates);
    DUMP(TransformableItems);
    DUMP(Trident);
    DUMP(TrimMaterials);
    DUMP(TrimTemplates);
    DUMP(TrimmableArmors);
    DUMP(VibrationDamper);
    DUMP(WarpedStems);
    DUMP(WoodenSlabs);
    DUMP(WoodenTier);
    DUMP(Wool);
#undef DUMP
    writeJSON("data/item_tags.json", res);
}

void dumpBlockTags(ll::Logger& logger) {
    logger.info("Extracting block tags...");
    nlohmann::json res = nlohmann::json::object();
#define DUMP(TAG)                                                                                                      \
    do {                                                                                                               \
        auto arr = nlohmann::json::array();                                                                            \
        BlockTypeRegistry::forEachBlock([&arr](const BlockLegacy& b) {                                                 \
            if (b.hasTag(VanillaBlockTags::##TAG)) {                                                                   \
                arr.push_back(b.getRawNameId());                                                                       \
            }                                                                                                          \
            return true;                                                                                               \
        });                                                                                                            \
        res[VanillaBlockTags::##TAG.getString()] = arr;                                                                \
        logger.info(VanillaBlockTags::##TAG.getString());                                                               \
    } while (false)
    DUMP(Acacia);
    DUMP(Birch);
    DUMP(Crop);
    DUMP(DarkOak);
    DUMP(DiamondDiggable);
    DUMP(Dirt);
    DUMP(FertilizeArea);
    DUMP(GoldDiggable);
    DUMP(Grass);
    DUMP(Gravel);
    DUMP(IronDiggable);
    DUMP(Jungle);
    DUMP(Log);
    DUMP(Metal);
    DUMP(MobSpawner);
    DUMP(NotFeatureReplaceable);
    DUMP(Oak);
    DUMP(Plant);
    DUMP(Pumpkin);
    DUMP(Rail);
    DUMP(Sand);
    DUMP(Snow);
    DUMP(Spruce);
    DUMP(Stone);
    DUMP(StoneDiggable);
    DUMP(TextSign);
    DUMP(Water);
    DUMP(Wood);
    DUMP(WoodDiggable);
#undef DUMP
    writeJSON("data/block_tags.json", res);
}

void ext(ll::Logger& logger) {
    if (!folderExists("data")) {
        createFolder(logger, "data");
    }
    dumpBiomeData(logger);
    // dumpCommandArgData(logger);
    dumpCreativeItemData(logger);
    dumpBlockAttributesData(logger);
    dumpItemData(logger);
    dumpPalette(logger);
}

Plugin::Plugin(ll::plugin::NativePlugin& self) : mSelf(self) { mSelf.getLogger().info("loading..."); }

bool Plugin::disable() {
    mSelf.getLogger().info("disabling...");
    return true;
}

bool Plugin::enable() {
    auto& logger = mSelf.getLogger();
    mSelf.getLogger().info("enabling...");

    auto cmdReg  = ll::service::getCommandRegistry();
    auto command = DynamicCommand::createCommand(cmdReg, "ext", "ext data", CommandPermissionLevel::Any);
    command->addOverload();
    command->setCallback(
        [&logger](DynamicCommand const&, CommandOrigin const& origin, CommandOutput& output, std::unordered_map<std::string, DynamicCommand::Result>&) {
            ext(logger);
        }
    );
    DynamicCommand::setup(cmdReg, std::move(command));

    return true;
}

} // namespace plugin
