#include "DataExtractor.h"

using json = nlohmann::json;
using namespace std;

static Minecraft* mc = nullptr;
static Dimension* overworld = nullptr;
static MinecraftCommands* commands = nullptr;
static unsigned int blockStateCounter = 0;
static AABB ZERO_AABB = AABB(Vec3(0, 0, 0), Vec3(0, 0, 0));

#pragma region HOOK 
LL_AUTO_TYPED_INSTANCE_HOOK(
	PlayerChatEventHook,
	ll::memory::HookPriority::Normal,
	ServerNetworkHandler,
	"?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVTextPacket@@@Z",
	void,
	NetworkIdentifier* id,
	void* text
) {
	std::string     originMessage = ll::memory::dAccess<std::string>(text, 88);
	origin(id, text);
	if (originMessage == "ext") {
		extractData();
	}
	return;
}

// Dimension
LL_AUTO_TYPED_INSTANCE_HOOK(
	DimensionService,
	ll::memory::HookPriority::Normal,
	Dimension,
	"?init@Dimension@@UEAAXXZ",
	void*,
	Dimension* a1
) {
	if (a1->getHeight() > 256) {
		std::cout << "INJECT DIMENSION INSTANCE" << std::endl;
		overworld = a1;
	}
	return origin(a1);
}

//Recipe packet
LL_AUTO_TYPED_INSTANCE_HOOK(
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
	stream.writeString(data);
	auto out = ofstream("data/crafting_data_packet.bin", ofstream::out | ofstream::binary | ofstream::trunc);
	out << datacopy;
	out.close();
	Logger logger;
	logger.info("create crafting_data_packet.bin success!");
}

// Minecraft
LL_AUTO_TYPED_INSTANCE_HOOK(
	MinecraftHook,
	HookPriority::Normal,
	Minecraft,
	"?initAsDedicatedServer@Minecraft@@QEAAXXZ",
	void
) {
	mc = this;
	origin();
	std::cout << "INJECT MINECRAFT INSTANCE" << std::endl;
}

// MinecraftCommands
LL_AUTO_TYPED_INSTANCE_HOOK(
	MinecraftCommandsHook,
	HookPriority::Normal,
	MinecraftCommands,
	"?initCoreEnums@MinecraftCommands@@QEAAXVItemRegistryRef@@AEBVIWorldRegistriesProvider@@AEBVActorFactory@"
	"@AEBVExperiments@@AEBVBaseGameVersion@@@Z",
	void,
	void* a2,
	int64 a3,
	int64 a4,
	void* a5,
	void* a6
) {
	commands = this;
	origin(a2, a3, a4, a5, a6);
	std::cout << "INJECT MINECRAFTCOMMANDS INSTANCE" << std::endl;
}
#pragma endregion HOOK

#pragma region TOOL_FUNCTION
static bool folderExists(std::string folderName) {
	struct stat info {};
	if (stat(folderName.c_str(), &info) != 0) {
		return false;
	}
	else if (info.st_mode & S_IFDIR) {
		return true;
	}
	else {
		return false;
	}
}

static void createFolder(std::string folderName) {
	Logger logger;
	int result = _mkdir(folderName.c_str());
	if (result != 0) {
		logger.error("Failed to create folder.");
	}
	else {
		logger.info("Folder " + string(folderName) + " created successfully.");
	}
}

static void saveFile(string const& name, vector<string>& blocks) {
	sort(blocks.begin(), blocks.end(), [](string const& a, string const& b) { return a < b; });
	auto out = ofstream("block_categories/" + name + ".txt", ofstream::out | ofstream::trunc);
	for (string& b : blocks) {
		out << b << endl;
	}
	out.close();
}

static bool gzip_compress(const std::string& original_str, std::string& str) {
	z_stream d_stream = { 0 };
	if (Z_OK != deflateInit2(&d_stream, Z_BEST_COMPRESSION, Z_DEFLATED, MAX_WBITS + 16, 9, Z_DEFAULT_STRATEGY)) {
		return false;
	}
	unsigned long len = compressBound(original_str.size());
	auto* buf = (unsigned char*)malloc(len);
	if (!buf) {
		return false;
	}
	d_stream.next_in = (unsigned char*)(original_str.c_str());
	d_stream.avail_in = original_str.size();
	d_stream.next_out = buf;
	d_stream.avail_out = len;
	deflate(&d_stream, Z_SYNC_FLUSH);
	deflateEnd(&d_stream);
	str.assign((char*)buf, d_stream.total_out);
	free(buf);
	return true;
}

static void writeNBT(const string& fileName, CompoundTag* tag) {
	void* vtbl;
	auto tmp = BigEndianStringByteOutput();
	vtbl = *(void**)&tmp;
	string result = "";
	void* iDataOutput[2] = { vtbl, &result };
	NbtIo::write(tag, (IDataOutput&)iDataOutput);
	string v;
	gzip_compress(result, v);
	auto out = ofstream(fileName, ofstream::out | ofstream::binary | ofstream::trunc);
	out << v;
	out.close();
}

static void writeJSON(const string& fileName, const nlohmann::json& json) {
	auto out = ofstream(fileName, ofstream::out | ofstream::trunc);
	out << json.dump(4);
	out.close();
}

static void writeJSON(const string& fileName, const Json::Value& json) {
	auto out = ofstream(fileName, ofstream::out | ofstream::trunc);
	out << json.toStyledString();
	out.close();
}

static std::unique_ptr<class CompoundTag> createCompound() {
	return std::make_unique<CompoundTag>();
}

static std::unique_ptr<class ListTag> createListTag() {
	return std::make_unique<ListTag>();
}

static std::string aabbToStr(const AABB& aabb) {
	stringstream aabbStr;
	aabbStr << aabb.min.x << "," << aabb.min.y << "," << aabb.min.z << "," << aabb.max.x << "," << aabb.max.y << "," << aabb.max.z;
	return aabbStr.str();
}
#pragma endregion TOOL_FUNCTION

void PluginInit() {
	Logger logger;
	logger.info("DataExtractor plugin loaded!");
	if (!folderExists("data")) {
		createFolder("data");
	}
}

void extractData() {
	dumpCreativeItemData();
	dumpBlockAttributesData();
	dumpItemData();
	dumpEntityData();
	dumpPalette();
	dumpBlockIdToItemIdMap();
	dumpBiomeData();
	//dumpCommandArgData();
	//dumpAvailableCommand();
	dumpPropertyTypeData();
	dumpItemTags();
	dumpBlockTags();
}

void dumpCreativeItemData() {
	Logger logger;

	logger.info("Extracting creative items...");

	auto global = createCompound();
	unsigned int index = 0;
	CreativeItemRegistry::forEachCreativeItemInstance([&logger, &index, &global](const ItemInstance& itemInstance) {
		if (itemInstance.getName().empty()) {
			logger.warn("Failed to extract creative item - " + itemInstance.getName() + ", index: " + to_string(index));
			return true;
		}
		logger.text("Extracting creative item - " + itemInstance.getName() + ", index: " + to_string(index));
		auto obj = createCompound();
		obj->putInt64("index", index);
		obj->putString("name", itemInstance.getItem()->getFullItemName());
		obj->putInt("damage", itemInstance.getAuxValue());
		if (itemInstance.isBlock()) {
			obj->putInt("blockStateHash", itemInstance.getBlock()->computeRawSerializationIdHashForNetwork());
		}
		auto nbt = itemInstance.save();
		if (nbt->contains("tag")) {
			obj->put("tag", nbt->getCompound("tag")->copy());
		}
		global->put(to_string(index), obj->copy());
		index++;
		});
	writeNBT("data/creative_items.nbt", global.get());
	global.release();
	logger.info(R"(Creative items data has been saved to "data/creative_items.nbt")");
}

std::unique_ptr<class CompoundTag> generateNBTFromBlockState(const Block& block) {
	Logger logger;
	auto nbt = createCompound();
	try {
		auto& legacy = block.getLegacyBlock();
		auto name = legacy.getNamespace() + ":" + legacy.getRawNameId();
		logger.text("Extracting block state - " + name + ":" + to_string(block.getRuntimeId()));
		const Material& material = legacy.getMaterial();
		auto sid = block.getSerializationId().clone();
		nbt->putString("name", sid->getString("name"));
		nbt->putString("descriptionId", block.getDescriptionId());
		nbt->putString("blockEntityName", string(magic_enum::enum_name(block.getBlockEntityType())));
		nbt->putCompound("states", sid->getCompound("states")->clone());
		nbt->putFloat("thickness", block.getThickness());
		nbt->putFloat("friction", block.getFriction());
		nbt->putFloat("hardness", block.getDestroySpeed());
		nbt->putFloat("explosionResistance", block.getExplosionResistance());
		nbt->putFloat("translucency", material.getTranslucency());
		nbt->putInt("version", sid->getInt("version"));
		nbt->putInt("runtimeId", block.getRuntimeId());
		nbt->putInt("blockStateHash", ((name != "minecraft:unknown") ? block.computeRawSerializationIdHashForNetwork() : -2));
		nbt->putInt("burnChance", block.getFlameOdds());
		nbt->putInt("burnAbility", block.getBurnOdds());
		nbt->putInt("lightDampening", (int)block.getLight().value);//挡光
		nbt->putInt("lightEmission", (int)block.getLightEmission().value);//发光
		mce::Color color = block.getMapColor(overworld->getBlockSourceFromMainChunkSource(), BlockPos(0, 10, 0));
		auto colornbt = createCompound();
		colornbt->putInt("r", (int)(color.r * 255));
		colornbt->putInt("g", (int)(color.g * 255));
		colornbt->putInt("b", (int)(color.b * 255));
		colornbt->putInt("a", (int)(color.a * 255));
		colornbt->putString("hexString", color.toHexString());
		nbt->putCompound("color", colornbt->clone());
		AABB tmp = AABB(0, 0, 0, 0, 0, 0);
		block.getCollisionShapeForCamera(tmp, *(IConstBlockSource*)&overworld->getBlockSourceFromMainChunkSource(), BlockPos(0, 0, 0));
		nbt->putString("aabbVisual", aabbToStr(tmp));
		AABB tmp2 = AABB(0, 0, 0, 0, 0, 0);
		class optional_ref<class GetCollisionShapeInterface const> nullRef {};
		block.getCollisionShape(tmp2, *(IConstBlockSource*)&overworld->getBlockSourceFromMainChunkSource(), BlockPos(0, 0, 0), nullRef);
		nbt->putString("aabbCollision", aabbToStr(tmp2));

		nbt->putBoolean("hasCollision", tmp2 != ZERO_AABB);
		nbt->putBoolean("hasBlockEntity", block.getBlockEntityType() != BlockActorType::Undefined);
		nbt->putBoolean("isAir", block.isAir());
		nbt->putBoolean("isBounceBlock", block.isAir());
		nbt->putBoolean("isButtonBlock", block.isButtonBlock());
		nbt->putBoolean("isCropBlock", block.isCropBlock());
		nbt->putBoolean("isDoorBlock", block.isDoorBlock());
		nbt->putBoolean("isFenceBlock", block.isFenceBlock());
		nbt->putBoolean("isFenceGateBlock", block.isFenceGateBlock());
		nbt->putBoolean("isThinFenceBlock", block.isThinFenceBlock());
		nbt->putBoolean("isFallingBlock", block.isFallingBlock());
		nbt->putBoolean("isStemBlock", block.isStemBlock());
		nbt->putBoolean("isSlabBlock", block.isSlabBlock());
		nbt->putBoolean("isLiquid", material.isLiquid());
		nbt->putBoolean("isAlwaysDestroyable", material.isAlwaysDestroyable());//是否可以被空手破坏且获取方块
		nbt->putBoolean("isLavaFlammable", block.isLavaFlammable());//是否可燃
		nbt->putBoolean("isUnbreakable", block.isUnbreakable());//是否不可破坏
		nbt->putBoolean("isPowerSource", block.isSignalSource());
		//nbt->putBoolean("breaksFallingBlocks", block.breaksFallingBlocks(BaseGameVersion()));未知作用
		nbt->putBoolean("isWaterBlocking", block.isWaterBlocking());//是否能阻挡水
		nbt->putBoolean("isMotionBlockingBlock", block.isMotionBlockingBlock());//是否能阻挡移动
		nbt->putBoolean("hasComparatorSignal", block.hasComparatorSignal());//是否能产生比较器信号
		nbt->putBoolean("pushesUpFallingBlocks", block.pushesUpFallingBlocks());//活塞类方块
		//nbt->putBoolean("waterSpreadCausesSpawn", block.waterSpreadCausesSpawn());未知作用
		nbt->putBoolean("canContainLiquid", block.getLegacyBlock().canContainLiquid());
		//nbt->putBoolean("canBeMovingBlock", material.getBlocksMotion());和isMotionBlockingBlock一个作用
		//nbt->putBoolean("blocksPrecipitation", material.getBlocksPrecipitation());未知作用
		nbt->putBoolean("superHot", material.isSuperHot());//可以导致着火的方块
		//nbt->putBoolean("canBeBrokenFromFalling", block.canBeBrokenFromFalling());未知作用
		nbt->putBoolean("isSolid", block.isSolid());
		//nbt->putBoolean("isSolidBlocking", material.isSolidBlocking());未知作用
		nbt->putBoolean("isContainerBlock", block.isContainerBlock());

	}
	catch (exception& e) {
		logger.error("Exception caught : " + string(e.what()));
	}

	return nbt;
}

void dumpBlockAttributesData() {
	Logger logger;
	logger.info("Extracting block states' attributes...");
	auto& palette = mc->getLevel()->getBlockPalette();
	int airCount = 0;
	auto array = json::array();

	auto tag = createCompound();
	auto list = createListTag();
	blockStateCounter = 0;
	while (true) {
		auto& block = palette.getBlock(blockStateCounter);
		//HACK: 用于确定最大size
		if (block.getName().getString() == "minecraft:air") {
			airCount++;
			if (airCount == 2) {
				blockStateCounter--;
				break;
			}
		}
		auto obj2 = generateNBTFromBlockState(block);
		list->add(obj2->copy());
		blockStateCounter++;
	}
	tag->put("block", list->copyList());
	logger.info("Successfully extract " + to_string(blockStateCounter) + " block states' attributes!");
	writeNBT("data/block_attributes.nbt", tag.get());
	logger.info(R"(Block attribute data have been saved to "data/block_attributes.nbt")");
	tag.release();
	list.release();
}


std::unique_ptr<class CompoundTag> generateNBTFromItem(const Item& item) {
	Logger logger;
	auto nbt = createCompound();
	logger.info("Extracting item - " + item.getFullItemName());
	nbt->putShort("id", item.getId());
	try {
		if (!item.getLegacyBlock().expired() && item.getLegacyBlock().get() != nullptr)
			nbt->putString("blockId", item.getLegacyBlock()->getNamespace() + ":" + item.getLegacyBlock()->getRawNameId());
	}
	catch (exception& e) {
		logger.warn("Exception occur when trying to get block for item " + item.getFullItemName());
	}
	nbt->putString("descriptionId", item.getDescriptionId());
	nbt->putString("name", item.getFullItemName());
	nbt->putShort("maxDamage", item.getMaxDamage());//最大耐久
	nbt->putBoolean("isArmor", item.isArmor());
	nbt->putBoolean("isBlockPlanterItem", item.isBlockPlanterItem());
	nbt->putBoolean("isDamageable", item.isDamageable());
	nbt->putBoolean("isDye", item.isDye());
	nbt->putString("itemColorName", ItemColorUtil::getName(item.getItemColor()));
	nbt->putInt("itemColorRGB", ItemColorUtil::getRGBColor(item.getItemColor()));
	nbt->putBoolean("isFertilizer", item.isFertilizer());
	nbt->putBoolean("isThrowable", item.isThrowable());
	nbt->putBoolean("isFood", item.isFood());
	nbt->putBoolean("isUseable", item.isUseable());
	nbt->putBoolean("isElytra", item.isElytra());
	nbt->putBoolean("canBeDepleted", item.canBeDepleted());
	nbt->putBoolean("canDestroyInCreative", item.canDestroyInCreative());
	nbt->putBoolean("canUseOnSimTick", item.canUseOnSimTick());
	nbt->putBoolean("canBeCharged", item.canBeCharged());
	nbt->putString("creativeGroup", item.getCreativeGroup());
	nbt->putInt("creativeCategory", (int)item.getCreativeCategory());
	nbt->putInt("armorValue", item.getArmorValue());
	nbt->putInt("attackDamage", item.getAttackDamage());
	nbt->putInt("toughnessValue", item.getToughnessValue());
	nbt->putFloat("viewDamping", item.getViewDamping());
	nbt->putInt("cooldownTime", item.getCooldownTime());
	nbt->putString("cooldownType", item.getCooldownType().getString());
	//必须在最后，因为构建itemstack持有了item
	nbt->putInt("maxStackSize", (int)ItemStack(item, 1, 0, 0).getMaxStackSize());
	return nbt;
}

void dumpItemData() {
	Logger logger;
	auto tag = createCompound();
	auto list = createListTag();
	short counter = 0;
	for (short id = -2000; id <= 2000; id++) {
		WeakPtr<Item> item = ItemRegistryManager::getItemRegistry().getItem(id);
		if (item.expired()) {
			continue;
		}
		std::unique_ptr<class CompoundTag> obj2 = generateNBTFromItem(*item);
		list->add(obj2->copy());
		counter++;
	}
	tag->put("item", list->copyList());
	logger.info("Successfully extract " + to_string(counter) + " items' data!");
	writeNBT("data/item_data.nbt", tag.get());
	tag.release();
	logger.info(R"(Items' data have been saved to "data/item_data.nbt")");
}

void dumpEntityAABB(const Level* level, const pair<string, const ActorDefinitionIdentifier*>& pair,
	nlohmann::basic_json<map, vector, string, bool, int64_t, uint64_t, double, allocator, nlohmann::adl_serializer, vector<std::uint8_t>>& obj) {
	Logger logger;
	Mob* actor = level->getSpawner().spawnMob(overworld->getBlockSourceFromMainChunkSource(), pair.first, nullptr, Vec3(0, 64, 0), false, true, false);
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
		//todo: nbt
		actor->kill();
	}
}

void dumpEntityData() {
	Logger logger;

	auto level = mc->getLevel();
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

		dumpEntityAABB(level, pair, obj);

		global[pair.second->getCanonicalName()] = obj;
	}
	writeJSON("data/entity_data.json", global);
	logger.info("Entities' data have been saved to \"data/entity_data.json\"");
}

void dumpPalette() {
	Logger logger;

	logger.info("Extracting block palette...");

	auto& palette = mc->getLevel()->getBlockPalette();

	auto global = createCompound();
	auto blocks = createListTag();
	for (int i = 0; i <= blockStateCounter; ++i) {
		blocks->add(palette.getBlock(i).getSerializationId().clone());
	}
	global->put("blocks", blocks->copyList());
	writeNBT("data/block_palette.nbt", global.get());
	global.release();
	blocks.release();
	logger.info(R"(Block palette table has been saved to "data/block_palette.nbt"))");
}

void dumpBlockIdToItemIdMap() {
	Logger logger;
	logger.info("Extracting block id to item id map...");
	auto nbt = createCompound();
	json json;

	int i = -2000;
	while (i <= 2000) {
		auto item = ItemRegistryManager::getItemRegistry().getItem(static_cast<short>(i));
		i++;
		if (item.expired() || item.get() == nullptr) {
			continue;
		}
		logger.text("Extracting block id to item id map:" + item.get()->getFullItemName());
		string item_id = item->getFullItemName();
		auto& block = item->getLegacyBlock();
		string block_id;
		bool hasBlock = !block.expired() && block.get() != nullptr;
		if (hasBlock)
			block_id = block->getNamespace() + ":" + block->getRawNameId();
		//HACK: 这是一个BDS的bug, 我们需要手动修复
		//TODO: 删除这个HACK当BDS修复了之后
		if (item_id.ends_with("_hanging_sign") || item_id == "minecraft:bamboo_door" || item_id == "minecraft:cherry_door") {
			hasBlock = true;
			block_id = item_id;
		}
		if (hasBlock) {
			nbt->putString(block_id, item_id);
			json[block_id] = item_id;
			logger.info(block_id + " -> " + item_id);
		}
	}

	writeNBT("data/block_id_to_item_id_map.nbt", nbt.get());
	nbt.release();
	writeJSON("data/block_id_to_item_id_map.json", json);
	logger.info(R"(Block id to item id map has been saved to "data/block_id_to_item_id_map.json", "data/block_id_to_item_id_map.nbt"))");
}


void dumpBiomeData() {
	Logger logger;
	BiomeRegistry const& registry = mc->getLevel()->getBiomeRegistry();
	auto biomeInfoMap = json::object();
	auto biomes = createCompound();
	registry.forEachBiome([&biomes, &registry, &logger, &biomeInfoMap](Biome& biome) {
		string name = ll::memory::dAccess<HashedString>(&biome, 8).getString();
		int id = ll::memory::dAccess<int>(&biome, 136);
		logger.info("Extracting biome data - " + name);
		auto tag = createCompound();
		TagRegistry<IDType<BiomeTagIDType>, IDType<BiomeTagSetIDType>>& tagRegistry = const_cast<TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>>&>(registry.getTagRegistry());
		biome.writePacketData(*tag, tagRegistry);
		biomes->put(name, tag->copy());

		auto obj = json::object();
		obj["id"] = id;
		obj["type"] = string(magic_enum::enum_name(biome.getBiomeType()));
		biomeInfoMap[name] = obj;
		});
	writeNBT("data/biome_definitions.nbt", biomes.get());
	biomes.release();
	writeJSON("data/biome_id_and_type.json", biomeInfoMap);
	logger.info(R"(Biome definitions has been saved to "data/biome_definitions.nbt" and "data/biome_id_and_type.json")");
}

void dumpCommandArgData() {
	//Logger logger;

	//CommandRegistry& registry = commands->getRegistry();
	//auto global = json::object();
	//registry.forEachNonTerminal([&logger, &global,&registry](auto symbol) {
	//	//buggy toString
	//	string sym = registry.symbolToString(symbol);
	//	logger.info("Extracting command arg type - " + sym);
	//	auto obj = json::object();
	//	obj["value"] = symbol.value();
	//	obj["index"] = symbol.toIndex();
	//	global[sym] = obj;
	//	});
	//writeJSON("data/command_arg_types.json", global);
	//logger.info("Command arg type data have been saved to \"data/command_arg_types.json\"");
}

void dumpAvailableCommand() {
	/*Logger logger;

	CommandRegistry& registry = commands->getRegistry();
	auto aCmdPk = registry.serializeAvailableCommands();
	logger.info("Extracting available command data...");

	auto global = json::object();

	logger.info("Extracting all enums...");
	global["allEnums"] = aCmdPk.mEnumValues;
	logger.info("Extracting all suffix...");
	global["allSuffix"] = aCmdPk.mPostfixes;

	logger.info("Extracting enum data array...");
	auto enumDataArray = json::array();
	for (auto& enumData : aCmdPk.mEnums) {
		auto obj = json::object();

		obj["name"] = enumData.name;
		obj["valueIndices"] = enumData.valueIndices;

		enumDataArray.push_back(obj);
	}
	global["enumDatas"] = enumDataArray;

	logger.info("Extracting chained subcommand value array...");
	global["chainedSubcommandValues"] = aCmdPk.mSubcommandValues;

	logger.info("Extracting chained subcommand array...");
	auto chainedSubcommandArray = json::array();
	for (auto& chainedSubcommand : aCmdPk.mSubcommands) {
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
	for (auto& commandData : aCmdPk.mCommands) {
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
		obj["aliasIndex"] = commandData.aliasEnumIndex;

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
	for (auto& constrainedValueData : aCmdPk.mConstraints) {
		auto constrainedValueDataObj = json::object();

		constrainedValueDataObj["enumIndex"] = constrainedValueData.enumValueIndex;
		constrainedValueDataObj["enumNameIndex"] = constrainedValueData.enumNameIndex;
		constrainedValueDataObj["indices"] = constrainedValueData.indices;

		constrainedValueDataArray.push_back(constrainedValueDataObj);
	}
	global["constrainedValueData"] = constrainedValueDataArray;
	writeJSON("data/available_commands.json", global);
	logger.info("Available commands' data has been saved to \"data/available_commands.json\"");*/
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

	auto& palette = mc->getLevel()->getBlockPalette();
	for (int i = 0; i <= blockStateCounter; ++i) {
		const Block& block = palette.getBlock(i);
		auto name = block.getLegacyBlock().getRawNameId();
		if (!blockToBlockStateData.contains(name)) {
			blockToBlockStateData[name] = std::vector<std::unique_ptr<class CompoundTag>>();
		}
		auto& blockStates = blockToBlockStateData[name];
		auto nbt = block.getSerializationId().clone();
		if (nbt->contains("states") && !nbt->getCompound("states")->isEmpty()) {
			blockStates.push_back(nbt->getCompound("states")->clone());
		}
	}

	std::map<std::string, std::map<std::string, PropertyType>> blockToPropertyTypeMap;

	for (auto& entry : blockToBlockStateData) {
		auto& states = entry.second;
		std::map<std::string, PropertyType> propertyTypeMap;

		for (auto& state : states) {
			for (auto& valueEntry : state->rawView()) {
				if (!propertyTypeMap.contains(valueEntry.first)) {
					PropertyType p;
					p.serializationName = valueEntry.first;
					p.blockName = entry.first;
					propertyTypeMap[p.serializationName] = p;
				}
				auto& propertyType = propertyTypeMap[valueEntry.first];
				switch (valueEntry.second.get()->getId()) {
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

void dumpItemTags() {
#define DUMP(C)                                                                \
        do {                                                                   \
          auto items = ItemRegistryManager::getItemRegistry().lookupByTag(VanillaItemTags::##C);                  \
          auto arr = nlohmann::json::array();                                  \
          for (auto item : items) {                                            \
            arr.push_back(item->getFullItemName());                            \
          }                                                                    \
          res[VanillaItemTags::##C.getString()] = arr;                           \
        } while (false)
	nlohmann::json res = nlohmann::json::object();
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

void dumpBlockTags() {
	nlohmann::json res = nlohmann::json::object();
#define DUMP(TAG)                                                              \
        do {                                                                   \
          auto arr = nlohmann::json::array();                                  \
          BlockTypeRegistry::forEachBlock([&arr](const BlockLegacy &b) {       \
            if (b.hasTag(VanillaBlockTags::##TAG)) {                           \
              arr.push_back(b.getRawNameId());                                 \
            }                                                                  \
            return true;                                                       \
          });                                                                  \
          res[VanillaBlockTags::##TAG.getString()] = arr;                      \
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