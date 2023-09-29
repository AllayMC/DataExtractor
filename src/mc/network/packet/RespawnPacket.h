#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/actor/player/PlayerRespawnState.h"

class RespawnPacket : public ::Packet {
public:
    // prevent constructor by default
    RespawnPacket& operator=(RespawnPacket const &) = delete;
    RespawnPacket(RespawnPacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@RespawnPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@RespawnPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@RespawnPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@RespawnPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1RespawnPacket@@UEAA@XZ
    MCVAPI ~RespawnPacket();

    // symbol: ??0RespawnPacket@@QEAA@XZ
    MCAPI RespawnPacket();

    // symbol: ??0RespawnPacket@@QEAA@AEBVVec3@@AEBW4PlayerRespawnState@@@Z
    MCAPI RespawnPacket(class Vec3 const &, ::PlayerRespawnState const &);

    // NOLINTEND

};

