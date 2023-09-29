#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class SetScoreboardIdentityPacket : public ::Packet {
public:
    // prevent constructor by default
    SetScoreboardIdentityPacket& operator=(SetScoreboardIdentityPacket const &) = delete;
    SetScoreboardIdentityPacket(SetScoreboardIdentityPacket const &) = delete;
    SetScoreboardIdentityPacket() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@SetScoreboardIdentityPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@SetScoreboardIdentityPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@SetScoreboardIdentityPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@SetScoreboardIdentityPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1SetScoreboardIdentityPacket@@UEAA@XZ
    MCVAPI ~SetScoreboardIdentityPacket();

    // symbol: ?change@SetScoreboardIdentityPacket@@SA?AV1@AEBUScoreboardId@@AEBUPlayerScoreboardId@@@Z
    MCAPI static class SetScoreboardIdentityPacket change(struct ScoreboardId const &, struct PlayerScoreboardId const &);

    // NOLINTEND

};

