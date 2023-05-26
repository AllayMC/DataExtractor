/**
 * @file DataExtractor.cpp
 * @brief The main file of DataExtractor plugin.
 */

#include <llapi/mc/Level.hpp>
#include <llapi/mc/BlockTypeRegistry.hpp>
#include <llapi/mc/BlockLegacy.hpp>
#include <llapi/mc/Block.hpp>
#include <llapi/mc/Vec3.hpp>
#include <llapi/mc/Material.hpp>
#include <llapi/LoggerAPI.h>
#include <llapi/mc/Brightness.hpp>
#include <llapi/mc/BaseGameVersion.hpp>
#include <llapi/mc/CommandOrigin.hpp>
#include <llapi/mc/CommandOutput.hpp>
#include <llapi/DynamicCommandAPI.h>
#include <unordered_map>
#include <vector>
#include <Nlohmann/json.hpp>
#include <fstream>
#include <direct.h>
#include "llapi/mc/AABB.hpp"
#include "llapi/mc/BlockSource.hpp"
#include "llapi/mc/Minecraft.hpp"
#include "llapi/mc/BlockPalette.hpp"
#include "llapi/mc/ItemRegistryRef.hpp"
#include "llapi/mc/ItemRegistryManager.hpp"
#include "llapi/mc/Item.hpp"
#include "llapi/mc/Experiments.hpp"
#include "llapi/mc/ItemStack.hpp"
#include "llapi/mc/CreativeItemRegistry.hpp"
#include "llapi/mc/ItemColorUtil.hpp"
#include "llapi/mc/ActorDefinitionGroup.hpp"
#include "llapi/mc/Types.hpp"
#include "llapi/mc/ActorInfoRegistry.hpp"
#include "llapi/mc/ActorInfo.hpp"
#include "llapi/mc/ListTag.hpp"
#include "llapi/mc/CompoundTag.hpp"
#include "llapi/mc/BiomeRegistry.hpp"
#include "llapi/mc/Biome.hpp"
#include "llapi/mc/CommandRegistry.hpp"
#include "llapi/mc/AvailableCommandsPacket.hpp"
#include "llapi/mc/ActorFactory.hpp"
#include "llapi/mc/LevelData.hpp"
#include "llapi/mc/PropertyGroupManager.hpp"
#include "llapi/mc/Spawner.hpp"

using json = nlohmann::json;
using namespace std;

bool folderExists(const char *folderName) {
    struct stat info{};
    if (stat(folderName, &info) != 0) {
        return false;
    } else if (info.st_mode & S_IFDIR) {
        return true;
    } else {
        return false;
    }
}

void createFolder(const char *folderName) {
    Logger logger;
    int result = _mkdir(folderName);
    if (result != 0) {
        logger.error("Failed to create folder.");
    } else {
        logger.info("Folder " + string(folderName) + " created successfully.");
    }
}

void saveFile(string const &name, vector<string> &blocks) {
    sort(blocks.begin(), blocks.end(), [](string const &a, string const &b) { return a < b; });
    auto out = ofstream("block_categories/" + name + ".txt", ofstream::out | ofstream::trunc);
    for (string &b: blocks) {
        out << b << endl;
    }
    out.close();
}

void extractData();

void dumpBlockStateData();

nlohmann::basic_json<map, vector, string, bool, int64_t, uint64_t, double, allocator, nlohmann::adl_serializer, vector<std::uint8_t>>
generateJsonObjFromBlockState(const Block &block);

void dumpItemData();

nlohmann::basic_json<map, vector, string, bool, int64_t, uint64_t, double, allocator, nlohmann::adl_serializer, vector<std::uint8_t>>
generateJsonFromItem(const Item &item);

void dumpEntityData();

void dumpCreativeItemData();

void dumpPalette();

void dumpBiomeData();

void dumpCommandArgData();

void dumpAvailableCommand();

void dumpEntityAABB(const Level *level, const pair<string, const ActorDefinitionIdentifier *> &pair,
                    nlohmann::basic_json<map, vector, string, bool, int64_t, uint64_t, double, allocator, nlohmann::adl_serializer, vector<std::uint8_t>> &obj);

void PluginInit() {
    Logger logger;
    logger.info("DataExtractor plugin loaded!");

    DynamicCommand::setup(
            /* name = */ "ext",
            /* description = */ "extract block attributes",
            /* enums = */ {},
            /* params = */ {},
            /* overloads = */ {{}},
            /* callback = */ [](
                    DynamicCommand const &command,
                    CommandOrigin const &origin,
                    CommandOutput &output,
                    std::unordered_map<std::string, DynamicCommand::Result> &results
            ) {
                extractData();
                return true;
            });
}

void extractData() {
    if (!folderExists("data")) {
        createFolder("data");
    }

    dumpBlockStateData();
    dumpItemData();
    dumpEntityData();
    dumpCreativeItemData();
    dumpPalette();
    dumpBiomeData();
    dumpCommandArgData();
    dumpAvailableCommand();
}

int blockStateCounter = 0;

void dumpBlockStateData() {
    Logger logger;

    auto &palette = Global<Minecraft>->getLevel()->getBlockPalette();
    int airCount = 0;
    auto array = json::array();
    while (true) {
        auto &block = palette.getBlock(blockStateCounter);
        //HACK: 用于确定最大size
        if (block.getName().str == "minecraft:air") {
            airCount++;
            if (airCount == 2)
                break;
        }
        auto obj = generateJsonObjFromBlockState(block);
        array[blockStateCounter] = obj;
        blockStateCounter++;
    }
    logger.info("Successfully extract " + to_string(blockStateCounter) + " block states' attributes!");

    auto out = ofstream("data/block_attributes.json", ofstream::out | ofstream::trunc);
    out << array.dump(4);
    out.close();
    logger.info("Block attribute data have been saved to \"data/block_attributes.json\"");
}

nlohmann::basic_json<map, vector, string, bool, int64_t, uint64_t, double, allocator, nlohmann::adl_serializer, vector<std::uint8_t>>
generateJsonObjFromBlockState(const Block &block) {
    auto obj = json::object();
    Logger logger;
    try {
        auto &legacy = block.getLegacyBlock();
        auto name = legacy.getNamespace() + ":" + legacy.getRawNameId();
        logger.info("Extracting block state - " + name + ":" + to_string(block.getRuntimeId()));
        const Material &material = legacy.getMaterial();

        auto nbt = json::parse(block.getSerializationId().clone()->toJson(4));
        obj.update(nbt);
        obj["runtimeId"] = block.getRuntimeId();
        obj["blockStateHash"] = ((name != "minecraft:unknown") ? block.computeRawSerializationIdHashForNetwork() : -2);
        obj["thickness"] = block.getThickness();
        obj["friction"] = to_string(block.getFriction());
        obj["hardness"] = to_string(block.getDestroySpeed());
        obj["explosionResistance"] = block.getExplosionResistance();
        obj["canBeBrokenFromFalling"] = block.canBeBrokenFromFalling();
        obj["isSolid"] = block.isSolid();
        obj["isSolidBlocking"] = material.isSolidBlocking();
        obj["isContainerBlock"] = block.isContainerBlock();
        obj["hasBlockEntity"] = block.hasBlockEntity();
        obj["isLiquid"] = material.isLiquid();
        obj["isAlwaysDestroyable"] = material.isAlwaysDestroyable();
        obj["translucency"] = material.getTranslucency();
        obj["burnChance"] = block.getFlameOdds();
        obj["burnAbility"] = block.getBurnOdds();
        obj["light"] = (int) block.getLight().value;
        obj["flammable"] = block.isLavaFlammable();
        obj["lightEmission"] = (int) block.getLightEmission().value;
        obj["isUnbreakable"] = block.isUnbreakable();
        obj["isPowerSource"] = block.isSignalSource();
        obj["breaksFallingBlocks"] = block.breaksFallingBlocks(legacy.getRequiredBaseGameVersion());
        obj["isWaterBlocking"] = block.isWaterBlocking();
        obj["isMotionBlockingBlock"] = block.isMotionBlockingBlock();
        obj["hasComparatorSignal"] = block.hasComparatorSignal();
        obj["pushesUpFallingBlocks"] = block.pushesUpFallingBlocks();
        obj["waterSpreadCausesSpawn"] = block.waterSpreadCausesSpawn();
        obj["canContainLiquid"] = legacy.canContainLiquid();
        auto color = block.getMapColor(*Level::getBlockSource(0), BlockPos(0, 64, 0));
        auto colorObj = json::object();
        colorObj["r"] = (int)(color.r * 255);
        colorObj["g"] = (int)(color.g * 255);
        colorObj["b"] = (int)(color.b * 255);
        colorObj["a"] = (int)(color.a * 255);
        colorObj["hexString"] = color.toHexString();
        colorObj["nearestColorCode"] = color.toNearestColorCode();
        obj["color"] = colorObj;
        obj["canBeMovingBlock"] = material.getBlocksMotion();
        obj["blocksPrecipitation"] = material.getBlocksPrecipitation();
        obj["superHot"] = material.isSuperHot();
        AABB tmp = AABB();
        auto &aabb = block.getVisualShape(tmp, true);
        stringstream aabbStr;
        aabbStr << aabb.min.x << "," << aabb.min.y << "," << aabb.min.z << "," << aabb.max.x
                << "," << aabb.max.y << "," << aabb.max.z;
        obj["aabb"] = aabbStr.str();
    } catch (exception &e) {
        logger.error("Exception caught : " + string(e.what()));
    }

    return obj;
}

void dumpItemData() {
    Logger logger;

    auto array = json::array();
    int counter = 0;
    for (short id = -2000; id <= 2000; id++) {
        auto item = ItemRegistryManager::getItemRegistry().getItem(id);
        if (item.expired())
            continue;
        auto obj = generateJsonFromItem(*item);
        array[counter] = obj;
        counter++;
    }

    logger.info("Successfully extract " + to_string(counter) + " items' data!");

    auto out = ofstream("data/item_data.json", ofstream::out | ofstream::trunc);
    out << array.dump(4);
    out.close();
    logger.info("Items' data have been saved to \"data/item_data.json\"");
}

nlohmann::basic_json<map, vector, string, bool, int64_t, uint64_t, double, allocator, nlohmann::adl_serializer, vector<std::uint8_t>>
generateJsonFromItem(const Item &item) {
    auto obj = json::object();
    Logger logger;

    logger.info("Extracting item - " + item.getFullItemName());

    obj["id"] = item.getId();
    obj["name"] = item.getFullItemName();
    obj["maxDamage"] = item.getMaxDamage();
    obj["auxValuesDescription"] = item.getAuxValuesDescription();
    obj["isArmor"] = item.isArmor();
    obj["isBlockPlanterItem"] = item.isBlockPlanterItem();
    obj["isDamageable"] = item.isDamageable();
    obj["isDyeable"] = item.isDyeable();
    obj["isDye"] = item.isDye();
    obj["itemColorName"] = ItemColorUtil::getName(item.getItemColor());
    obj["itemColorRGB"] = ItemColorUtil::getRGBColor(item.getItemColor());
    obj["isFertilizer"] = item.isFertilizer();
    obj["isThrowable"] = item.isThrowable();
    obj["isFood"] = item.isFood();
    obj["isUseable"] = item.isUseable();
    obj["isElytra"] = item.isElytra();
    obj["canBeDepleted"] = item.canBeDepleted();
    obj["canDestroyInCreative"] = item.canDestroyInCreative();
    obj["canUseOnSimTick"] = item.canUseOnSimTick();
    obj["canBeCharged"] = item.canBeCharged();
    obj["creativeGroup"] = item.getCreativeGroup();
    obj["creativeCategory"] = item.getCreativeCategory();
    obj["armorValue"] = item.getArmorValue();
    obj["attackDamage"] = item.getAttackDamage();
    obj["toughnessValue"] = item.getToughnessValue();
    obj["viewDamping"] = item.getViewDamping();
    obj["cooldownTime"] = item.getCooldownTime();
    obj["cooldownType"] = item.getCooldownType();

    return obj;
}

void dumpEntityData() {
    Logger logger;

    auto level = Global<Minecraft>->getLevel();
    auto &exp = level->getLevelData().getExperiments();
    auto &actorFactory = level->getActorFactory();
    auto list = actorFactory.buildSummonEntityTypeEnum(exp);

    auto global = json::object();
    for (auto & pair : list) {
        if (global.contains(pair.second->getCanonicalName()))
            continue;
        logger.info("Extracting entity - " + pair.second->getCanonicalName());

        auto obj = json::object();
        obj["canonicalName"] = pair.second->getCanonicalName();
        obj["initEvent"] = pair.second->getInitEvent();
        obj["legacyActorType"] = static_cast<__int32>(pair.second->_getLegacyActorType());
        obj["isVanilla"] = pair.second->isVanilla();

//        Unused
//        obj["identifier"] = pair.second->getIdentifier();
//        obj["fullName"] = pair.second->getFullName();
//        obj["namespace"] = pair.second->getNamespace();
//        obj["canonicalHash"] = pair.second->getCanonicalHash();

        auto actorPropertyDataTag = level->getActorPropertyGroup().getActorPropertyDataTag(pair.second->getCanonicalHash()).toJson(4);
        obj["actorPropertyDataTag"] = json::parse(actorPropertyDataTag);

//      todo: dumpEntityAABB(level, pair, obj);

        global[pair.second->getCanonicalName()] = obj;
    }

    auto out = ofstream("data/entity_data.json", ofstream::out | ofstream::trunc);
    out << global.dump(4);
    out.close();
    logger.info("Entities' data have been saved to \"data/entity_data.json\"");
}

void dumpEntityAABB(const Level *level, const pair<string, const ActorDefinitionIdentifier *> &pair,
                    nlohmann::basic_json<map, vector, string, bool, int64_t, uint64_t, double, allocator, nlohmann::adl_serializer, vector<std::uint8_t>> &obj) {
    Logger logger;

    auto actor = level->getSpawner().spawnMob(*Level::getBlockSource(0), pair.first, nullptr, Vec3(0, 64, 0), false, true, false);
    if (actor == nullptr) {
        logger.warn("Failed to spawn entity: " + pair.first);
        logger.warn("It is possible to solve this problem by adding a ticking area around 0 64 0");
        logger.warn("AABB data for this entity will be missing!");
    } else {
        auto &aabb = actor->getAABB();
        stringstream aabbStr;
        aabbStr << aabb.min.x << "," << aabb.min.y << "," << aabb.min.z << "," << aabb.max.x
                << "," << aabb.max.y << "," << aabb.max.z;
        obj["aabb"] = aabbStr.str();
//      todo: nbt
        actor->kill();
    }
}

void dumpCreativeItemData() {
    //TODO
}

void dumpPalette() {
    Logger logger;

    auto &palette = Global<Minecraft>->getLevel()->getBlockPalette();

    CompoundTag global;
    ListTag blocks;
    for (unsigned int i = 0; i < blockStateCounter; i++) {
        blocks.add(palette.getBlock(i).getSerializationId().clone());
    }
    global.put("blocks", blocks.copyList());

    auto out = ofstream("data/block_palette.json", ofstream::out | ofstream::trunc);
    out << global.toJson(4);
    out.close();
    logger.info("Block palette table has been saved to \"data/block_palette.json\"");
}

void dumpBiomeData() {
    Logger logger;
    BiomeRegistry const &registry = Global<Minecraft>->getLevel()->getBiomeRegistry();

    CompoundTag biomes;
    registry.forEachBiome([&biomes, &registry, &logger](Biome &biome) {
        logger.info("Extracting biome data - " + biome.getName());

        CompoundTag tag;
        biome.writePacketData(tag,const_cast<TagRegistry<IDType<BiomeTagIDType>, IDType<BiomeTagSetIDType>> &>(registry.getTagRegistry()));
        biomes.put(biome.getName(), tag.copy());
    });

    auto out = ofstream("data/biome_definitions.json", ofstream::out | ofstream::trunc);
    out << biomes.toJson(4);
    out.close();
    logger.info("Biome definitions has been saved to \"data/biome_definitions.json\"");
}

void dumpCommandArgData() {
    Logger logger;

    CommandRegistry *registry = Global<CommandRegistry>;
    auto global = json::object();
    registry->forEachNonTerminal([&logger, &registry, &global](auto symbol) {
        logger.info("Extracting command arg type - " + symbol.toString());

        auto obj = json::object();
        obj["description"] = registry->describe(symbol);
        obj["debugString"] = symbol.toDebugString();
        obj["value"] = symbol.value();
        obj["index"] = symbol.toIndex();

        global[symbol.toString()] = obj;
    });

    auto out = ofstream("data/command_arg_types.json", ofstream::out | ofstream::trunc);
    out << global.dump(4);
    out.close();
    logger.info("Command arg type data have been saved to \"data/command_arg_types.json\"");
}

void dumpAvailableCommand() {
    Logger logger;

    CommandRegistry *registry = Global<CommandRegistry>;
    auto aCmdPk = registry->serializeAvailableCommands();
    logger.info("Extracting available command data...");

    auto global = json::object();

    global["allEnums"] = aCmdPk.mAllEnums;
    global["allSuffix"] = aCmdPk.mAllSuffix;

    logger.info("Extracting enum data array...");
    auto enumDataArray = json::array();
    for(auto & enumData : aCmdPk.mEnumDatas) {
        auto obj = json::object();

        obj["name"] = enumData.name;
        obj["valueIndices"] = enumData.valueIndices;

        enumDataArray.push_back(obj);
    }
    global["enumDatas"] = enumDataArray;

    logger.info("Extracting command data array...");
    auto commandDataArray = json::array();
    for (auto & commandData : aCmdPk.mCommandDatas) {
        auto obj = json::object();

        obj["name"] = commandData.name;
        obj["description"] = commandData.description;
        obj["flag"] = commandData.flag.value;
        obj["perm"] = commandData.perm;
        auto overloads = json::array();
        for (auto & overload : commandData.overloads) {
            auto overloadParams = json::array();

            for(auto & paramData : overload.datas) {
                auto paramObj = json::object();

                paramObj["description"] = paramData.desc;
                paramObj["sym"] = paramData.sym;
                overloadParams.push_back(paramObj);
            }
            overloads.push_back(overloadParams);
        }
        obj["overloads"] = overloads;
        obj["aliasIndex"] = commandData.aliasIndex;

        commandDataArray.push_back(obj);
    }
    global["commandData"] = commandDataArray;

    logger.info("Extracting soft enum data array...");
    auto softEnumDataArray = json::array();
    for (auto & softEnumData : aCmdPk.mSoftEnums) {
        auto softEnumDataObj = json::object();

        softEnumDataObj["name"] = softEnumData.name;
        softEnumDataObj["values"] = softEnumData.values;

        softEnumDataArray.push_back(softEnumDataObj);
    }
    global["softEnumData"] = softEnumDataArray;

    logger.info("Extracting constrained value data array...");
    auto constrainedValueDataArray = json::array();
    for (auto & constrainedValueData : aCmdPk.mConstrainedValueDatas) {
        auto constrainedValueDataObj = json::object();

        constrainedValueDataObj["enumIndex"] = constrainedValueData.enumIndex;
        constrainedValueDataObj["enumNameIndex"] = constrainedValueData.enumNameIndex;
        constrainedValueDataObj["indices"] = constrainedValueData.indices;

        constrainedValueDataArray.push_back(constrainedValueDataObj);
    }
    global["constrainedValueData"] = constrainedValueDataArray;

    auto out = ofstream("data/available_commands.json", ofstream::out | ofstream::trunc);
    out << global.dump(4);
    out.close();
    logger.info("Available commands' data has been saved to \"data/available_commands.json\"");
}

