#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <fstream>
#include "zlib.h"
#include "magic_enum.hpp"
#include <Nlohmann/json.hpp>
#include <direct.h>

//ll header
#include "ll/memory/Hook.h"
#include "ll/memory/Memory.h"

//mc header
#include "mc/Minecraft.h"
#include "mc/MinecraftCommands.h"
#include "mc/IDataOutput.h"
#include "mc/common/HashedString.h"
#include "mc/world/Dimension.h"
#include "mc/math/AABB.h"
#include "mc/math/Vec3.h"
#include "mc/network/CraftingDataPacket.h"
#include "mc/network/BinaryStream.h"
#include "mc/network/ReadOnlyBinaryStream.h"
#include "mc/nbt/NbtIo.h"
#include "mc/CreativeItemRegistry.h"
#include "mc/item/ItemInstance.h"
#include "mc/item/ItemStack.h"
#include "mc/item/Item.h"
#include "mc/item/ItemRegistryManager.h"
#include "mc/item/ItemRegistryRef.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/util/ItemColorUtil.h"
#include "mc/world/Level.h"
#include "mc/world/BlockPalette.h"
#include "mc/world/BlockLegacy.h"
#include "mc/world/Block.h"
#include "mc/world/Experiments.h"
#include "mc/world/LevelData.h"
#include "mc/world/ActorFactory.h"
#include "mc/ActorDefinitionIdentifier.h"
#include "mc/world/BiomeRegistry.h"
#include "mc/world/Biome.h"
#include "mc/world/ItemTag.h"
#include "mc/world/VanillaItemTags.h"
#include "mc/world/VanillaBlockTags.h"
#include "mc/world/BlockTypeRegistry.h"
#include "mc/world/BlockSource.h"
#include "mc/world/Mob.h"
#include "mc/world/Material.h"
#include "mc/util/Spawner.h"
#include "mc/common/Brightness.h"
#include "mc/math/BlockPos.h"
#include "mc/util/json/Value.h"

class ServerNetworkHandler {
public:
	// symbol: ?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVTextPacket@@@Z
	// 只是前向声明这两个类作为参数，不需要导入它们
	MCVAPI void handle(class NetworkIdentifier const&, class TextPacket const&);
};
struct BiomeTagIDType;
struct BiomeTagSetIDType;
class GetCollisionShapeInterface {
public:
	// prevent constructor by default
	GetCollisionShapeInterface& operator=(GetCollisionShapeInterface const&);
	GetCollisionShapeInterface(GetCollisionShapeInterface const&);
	GetCollisionShapeInterface();
};

class BigEndianStringByteOutput {
	void writeBigEndianBytes(std::byte* bytes, size_t count) {
		auto right = bytes + count - 1;
		if (right >= bytes) {
			auto left = bytes;
			do {
				auto tmp = *left;
				*left = *right;
				*right-- = tmp;
			} while (left++ < right);
		}
		writeBytes(bytes, count);
	}

public:
	virtual ~BigEndianStringByteOutput() = default;
	;
	virtual void* writeString(std::string_view string_span) {
		void* (*rv)(void*, std::string_view);
		*((void**)&rv) = LL_RESOLVE_SYMBOL("?writeString@BytesDataOutput@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z");
		return (*rv)((void*)this, std::move(string_span));
	}

	virtual void* writeLongString(std::string_view string_span) {
		void* (*rv)(void*, std::string_view);
		*((void**)&rv) = LL_RESOLVE_SYMBOL("?writeLongString@BytesDataOutput@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z");
		return (*rv)((void*)this, std::move(string_span));
	}
	virtual void writeFloat(float data) {
		writeBigEndianBytes((std::byte*)&data, 4);
	}
	virtual void writeDouble(double data) {
		writeBigEndianBytes((std::byte*)&data, 8);
	}
	virtual void writeByte(std::byte data) {
		writeBytes(&data, 1);
	}
	virtual void writeShort(short data) {
		writeBigEndianBytes((std::byte*)&data, 2);
	}
	virtual void writeInt(int data) {
		writeBigEndianBytes((std::byte*)&data, 4);
	}
	virtual void writeLongLong(long long data) {
		writeBigEndianBytes((std::byte*)&data, 8);
	}
	virtual void* writeBytes(std::byte* bytes, size_t count) {
		void* (*rv)(void*, std::byte*, size_t);
		*((void**)&rv) = LL_RESOLVE_SYMBOL("?writeBytes@StringByteOutput@@UEAAXPEBX_K@Z");
		return (*rv)((void*)this, bytes, count);
	}
};

class Logger {
public:
	void error(const std::string& error) {
		std::cout << "\033[0;1;31m" << error << "\033[0m" << std::endl;
	}

	void warn(const std::string& warn) {
		std::cout << "\033[0;1;33m" << warn << "\033[0m" << std::endl;
	}

	void info(const std::string& info) {
		std::cout << "\033[0;1;32m" << info << "\033[0m" << std::endl;
	}

	void text(const std::string& info) {
		std::cout << "\033[0;1;37m" << info << "\033[0m" << std::endl;
	}
};
void extractData();

void dumpBlockAttributesData();

void dumpItemData();

void dumpEntityData();

void dumpCreativeItemData();

void dumpPalette();

void dumpBlockIdToItemIdMap();

void dumpBiomeData();

void dumpCommandArgData();

void dumpAvailableCommand();

void dumpItemTags();

void dumpBlockTags();

void dumpEntityAABB(const Level* level, const std::pair<std::string, const ActorDefinitionIdentifier*>& pair,
	nlohmann::basic_json<std::map, std::vector, std::string, bool, int64_t, uint64_t, double, std::allocator, nlohmann::adl_serializer, std::vector<std::uint8_t>>& obj);

void dumpPropertyTypeData();

static void writeJSON(const std::string& fileName, const Json::Value& json);

static void writeJSON(const std::string& fileName, const nlohmann::json& json);

static bool folderExists(std::string folderName);

static void createFolder(std::string folderName);