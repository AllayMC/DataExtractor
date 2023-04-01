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

using json = nlohmann::json;
using namespace std;

void extractData();
void forEachBlock(bool &first, const BlockLegacy &legacy, stringstream &jsonBuilder);
bool folderExists(const char* folderName);
void createFolder(const char* folderName);

void saveFile(string const &name, vector<string> &blocks) {
    sort(blocks.begin(), blocks.end(), [](string const &a, string const &b) { return a < b; });
    auto out = ofstream("block_categories/" + name + ".txt", ofstream::out | ofstream::trunc);
    for (string &b: blocks) {
        out << b << endl;
    }
    out.close();
}

string jsonBool(bool b) {
    return b ? "true" : "false";
}

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
    stringstream jsonBuilder;
    jsonBuilder << "["; //start array

    bool first = true;
    int count = 0;
    BlockTypeRegistry::forEachBlock([&first, &jsonBuilder, &count](const BlockLegacy &legacy) -> bool {
        forEachBlock(first, legacy, jsonBuilder);
        count++;
        return true;
    });
    logger.info("Successfully extract " + to_string(count) + " blocks' attributes!");

    jsonBuilder << "]"; //end array

    if (!folderExists("block_data")) {
        createFolder("block_data");
    }

    auto out = ofstream("block_data/block_attributes.json", ofstream::out | ofstream::trunc);
    out << json::parse(jsonBuilder.str()).dump(4);
    out.close();
    logger.info("Data have been saved to \"block_data/block_attributes.json\"");
}

void forEachBlock(bool &first, const BlockLegacy &legacy, stringstream &jsonBuilder) {
    Logger logger;
    try {
        auto name = legacy.getNamespace() + ":" + legacy.getRawNameId();
        logger.info("Extracting Block - " + name);
        const Block &block = legacy.getDefaultState();
        const Material & material = legacy.getMaterial();

        if (!first) {
            jsonBuilder << ",";
        } else {
            first = false;
        }

        jsonBuilder << "{"; //start object

        jsonBuilder << R"("identifier": ")" << name << "\",";
        jsonBuilder << "\"thickness\": " << legacy.getThickness() << ",";
        jsonBuilder << "\"friction\": " << legacy.getFriction() << ",";
        jsonBuilder << "\"hardness\": " << legacy.getDestroySpeed() << ",";
        jsonBuilder << "\"explosionResistance\": " << legacy.getExplosionResistance() << ",";
        jsonBuilder << "\"canBeBrokenFromFalling\": " << jsonBool(block.canBeBrokenFromFalling()) << ",";
        jsonBuilder << "\"isSolid\": " << jsonBool(legacy.isSolid()) << ",";
        jsonBuilder << "\"isSolidBlocking\": " << jsonBool(material.isSolidBlocking()) << ",";
        jsonBuilder << "\"isContainerBlock\": " << jsonBool(block.isContainerBlock()) << ",";
        jsonBuilder << "\"isLiquid\": " << jsonBool(material.isLiquid()) << ",";
        jsonBuilder << "\"isAlwaysDestroyable\": " << jsonBool(material.isAlwaysDestroyable()) << ",";
        jsonBuilder << "\"translucency\": " << material.getTranslucency() << ",";
        jsonBuilder << "\"burnChance\": " << legacy.getFlameOdds() << ",";
        jsonBuilder << "\"burnAbility\": " << legacy.getBurnOdds() << ",";
        jsonBuilder << "\"light\": " << (int) legacy.getLight().value << ",";
        jsonBuilder << "\"lavaFlammable\": " << jsonBool(legacy.isLavaFlammable()) << ",";
        jsonBuilder << "\"lightEmission\": " << (int) block.getLightEmission().value << ",";
        jsonBuilder << "\"isUnbreakable\": " << jsonBool(block.isUnbreakable()) << ",";
        jsonBuilder << "\"isPowerSource\": " << jsonBool(block.isSignalSource()) << ",";
        jsonBuilder << "\"breaksFallingBlocks\": "<< jsonBool(block.breaksFallingBlocks(legacy.getRequiredBaseGameVersion())) << ",";
        jsonBuilder << "\"isWaterBlocking\": " << jsonBool(block.isWaterBlocking()) << ",";
        jsonBuilder << "\"isMotionBlockingBlock\": " << jsonBool(block.isMotionBlockingBlock()) << ",";
        jsonBuilder << "\"hasComparatorSignal\": " << jsonBool(block.hasComparatorSignal()) << ",";
        jsonBuilder << "\"pushesUpFallingBlocks\": " << jsonBool(block.pushesUpFallingBlocks()) << ",";
        jsonBuilder << "\"waterSpreadCausesSpawn\": " << jsonBool(block.waterSpreadCausesSpawn()) << ",";
        jsonBuilder << "\"canContainLiquid\": " << jsonBool(legacy.canContainLiquid()) << ",";
        jsonBuilder << "\"color\": " << block.getColor() << ",";
        jsonBuilder << "\"blocksMotion\": " << jsonBool(material.getBlocksMotion()) << ",";
        jsonBuilder << "\"blocksPrecipitation\": " << jsonBool(material.getBlocksPrecipitation()) << ",";
        jsonBuilder << "\"superHot\": " << jsonBool(material.isSuperHot()) << ",";
        AABB tmp = AABB();
        auto & aabb = legacy.getVisualShape(block, tmp, true);
        jsonBuilder << "\"aabb\": \"" << aabb.min.x << "," << aabb.min.y << "," << aabb.min.z << "," << aabb.max.x << "," << aabb.max.y << "," << aabb.max.z << "\"";
        jsonBuilder << "}"; //end object
    } catch (exception &e) {
        logger.error("Exception caught : " + string(e.what()));
    }
}

bool folderExists(const char* folderName) {
    struct stat info{};
    if (stat(folderName, &info) != 0) {
        return false;
    } else if (info.st_mode & S_IFDIR) {
        return true;
    } else {
        return false;
    }
}

void createFolder(const char* folderName) {
    Logger logger;
    int result = _mkdir(folderName);
    if (result != 0) {
        logger.error("Failed to create folder.");
    } else {
        logger.info("Folder " + string(folderName) + " created successfully.");
    }
}
