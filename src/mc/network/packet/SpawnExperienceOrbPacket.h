#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SpawnExperienceOrbPacket : public ::Packet {
public:
    // prevent constructor by default
    SpawnExperienceOrbPacket& operator=(SpawnExperienceOrbPacket const &) = delete;
    SpawnExperienceOrbPacket(SpawnExperienceOrbPacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@SpawnExperienceOrbPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@SpawnExperienceOrbPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@SpawnExperienceOrbPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@SpawnExperienceOrbPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1SpawnExperienceOrbPacket@@UEAA@XZ
    MCVAPI ~SpawnExperienceOrbPacket();

    // symbol: ??0SpawnExperienceOrbPacket@@QEAA@AEBVVec3@@H@Z
    MCAPI SpawnExperienceOrbPacket(class Vec3 const &, int32_t);

    // symbol: ??0SpawnExperienceOrbPacket@@QEAA@XZ
    MCAPI SpawnExperienceOrbPacket();

    // NOLINTEND

};

