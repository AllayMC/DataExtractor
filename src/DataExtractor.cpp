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
#include "llapi/Global.h"
#include "llapi/mc/Minecraft.hpp"
#include "llapi/mc/BlockPalette.hpp"
#include "llapi/mc/ItemRegistryRef.hpp"
#include "llapi/mc/ItemRegistryManager.hpp"
#include "llapi/mc/Item.hpp"
#include "llapi/mc/Experiments.hpp"
#include "llapi/mc/ItemStack.hpp"
#include "llapi/mc/CreativeItemRegistry.hpp"
#include "llapi/mc/ItemColorUtil.hpp"

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
}

void dumpBlockStateData() {
    Logger logger;

    auto &palette = Global<Minecraft>->getLevel()->getBlockPalette();
    unsigned int counter = 0;
    int airCount = 0;
    auto array = json::array();
    while (true) {
        auto &block = palette.getBlock(counter);
        //HACK: 用于确定最大size
        if (block.getName().str == "minecraft:air") {
            airCount++;
            if (airCount == 2)
                break;
        }
        auto obj = generateJsonObjFromBlockState(block);
        array[counter] = obj;
        counter++;
    }
    logger.info("Successfully extract " + to_string(counter) + " block states' attributes!");

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
        obj["color"] = block.getColor();
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
    logger.info("Item data have been saved to \"data/item_data.json\"");
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