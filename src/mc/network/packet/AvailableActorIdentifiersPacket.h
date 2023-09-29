#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class AvailableActorIdentifiersPacket : public ::Packet {
public:
    // prevent constructor by default
    AvailableActorIdentifiersPacket& operator=(AvailableActorIdentifiersPacket const &) = delete;
    AvailableActorIdentifiersPacket(AvailableActorIdentifiersPacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@AvailableActorIdentifiersPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@AvailableActorIdentifiersPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@AvailableActorIdentifiersPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 4, symbol: ?read@AvailableActorIdentifiersPacket@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream &);

    // vIndex: 7, symbol: ?_read@AvailableActorIdentifiersPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1AvailableActorIdentifiersPacket@@UEAA@XZ
    MCVAPI ~AvailableActorIdentifiersPacket();

    // symbol: ??0AvailableActorIdentifiersPacket@@QEAA@XZ
    MCAPI AvailableActorIdentifiersPacket();

    // symbol: ??0AvailableActorIdentifiersPacket@@QEAA@AEBV?$vector@UActorInfo@@V?$allocator@UActorInfo@@@std@@@std@@@Z
    MCAPI AvailableActorIdentifiersPacket(std::vector<struct ActorInfo> const &);

    // NOLINTEND

};

