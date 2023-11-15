#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <Nlohmann/json.hpp>
#include <fstream>
#include <direct.h>
#include "zlib.h"
#include "magic_enum.hpp"

//ll header
#include "ll/api/memory/Hook.h"
#include "ll/api/memory/Memory.h"

//mc header
#include <mc/world/level/Level.h>
#include <mc/world/level/block/registry/BlockTypeRegistry.h>
#include <mc/world/level/block/Block.h>
#include <mc/math/Vec3.h>
#include <mc/world/level/material/Material.h>
#include <mc/common/Brightness.h>
#include <mc/resources/BaseGameVersion.h>
#include <mc/server/commands/CommandOrigin.h>
#include <mc/server/commands/CommandOutput.h>
#include "mc/world/phys/AABB.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/Minecraft.h"
#include "mc/world/level/BlockPalette.h"
#include "mc/world/item/registry/ItemRegistryRef.h"
#include "mc/world/item/registry/ItemRegistryManager.h"
#include "mc/world/item/Item.h"
#include "mc/world/level/storage/Experiments.h"
#include "mc/world/item/registry/ItemStack.h"
#include "mc/world/item/registry/CreativeItemRegistry.h"
#include "mc/world/item/components/ItemColorUtil.h"
#include "mc/world/actor/ActorDefinitionGroup.h"
#include "mc/world/actor/ActorInfoRegistry.h"
#include "mc/world/actor/ActorInfo.h"
#include "mc/nbt/ListTag.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/level/biome/registry/BiomeRegistry.h"
#include "mc/world/level/biome/Biome.h"
#include "mc/server/commands/CommandRegistry.h"
#include "mc/network/packet/AvailableCommandsPacket.h"
#include "mc/world/actor/ActorFactory.h"
#include "mc/world/level/storage/LevelData.h"
#include "mc/world/level/PropertyGroupManager.h"
#include "mc/world/level/Spawner.h"
#include "mc/server/commands/MinecraftCommands.h"
#include "mc/world/item/registry/CreativeItemEntry.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/deps/core/utility/BinaryStream.h"
#include "mc/nbt/CompoundTagVariant.h"
#include "mc/world/level/IConstBlockSource.h"
#include <mc/world/actor/ActorDefinitionIdentifier.h>
#include "mc\deps\core\string\HashedString.h"
#include <mc/world/level/BlockPos.h>
#include <mc/world/level/block/utils/GetCollisionShapeInterface.h>
#include <mc\common\wrapper\optional_ref.h>
#include <mc\deps\core\mce\Color.h>
#include <mc\common\ColorFormat.h>
#include "mc\network\NetworkIdentifier.h"
#include "mc\network\ServerNetworkHandler.h"
#include <mc/nbt/NbtIo.h>
#include <mc\common\wrapper\WeakPtr.h>
#include <mc/world/actor/Mob.h>
#include <mc\common\TagRegistry.h>
#include <mc\common\wrapper\IDType.h>
#include <mc\world\level\dimension\Dimension.h>

struct BiomeTagIDType;
struct BiomeTagSetIDType;

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
        std::cout << "\033[0;1;34m" << error << "\033[0m" << std::endl;
    }

    void warn(const std::string& warn) {
        std::cout << "\033[0;1;33m" << warn << "\033[0m" << std::endl;
    }

    void info(const std::string& info) {
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

void dumpEntityAABB(const Level* level, const std::pair<std::string, const ActorDefinitionIdentifier*>& pair,
	nlohmann::basic_json<std::map, std::vector, std::string, bool, int64_t, uint64_t, double, std::allocator, nlohmann::adl_serializer, std::vector<std::uint8_t>>& obj);

void dumpPropertyTypeData();