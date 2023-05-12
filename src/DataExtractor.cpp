/**
 * @file DataExtractor.cpp
 * @brief The main file of DataExtractor plugin.
 */

#include <llapi/mc/Level.hpp>
#include <llapi/mc/BlockTypeRegistry.hpp>
#include <llapi/mc/BlockLegacy.hpp>
#include <llapi/mc/Block.hpp>
#include <llapi/mc/DiggerItem.hpp>
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

using json = nlohmann::json;
using namespace std;

void extractData();

nlohmann::basic_json<map, vector, string, bool, int64_t, uint64_t, double, allocator, nlohmann::adl_serializer, vector<std::uint8_t>> generateJsonObjFromBlockState(bool &first, const Block & block);

bool folderExists(const char *folderName);

void createFolder(const char *folderName);

void saveFile(string const &name, vector<string> &blocks) {
    sort(blocks.begin(), blocks.end(), [](string const &a, string const &b) { return a < b; });
    auto out = ofstream("block_categories/" + name + ".txt", ofstream::out | ofstream::trunc);
    for (string &b: blocks) {
        out << b << endl;
    }
    out.close();
}

//string jsonBool(bool b) {
//    return b ? "true" : "false";
//}

void PluginInit() {
    Logger logger;
    logger.info("DataExtractor plugin loaded!");

    DynamicCommand::setup(
            /* name = */ "extba",
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
    Logger logger;

    bool first = true;
    auto & palette = Global<Minecraft>->getLevel()->getBlockPalette();
    unsigned int counter = 0;
    int airCount = 0;
    auto array = json::array();
    while (true) {
        auto & block = palette.getBlock(counter);
        //HACK: 用于确定最大size
        if (block.getName().str == "minecraft:air") {
            airCount++;
            if (airCount == 2)
                break;
        }
        auto obj = generateJsonObjFromBlockState(first, block);
        array[counter] = obj;
        counter++;
    }
    logger.info("Successfully extract " + to_string(counter) + " block states' attributes!");

    if (!folderExists("block_data")) {
        createFolder("block_data");
    }

    auto out = ofstream("block_data/block_attributes.json", ofstream::out | ofstream::trunc);
    out << array.dump(4);
    out.close();
    logger.info("Data have been saved to \"block_data/block_attributes.json\"");
}

nlohmann::basic_json<map, vector, string, bool, int64_t, uint64_t, double, allocator, nlohmann::adl_serializer, vector<std::uint8_t>> generateJsonObjFromBlockState(bool &first, const Block & block) {
    auto obj = json::object();
    Logger logger;
    try {
        auto & legacy = block.getLegacyBlock();
        auto name = legacy.getNamespace() + ":" + legacy.getRawNameId();
        logger.info("Extracting Block - " + name);
        const Material &material = legacy.getMaterial();

        auto nbt = json::parse(block.getSerializationId().clone()->toJson(4));
        obj.update(nbt);
//        jsonBuilder << nbt.substr(1, nbt.length() - 2) << ",";
//        jsonBuilder << "\"runtimeId\": " << block.getRuntimeId() << ",";
        obj["runtimeId"] = block.getRuntimeId();
//        jsonBuilder << "\"blockStateHash\": " << ((name != "minecraft:unknown") ? block.computeRawSerializationIdHashForNetwork() : -2) << ",";
        obj["blockStateHash"] = ((name != "minecraft:unknown") ? block.computeRawSerializationIdHashForNetwork() : -2);
        //TODO
//        jsonBuilder << "\"serializationId\": " << "\"" + block.buildSerializationIdString() + "\"" << ",";
//        jsonBuilder << "\"thickness\": " << block.getThickness() << ",";
        obj["thickness"] = block.getThickness();
//        jsonBuilder << "\"friction\": " << block.getFriction() << ",";
        obj["friction"] = to_string(block.getFriction());
//        jsonBuilder << "\"hardness\": " << block.getDestroySpeed() << ",";
        obj["hardness"] = to_string(block.getDestroySpeed());
//        jsonBuilder << "\"explosionResistance\": " << block.getExplosionResistance() << ",";
        obj["explosionResistance"] = block.getExplosionResistance();
//        jsonBuilder << "\"canBeBrokenFromFalling\": " << jsonBool(block.canBeBrokenFromFalling()) << ",";
        obj["canBeBrokenFromFalling"] = block.canBeBrokenFromFalling();
//        jsonBuilder << "\"isSolid\": " << jsonBool(block.isSolid()) << ",";
        obj["isSolid"] = block.isSolid();
//        jsonBuilder << "\"isSolidBlocking\": " << jsonBool(material.isSolidBlocking()) << ",";
        obj["isSolidBlocking"] = material.isSolidBlocking();
//        jsonBuilder << "\"isContainerBlock\": " << jsonBool(block.isContainerBlock()) << ",";
        obj["isContainerBlock"] = block.isContainerBlock();
//        jsonBuilder << "\"hasBlockEntity\": " << jsonBool(block.hasBlockEntity()) << ",";
        obj["hasBlockEntity"] = block.hasBlockEntity();

        //TODO: BlockEntityType
//        jsonBuilder << "\"blockEntityType\": " << block.getBlockEntityType() << ",";
//        jsonBuilder << "\"isLiquid\": " << jsonBool(material.isLiquid()) << ",";
        obj["isLiquid"] = material.isLiquid();
//        jsonBuilder << "\"isAlwaysDestroyable\": " << jsonBool(material.isAlwaysDestroyable()) << ",";
        obj["isAlwaysDestroyable"] = material.isAlwaysDestroyable();
//        jsonBuilder << "\"translucency\": " << material.getTranslucency() << ",";
        obj["translucency"] = material.getTranslucency();
//        jsonBuilder << "\"burnChance\": " << block.getFlameOdds() << ",";
        obj["burnChance"] = block.getFlameOdds();
//        jsonBuilder << "\"burnAbility\": " << block.getBurnOdds() << ",";
        obj["burnAbility"] = block.getBurnOdds();
//        jsonBuilder << "\"light\": " << (int) block.getLight().value << ",";
        obj["light"] = (int) block.getLight().value;
//        jsonBuilder << "\"flammable\": " << jsonBool(block.isLavaFlammable()) << ",";
        obj["flammable"] = block.isLavaFlammable();
//        jsonBuilder << "\"lightEmission\": " << (int) block.getLightEmission().value << ",";
        obj["lightEmission"] = (int) block.getLightEmission().value;
//        jsonBuilder << "\"isUnbreakable\": " << jsonBool(block.isUnbreakable()) << ",";
        obj["isUnbreakable"] = block.isUnbreakable();
//        jsonBuilder << "\"isPowerSource\": " << jsonBool(block.isSignalSource()) << ",";
        obj["isPowerSource"] = block.isSignalSource();
//        jsonBuilder << "\"breaksFallingBlocks\": "
//                    << jsonBool(block.breaksFallingBlocks(legacy.getRequiredBaseGameVersion())) << ",";
        obj["breaksFallingBlocks"] = block.breaksFallingBlocks(legacy.getRequiredBaseGameVersion());
//        jsonBuilder << "\"isWaterBlocking\": " << jsonBool(block.isWaterBlocking()) << ",";
        obj["isWaterBlocking"] = block.isWaterBlocking();
//        jsonBuilder << "\"isMotionBlockingBlock\": " << jsonBool(block.isMotionBlockingBlock()) << ",";
        obj["isMotionBlockingBlock"] = block.isMotionBlockingBlock();
//        jsonBuilder << "\"hasComparatorSignal\": " << jsonBool(block.hasComparatorSignal()) << ",";
        obj["hasComparatorSignal"] = block.hasComparatorSignal();
//        jsonBuilder << "\"pushesUpFallingBlocks\": " << jsonBool(block.pushesUpFallingBlocks()) << ",";
        obj["pushesUpFallingBlocks"] = block.pushesUpFallingBlocks();
//        jsonBuilder << "\"waterSpreadCausesSpawn\": " << jsonBool(block.waterSpreadCausesSpawn()) << ",";
        obj["waterSpreadCausesSpawn"] = block.waterSpreadCausesSpawn();
//        jsonBuilder << "\"canContainLiquid\": " << jsonBool(legacy.canContainLiquid()) << ",";
        obj["canContainLiquid"] = legacy.canContainLiquid();
//        jsonBuilder << "\"color\": " << block.getColor() << ",";
        obj["color"] = block.getColor();
//        jsonBuilder << "\"canBeMovingBlock\": " << jsonBool(material.getBlocksMotion()) << ",";
        obj["canBeMovingBlock"] = material.getBlocksMotion();
//        jsonBuilder << "\"blocksPrecipitation\": " << jsonBool(material.getBlocksPrecipitation()) << ",";
        obj["blocksPrecipitation"] = material.getBlocksPrecipitation();
//        jsonBuilder << "\"superHot\": " << jsonBool(material.isSuperHot()) << ",";
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