/**
 * @file DataExtractor.cpp
 * @brief The main file of DataExtractor plugin.
 */

#include <iostream>
#include <zlib-ng.h>
#include <string>
#include <llapi/mc/Level.hpp>
#include <llapi/mc/BlockTypeRegistry.hpp>
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
#include "llapi/mc/MinecraftCommands.hpp"
#include "llapi/mc/CreativeItemEntry.hpp"
#include "llapi/mc/ItemInstance.hpp"
#include "llapi/mc/BinaryStream.hpp"
#include "llapi/mc/CompoundTagVariant.hpp"

using json = nlohmann::json;
using namespace std;

//define
void extractData();
void dumpBlockAttributesData();
CompoundTag generateNBTFromBlockState(const Block& block);
nlohmann::basic_json<map, vector, string, bool, int64_t, uint64_t, double, allocator, nlohmann::adl_serializer, vector<std::uint8_t>>
generateJsonObjFromBlockState(const Block& block);
void dumpItemData();
CompoundTag generateNBTFromItem(const Item& item);
nlohmann::basic_json<map, vector, string, bool, int64_t, uint64_t, double, allocator, nlohmann::adl_serializer, vector<std::uint8_t>>
generateJsonFromItem(const Item& item);
void dumpEntityData();
void dumpCreativeItemData();
void dumpPalette();
void dumpBiomeData();
void dumpCommandArgData();
void dumpAvailableCommand();
void dumpEntityAABB(const Level* level, const pair<string, const ActorDefinitionIdentifier*>& pair,
	nlohmann::basic_json<map, vector, string, bool, int64_t, uint64_t, double, allocator, nlohmann::adl_serializer, vector<std::uint8_t>>& obj);
void dumpPropertyTypeData();

bool folderExists(const char* folderName) {
	struct stat info {};
	if (stat(folderName, &info) != 0) {
		return false;
	}
	else if (info.st_mode & S_IFDIR) {
		return true;
	}
	else {
		return false;
	}
}

void createFolder(const char* folderName) {
	Logger logger;
	int result = _mkdir(folderName);
	if (result != 0) {
		logger.error("Failed to create folder.");
	}
	else {
		logger.info("Folder " + string(folderName) + " created successfully.");
	}
}

void saveFile(string const& name, vector<string>& blocks) {
	sort(blocks.begin(), blocks.end(), [](string const& a, string const& b) { return a < b; });
	auto out = ofstream("block_categories/" + name + ".txt", ofstream::out | ofstream::trunc);
	for (string& b : blocks) {
		out << b << endl;
	}
	out.close();
}

bool gzip_compress(const std::string& original_str, std::string& str) {
	zng_stream d_stream = { 0 };
	if (Z_OK != zng_deflateInit2(&d_stream, Z_DEFAULT_COMPRESSION, Z_DEFLATED, MAX_WBITS + 16, 9, Z_DEFAULT_STRATEGY)) {
		return false;
	}
	uLong len = zng_compressBound(original_str.size());
	auto* buf = (unsigned char*)malloc(len);
	if (!buf) {
		return false;
	}
	d_stream.next_in = (unsigned char*)(original_str.c_str());
	d_stream.avail_in = original_str.size();
	d_stream.next_out = buf;
	d_stream.avail_out = len;
	zng_deflate(&d_stream, Z_SYNC_FLUSH);
	zng_deflateEnd(&d_stream);
	str.assign((char*)buf, d_stream.total_out);
	free(buf);
	return true;
}

inline void writeNBT(string fileName, CompoundTag& tag) {
	string v;
	gzip_compress(tag.toBinaryNBT(false), v);
	auto out = ofstream(fileName, ofstream::out | ofstream::binary | ofstream::trunc);
	out << v;
	out.close();
}

inline void writeJSON(string fileName, nlohmann::json& json) {
	auto out = ofstream(fileName, ofstream::out | ofstream::trunc);
	out << json.dump(4);
	out.close();
}


std::string parseBiomeTypeStrById(VanillaBiomeTypes type) {
	switch (type) {
	case VanillaBiomeTypes::Beach:
		return "BEACH";
	case VanillaBiomeTypes::Desert:
		return "DESERT";
	case VanillaBiomeTypes::ExtremeHills:
		return "EXTREME_HILLS";
	case VanillaBiomeTypes::Flat:
		return "FLAT";
	case VanillaBiomeTypes::Forest:
		return "FOREST";
	case VanillaBiomeTypes::Hell:
		return "HELL";
	case VanillaBiomeTypes::Ice:
		return "ICE";
	case VanillaBiomeTypes::Jungle:
		return "JUNGLE";
	case VanillaBiomeTypes::Mesa:
		return "MESA";
	case VanillaBiomeTypes::MushroomIsland:
		return "MUSHROOM_ISLAND";
	case VanillaBiomeTypes::Ocean:
		return "OCEAN";
	case VanillaBiomeTypes::Plain:
		return "PLAIN";
	case VanillaBiomeTypes::River:
		return "RIVER";
	case VanillaBiomeTypes::Savanna:
		return "SAVANNA";
	case VanillaBiomeTypes::StoneBeach:
		return "STONE_BEACH";
	case VanillaBiomeTypes::Swamp:
		return "SWAMP";
	case VanillaBiomeTypes::Taiga:
		return "TAIGA";
	case VanillaBiomeTypes::TheEnd:
		return "THE_END";
	case VanillaBiomeTypes::DataDriven:
		return "DataDriven";
	default:
		return "UNKNOWN";
	}
}

void PluginInit() {
	Logger logger;
	logger.info("DataExtractor plugin loaded!");

	DynamicCommand::setup(
		/* name = */ "ext",
		/* description = */ "extract block attributes",
		/* enums = */{},
		/* params = */{},
		/* overloads = */{ {} },
		/* callback = */ [](
			DynamicCommand const& command,
			CommandOrigin const& origin,
			CommandOutput& output,
			std::unordered_map<std::string, DynamicCommand::Result>& results
			) {
				extractData();
				return true;
		});
}

void extractData() {
	if (!folderExists("data")) {
		createFolder("data");
	}

	dumpCreativeItemData();
	dumpBlockAttributesData();
	dumpItemData();
	dumpEntityData();
	dumpPalette();
	dumpBiomeData();
	//dumpCommandArgData();
	dumpAvailableCommand();
	dumpPropertyTypeData();
}

int blockStateCounter = 0;

void dumpBlockAttributesData() {
	Logger logger;
	logger.info("Extracting block states' attributes...");
	auto& palette = Global<Minecraft>->getLevel()->getBlockPalette();
	int airCount = 0;
	auto array = json::array();
	CompoundTag tag;
	ListTag list;
	blockStateCounter = 0;
	while (true) {
		auto& block = palette.getBlock(blockStateCounter);
		//HACK: 用于确定最大size
		if (block.getName().str == "minecraft:air") {
			airCount++;
			if (airCount == 2) {
				blockStateCounter--;
				break;
			}
		}
		list.add(generateNBTFromBlockState(block).clone());
		array[blockStateCounter] = generateJsonObjFromBlockState(block);
		blockStateCounter++;
	}
	tag.put("block", list.copyList());
	logger.info("Successfully extract " + to_string(blockStateCounter) + " block states' attributes!");
	writeJSON("data/block_attributes.json", array);
	writeNBT("data/block_attributes.nbt", tag);
	logger.info(R"(Block attribute data have been saved to "data/block_attributes.nbt" and "data/block_attributes.json")");
}

nlohmann::basic_json<map, vector, string, bool, int64_t, uint64_t, double, allocator, nlohmann::adl_serializer, vector<std::uint8_t>>
generateJsonObjFromBlockState(const Block& block) {
	auto obj = json::object();
	Logger logger;
	try {
		auto& legacy = block.getLegacyBlock();
		auto name = legacy.getNamespace() + ":" + legacy.getRawNameId();
		logger.info("Extracting block state - " + name + ":" + to_string(block.getRuntimeId()));
		const Material& material = legacy.getMaterial();

		auto nbt = json::parse(block.getSerializationId().clone()->toJson(4));
		obj.update(nbt);
		obj["descriptionId"] = block.getDescriptionId();
		obj["legacyId"] = block.getId();
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
		obj["light"] = (int)block.getLight().value;
		obj["flammable"] = block.isLavaFlammable();
		obj["lightEmission"] = (int)block.getLightEmission().value;
		obj["isUnbreakable"] = block.isUnbreakable();
		obj["isPowerSource"] = block.isSignalSource();
		obj["breaksFallingBlocks"] = block.breaksFallingBlocks(legacy.getRequiredBaseGameVersion());
		obj["isWaterBlocking"] = block.isWaterBlocking();
		obj["isMotionBlockingBlock"] = block.isMotionBlockingBlock();
		obj["hasComparatorSignal"] = block.hasComparatorSignal();
		obj["pushesUpFallingBlocks"] = block.pushesUpFallingBlocks();
		obj["waterSpreadCausesSpawn"] = block.waterSpreadCausesSpawn();
		obj["canContainLiquid"] = legacy.canContainLiquid();
		auto color = block.getMapColor(*Level::getBlockSource(0), BlockPos(0, 10, 0));
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
		auto& aabb = block.getVisualShape(tmp);
		stringstream aabbStr;
		aabbStr << aabb.min.x << "," << aabb.min.y << "," << aabb.min.z << "," << aabb.max.x
			<< "," << aabb.max.y << "," << aabb.max.z;
		obj["aabb"] = aabbStr.str();
	}
	catch (exception& e) {
		logger.error("Exception caught : " + string(e.what()));
	}
	return obj;
}

CompoundTag generateNBTFromBlockState(const Block& block) {
	Logger logger;
	CompoundTag nbt;
	try {
		auto& legacy = block.getLegacyBlock();
		auto name = legacy.getNamespace() + ":" + legacy.getRawNameId();
		logger.info("Extracting block state - " + name + ":" + to_string(block.getRuntimeId()));
		const Material& material = legacy.getMaterial();
		map<std::string, CompoundTagVariant>& map = const_cast<CompoundTag&>(block.getSerializationId()).value();
		auto iter = map.begin();
		while (iter != map.end()) {
			string key = iter->first;
			nbt.put(key, std::move(*(iter->second.asTag())));
			iter++;
		}
		nbt.putString("descriptionId", block.getDescriptionId());
		nbt.putInt("legacyId", block.getId());
		nbt.putInt("runtimeId", block.getRuntimeId());
		nbt.putInt("blockStateHash", ((name != "minecraft:unknown") ? block.computeRawSerializationIdHashForNetwork() : -2));
		nbt.putFloat("thickness", block.getThickness());
		nbt.putFloat("friction", block.getFriction());
		nbt.putFloat("hardness", block.getDestroySpeed());
		nbt.putFloat("explosionResistance", block.getExplosionResistance());
		nbt.putBoolean("canBeBrokenFromFalling", block.canBeBrokenFromFalling());
		nbt.putBoolean("isSolid", block.isSolid());
		nbt.putBoolean("isSolidBlocking", material.isSolidBlocking());
		nbt.putBoolean("isContainerBlock", block.isContainerBlock());
		nbt.putBoolean("hasBlockEntity", material.isLiquid());
		nbt.putBoolean("isLiquid", block.canBeBrokenFromFalling());
		nbt.putBoolean("isAlwaysDestroyable", material.isAlwaysDestroyable());
		nbt.putFloat("translucency", material.getTranslucency());
		nbt.putInt("burnChance", block.getFlameOdds());
		nbt.putInt("burnAbility", block.getBurnOdds());
		nbt.putInt("light", (int)block.getLight().value);
		nbt.putBoolean("flammable", block.isLavaFlammable());
		nbt.putBoolean("lightEmission", (int)block.getLightEmission().value);
		nbt.putBoolean("isUnbreakable", block.isUnbreakable());
		nbt.putBoolean("isPowerSource", block.isSignalSource());
		nbt.putBoolean("breaksFallingBlocks", block.isWaterBlocking());
		nbt.putBoolean("isWaterBlocking", block.isWaterBlocking());
		nbt.putBoolean("isMotionBlockingBlock", block.isMotionBlockingBlock());
		nbt.putBoolean("hasComparatorSignal", block.hasComparatorSignal());
		nbt.putBoolean("pushesUpFallingBlocks", block.pushesUpFallingBlocks());
		nbt.putBoolean("waterSpreadCausesSpawn", block.waterSpreadCausesSpawn());
		nbt.putBoolean("canContainLiquid", legacy.canContainLiquid());

		auto color = block.getMapColor(*Level::getBlockSource(0), BlockPos(0, 10, 0));
		CompoundTag colorNbt;
		colorNbt.putInt("r", (int)(color.r * 255));
		colorNbt.putInt("g", (int)(color.g * 255));
		colorNbt.putInt("b", (int)(color.b * 255));
		colorNbt.putInt("a", (int)(color.a * 255));
		colorNbt.putString("hexString", color.toHexString());
		colorNbt.putString("nearestColorCode", color.toNearestColorCode());
		nbt.putCompound("color", colorNbt.clone());

		nbt.putBoolean("canBeMovingBlock", material.getBlocksMotion());
		nbt.putBoolean("blocksPrecipitation", material.getBlocksPrecipitation());
		nbt.putBoolean("superHot", material.isSuperHot());
		AABB tmp = AABB();
		auto& aabb = block.getVisualShape(tmp);
		stringstream aabbStr;
		aabbStr << aabb.min.x << "," << aabb.min.y << "," << aabb.min.z << "," << aabb.max.x
			<< "," << aabb.max.y << "," << aabb.max.z;
		nbt.putString("aabb", aabbStr.str());
	}
	catch (exception& e) {
		logger.error("Exception caught : " + string(e.what()));
	}

	return nbt;
}

void dumpItemData() {
	Logger logger;
	CompoundTag tag;
	ListTag list;
	auto array = json::array();
	int counter = 0;
	for (short id = -2000; id <= 2000; id++) {
		auto item = ItemRegistryManager::getItemRegistry().getItem(id);
		if (item.expired())
			continue;
		list.add(generateNBTFromItem(*item).clone());
		array[counter] = generateJsonFromItem(*item);
		counter++;
	}
	tag.put("item", list.copyList());
	logger.info("Successfully extract " + to_string(counter) + " items' data!");
	writeJSON("data/item_data.json", array);
	writeNBT("data/item_data.nbt", tag);
	logger.info(R"(Items' data have been saved to "data/item_data.nbt" and "data/item_data.json")");
}

nlohmann::basic_json<map, vector, string, bool, int64_t, uint64_t, double, allocator, nlohmann::adl_serializer, vector<std::uint8_t>>
generateJsonFromItem(const Item& item) {
	auto obj = json::object();
	Logger logger;

	logger.info("Extracting item - " + item.getFullItemName());

	obj["id"] = item.getId();
	try {
		if (!item.getLegacyBlock().expired() && item.getLegacyBlock().get() != nullptr)
			obj["blockId"] = item.getLegacyBlock()->getNamespace() + ":" + item.getLegacyBlock()->getRawNameId();
	}
	catch (exception& e) {
		logger.warn("Exception occur when trying to get block for item " + item.getFullItemName());
	}
	obj["descriptionId"] = item.getDescriptionId();
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

CompoundTag generateNBTFromItem(const Item& item) {
	CompoundTag nbt;
	Logger logger;

	logger.info("Extracting item - " + item.getFullItemName());
	nbt.putShort("id", item.getId());
	try {
		if (!item.getLegacyBlock().expired() && item.getLegacyBlock().get() != nullptr)
			nbt.putString("blockId", item.getLegacyBlock()->getNamespace() + ":" + item.getLegacyBlock()->getRawNameId());
	}
	catch (exception& e) {
		logger.warn("Exception occur when trying to get block for item " + item.getFullItemName());
	}
	nbt.putString("descriptionId", item.getDescriptionId());
	nbt.putString("name", item.getFullItemName());
	nbt.putShort("maxDamage", item.getMaxDamage());
	nbt.putString("auxValuesDescription", item.getAuxValuesDescription());
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
	nbt.putInt("getAttackDamage", item.getAttackDamage());
	nbt.putInt("toughnessValue", item.getToughnessValue());
	nbt.putInt("viewDamping", item.getViewDamping());
	nbt.putInt("cooldownTime", item.getCooldownTime());
	nbt.putString("cooldownType", item.getCooldownType());
	return nbt;
}

void dumpEntityData() {
	Logger logger;

	auto level = Global<Minecraft>->getLevel();
	auto& exp = level->getLevelData().getExperiments();
	auto& actorFactory = level->getActorFactory();
	auto list = actorFactory.buildSummonEntityTypeEnum(exp);

	auto global = json::object();
	for (auto& pair : list) {
		if (global.contains(pair.second->getCanonicalName()))
			continue;
		logger.info("Extracting entity - " + pair.second->getCanonicalName());

		auto obj = json::object();
		obj["canonicalName"] = pair.second->getCanonicalName();
		obj["initEvent"] = pair.second->getInitEvent();
		obj["legacyActorType"] = static_cast<__int32>(pair.second->_getLegacyActorType());

		auto actorPropertyDataTag = level->getActorPropertyGroup().getActorPropertyDataTag(pair.second->getCanonicalHash()).toJson(4);
		obj["actorPropertyDataTag"] = json::parse(actorPropertyDataTag);

		//      todo: dumpEntityAABB(level, pair, obj);

		global[pair.second->getCanonicalName()] = obj;
	}
	writeJSON("data/entity_data.json", global);
	logger.info("Entities' data have been saved to \"data/entity_data.json\"");
}

void dumpEntityAABB(const Level* level, const pair<string, const ActorDefinitionIdentifier*>& pair,
	nlohmann::basic_json<map, vector, string, bool, int64_t, uint64_t, double, allocator, nlohmann::adl_serializer, vector<std::uint8_t>>& obj) {
	Logger logger;

	auto actor = level->getSpawner().spawnMob(*Level::getBlockSource(0), pair.first, nullptr, Vec3(0, 64, 0), false, true, false);
	if (actor == nullptr) {
		logger.warn("Failed to spawn entity: " + pair.first);
		logger.warn("It is possible to solve this problem by adding a ticking area around 0 64 0");
		logger.warn("AABB data for this entity will be missing!");
	}
	else {
		auto& aabb = actor->getAABB();
		stringstream aabbStr;
		aabbStr << aabb.min.x << "," << aabb.min.y << "," << aabb.min.z << "," << aabb.max.x
			<< "," << aabb.max.y << "," << aabb.max.z;
		obj["aabb"] = aabbStr.str();
		//      todo: nbt
		actor->kill();
	}
}

void dumpCreativeItemData() {
	Logger logger;

	logger.info("Extracting creative items...");

	CompoundTag global;
	unsigned int index = 0;
	CreativeItemRegistry::forEachCreativeItemInstance([&logger, &index, &global](const ItemInstance& itemInstance) {
		logger.info("index: " + to_string(index));
		auto itemStack = ItemStack::fromItemInstance(itemInstance);
		if (itemStack.getName().empty()) {
			logger.warn("Failed to extract creative item - " + itemStack.getName() + ", index: " + to_string(index));
			return true;
		}
		logger.info("Extracting creative item - " + itemStack.getName() + ", index: " + to_string(index));
		CompoundTag obj;
		obj.putInt64("index", index);
		obj.putString("name", itemStack.getItem()->getFullItemName());
		obj.putInt("count", itemStack.getCount());
		obj.putInt("damage", itemStack.getAux());
		if (itemStack.isBlock()) {
			obj.putInt("blockStateHash", itemStack.getBlock()->computeRawSerializationIdHashForNetwork());
		}
		if (itemStack.getNbt()->contains("tag")) {
			obj.put("tag", itemStack.getNbt()->getCompoundTag("tag")->copy());
		}

		global.put(to_string(index), obj.copy());
		index++;
		return true;
		});

	auto out = ofstream("data/creative_items.json", ofstream::out | ofstream::trunc);
	out << global.toJson(4);
	out.close();
	writeNBT("data/creative_items.nbt", global);
	logger.info(R"(Creative items data has been saved to "data/creative_items.nbt" and "data/creative_items.json")");
}

void dumpPalette() {
	Logger logger;

	auto& palette = Global<Minecraft>->getLevel()->getBlockPalette();

	CompoundTag global;
	ListTag blocks;
	for (unsigned int i = 0; i < blockStateCounter; i++) {
		blocks.add(palette.getBlock(i).getSerializationId().clone());
	}
	global.put("blocks", blocks.copyList());
	auto json = ofstream("data/block_palette.json", ofstream::out | ofstream::trunc);
	json << global.toJson(4);
	json.close();
	writeNBT("data/block_palette.nbt", global);
	logger.info(R"(Block palette table has been saved to "data/block_palette.nbt" and "data/block_palette.json"))");
}

void dumpBiomeData() {
	Logger logger;
	BiomeRegistry const& registry = Global<Minecraft>->getLevel()->getBiomeRegistry();

	auto biomeInfoMap = json::object();
	CompoundTag biomes;
	registry.forEachBiome([&biomes, &registry, &logger, &biomeInfoMap](Biome& biome) {
		logger.info("Extracting biome data - " + biome.getName());
		CompoundTag tag;
		biome.writePacketData(tag, const_cast<TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> &>(registry.getTagRegistry()));
		biomes.put(biome.getName(), tag.copy());

		auto obj = json::object();
		obj["id"] = biome.getId();
		obj["type"] = parseBiomeTypeStrById(biome.getBiomeType());
		biomeInfoMap[biome.getName()] = obj;
		});
	writeNBT("data/biome_definitions.nbt", biomes);
	writeJSON("data/biome_definitions.json", biomeInfoMap);
	logger.info(R"(Biome definitions has been saved to "data/biome_definitions.nbt" and "data/biome_definitions.json")");
}

void dumpCommandArgData() {
	Logger logger;

	CommandRegistry& registry = Global<MinecraftCommands>->getRegistry();
	auto global = json::object();
	registry.forEachNonTerminal([&logger, &global](auto symbol) {
		//buggy toString
		logger.info("Extracting command arg type - " + symbol.toString());

		auto obj = json::object();
		obj["value"] = symbol.value();
		obj["index"] = symbol.toIndex();

		global[symbol.toString()] = obj;
		});
	writeJSON("data/command_arg_types.json", global);
	logger.info("Command arg type data have been saved to \"data/command_arg_types.json\"");
}

void dumpAvailableCommand() {
	Logger logger;

	CommandRegistry* registry = Global<CommandRegistry>;
	auto aCmdPk = registry->serializeAvailableCommands();
	logger.info("Extracting available command data...");

	auto global = json::object();

	logger.info("Extracting all enums...");
	global["allEnums"] = aCmdPk.mAllEnums;
	logger.info("Extracting all suffix...");
	global["allSuffix"] = aCmdPk.mAllSuffix;

	logger.info("Extracting enum data array...");
	auto enumDataArray = json::array();
	for (auto& enumData : aCmdPk.mEnumDatas) {
		auto obj = json::object();

		obj["name"] = enumData.name;
		obj["valueIndices"] = enumData.valueIndices;

		enumDataArray.push_back(obj);
	}
	global["enumDatas"] = enumDataArray;

	logger.info("Extracting chained subcommand value array...");
	global["chainedSubcommandValues"] = aCmdPk.mChainedSubcommandValues;

	logger.info("Extracting chained subcommand array...");
	auto chainedSubcommandArray = json::array();
	for (auto& chainedSubcommand : aCmdPk.mChainedSubcommands) {
		auto chainedSubcommandDataObj = json::object();

		chainedSubcommandDataObj["name"] = chainedSubcommand.name;

		auto valueIndices = json::array();
		for (auto& valueIndice : chainedSubcommand.valueIndices) {
			auto valueIndicesObj = json::object();
			valueIndicesObj["index"] = valueIndice.index;
			valueIndicesObj["value"] = valueIndice.value;

			valueIndices.push_back(valueIndicesObj);
		}

		chainedSubcommandDataObj["valueIndices"] = valueIndices;

		chainedSubcommandArray.push_back(chainedSubcommandDataObj);
	}
	global["chainedSubcommands"] = chainedSubcommandArray;

	logger.info("Extracting command data array...");
	auto commandDataArray = json::array();
	for (auto& commandData : aCmdPk.mCommandDatas) {
		auto obj = json::object();

		obj["name"] = commandData.name;
		obj["description"] = commandData.description;
		obj["flag"] = commandData.flag.value;
		obj["perm"] = commandData.perm;
		auto overloads = json::array();
		for (auto& overload : commandData.overloads) {
			auto overloadData = json::object();
			auto overloadParams = json::array();

			for (auto& paramData : overload.datas) {
				auto paramObj = json::object();

				paramObj["description"] = paramData.desc;
				paramObj["sym"] = paramData.sym;
				paramObj["optional"] = paramData.optional;
				paramObj["paramOptions"] = paramData.paramOptions;
				overloadParams.push_back(paramObj);
			}

			overloadData["datas"] = overloadParams;
			overloadData["chained"] = overload.chained;

			overloads.push_back(overloadData);
		}
		obj["overloads"] = overloads;
		obj["chainedOffsets"] = commandData.chainedOffsets;
		obj["aliasIndex"] = commandData.aliasIndex;

		commandDataArray.push_back(obj);
	}
	global["commandData"] = commandDataArray;

	logger.info("Extracting soft enum data array...");
	auto softEnumDataArray = json::array();
	for (auto& softEnumData : aCmdPk.mSoftEnums) {
		auto softEnumDataObj = json::object();

		softEnumDataObj["name"] = softEnumData.name;
		softEnumDataObj["values"] = softEnumData.values;

		softEnumDataArray.push_back(softEnumDataObj);
	}
	global["softEnumData"] = softEnumDataArray;

	logger.info("Extracting constrained value data array...");
	auto constrainedValueDataArray = json::array();
	for (auto& constrainedValueData : aCmdPk.mConstrainedValueDatas) {
		auto constrainedValueDataObj = json::object();

		constrainedValueDataObj["enumIndex"] = constrainedValueData.enumIndex;
		constrainedValueDataObj["enumNameIndex"] = constrainedValueData.enumNameIndex;
		constrainedValueDataObj["indices"] = constrainedValueData.indices;

		constrainedValueDataArray.push_back(constrainedValueDataObj);
	}
	global["constrainedValueData"] = constrainedValueDataArray;
	writeJSON("data/available_commands.json", global);
	logger.info("Available commands' data has been saved to \"data/available_commands.json\"");
}

struct PropertyType {
	std::string serializationName;
	std::string valueType;
	std::set<std::string> values;
	std::string blockName;

	bool operator==(const PropertyType& other) const {
		return serializationName == other.serializationName && valueType == other.valueType && values.size() == other.values.size();
	}
};

void dumpPropertyTypeData() {
	Logger logger;
	logger.info("Extracting property type data...");

	std::map<std::string, std::vector<std::unique_ptr<class CompoundTag>>> blockToBlockStateData;

	auto& palette = Global<Minecraft>->getLevel()->getBlockPalette();
	for (unsigned int i = 0; i < blockStateCounter; i++) {
		const Block& block = palette.getBlock(i);
		auto name = block.getLegacyBlock().getRawNameId();
		if (!blockToBlockStateData.contains(name)) {
			blockToBlockStateData[name] = std::vector<std::unique_ptr<class CompoundTag>>();
		}
		auto& blockStates = blockToBlockStateData[name];
		auto nbt = block.getSerializationId().clone();
		if (nbt->contains("states") && !nbt->getCompoundTag("states")->isEmpty()) {
			blockStates.push_back(nbt->getCompoundTag("states")->clone());
		}
	}

	std::map<std::string, std::map<std::string, PropertyType>> blockToPropertyTypeMap;

	for (auto& entry : blockToBlockStateData) {
		auto& states = entry.second;
		std::map<std::string, PropertyType> propertyTypeMap;

		for (auto& state : states) {
			for (auto& valueEntry : state->value()) {
				if (!propertyTypeMap.contains(valueEntry.first)) {
					PropertyType p;
					p.serializationName = valueEntry.first;
					p.blockName = entry.first;
					propertyTypeMap[p.serializationName] = p;
				}
				auto& propertyType = propertyTypeMap[valueEntry.first];
				switch (valueEntry.second->getId()) {
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
					propertyType.values.insert(to_string(state->getInt(valueEntry.first)));
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

	std::set<std::string> differentSizePropertyTypes;
	std::map<std::string, std::map<std::string, std::string>> specialBlockTypes;
	std::map<std::string, PropertyType> tmpLookUp;

	for (auto& entry : blockToPropertyTypeMap) {
		for (auto& entryInside : entry.second) {
			auto& propertyName = entryInside.first;
			auto& propertyType = entryInside.second;
			if (!tmpLookUp.contains(propertyName)) {
				tmpLookUp[propertyName] = propertyType;
			}
			else if (tmpLookUp[propertyName] != propertyType && !differentSizePropertyTypes.contains(propertyName)) {
				//取值范围不同的同名方块属性
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
			auto& propertyName = entryInside.first;
			auto& propertyType = entryInside.second;
			auto keyName = std::string(propertyName);
			string::size_type pos = 0;
			while ((pos = keyName.find(':', pos)) != string::npos)
			{
				keyName.replace(pos, 1, "_");
				pos++;
			}
			if (!differentSizePropertyTypes.contains(propertyName)) {
				globalPropertyTypeMap[keyName] = propertyType;
			}
			else {
				auto newKey = keyName + "_" + to_string(propertyType.values.size());
				auto fullBlockName = "minecraft:" + entry.first;
				specialBlockTypes[fullBlockName][keyName] = newKey;
				globalPropertyTypeMap[newKey] = propertyType;
			}
		}
	}

	auto globalJson = json::object();
	auto propertyTypes = json::object();

	for (auto& propertyTypeEntry : globalPropertyTypeMap) {
		if (propertyTypeEntry.second.serializationName.empty()) {
			continue;
		}
		auto obj = json::object();

		obj["serializationName"] = propertyTypeEntry.second.serializationName;
		obj["valueType"] = propertyTypeEntry.second.valueType;
		if (propertyTypeEntry.second.valueType == "INTEGER") {
			//排序 propertyTypeEntry.second.values 中的值
			std::vector<int> values;
			for (auto& value : propertyTypeEntry.second.values) {
				values.push_back(stoi(value));
			}
			std::sort(values.begin(), values.end());
			obj["values"] = values;
		}
		else if (propertyTypeEntry.second.valueType == "BOOLEAN") {
			//转换成bool
			std::vector<bool> values{ false, true };
			obj["values"] = values;
		}
		else {
			obj["values"] = propertyTypeEntry.second.values;
		}

		propertyTypes[propertyTypeEntry.first] = obj;
	}
	globalJson["propertyTypes"] = propertyTypes;
	globalJson["differentSizePropertyTypes"] = differentSizePropertyTypes;
	globalJson["specialBlockTypes"] = specialBlockTypes;
	writeJSON("data/block_property_types.json", globalJson);
	logger.info("Block property type data have been saved to \"data/block_property_types.json\"");
}