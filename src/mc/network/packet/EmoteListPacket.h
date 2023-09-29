#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class EmoteListPacket : public ::Packet {
public:
    // prevent constructor by default
    EmoteListPacket& operator=(EmoteListPacket const &) = delete;
    EmoteListPacket(EmoteListPacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@EmoteListPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@EmoteListPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@EmoteListPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@EmoteListPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1EmoteListPacket@@UEAA@XZ
    MCVAPI ~EmoteListPacket();

    // symbol: ??0EmoteListPacket@@QEAA@VActorRuntimeID@@@Z
    MCAPI EmoteListPacket(class ActorRuntimeID);

    // symbol: ??0EmoteListPacket@@QEAA@XZ
    MCAPI EmoteListPacket();

    // symbol: ?MAX_EMOTE_PIECE_IDS@EmoteListPacket@@2HB
    MCAPI static int const MAX_EMOTE_PIECE_IDS;

    // NOLINTEND

};

