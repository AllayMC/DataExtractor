#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class CompletedUsingItemPacket : public ::Packet {
public:
    // prevent constructor by default
    CompletedUsingItemPacket& operator=(CompletedUsingItemPacket const &) = delete;
    CompletedUsingItemPacket(CompletedUsingItemPacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@CompletedUsingItemPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@CompletedUsingItemPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@CompletedUsingItemPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@CompletedUsingItemPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1CompletedUsingItemPacket@@UEAA@XZ
    MCVAPI ~CompletedUsingItemPacket();

    // symbol: ??0CompletedUsingItemPacket@@QEAA@FH@Z
    MCAPI CompletedUsingItemPacket(short, int);

    // symbol: ??0CompletedUsingItemPacket@@QEAA@XZ
    MCAPI CompletedUsingItemPacket();

    // NOLINTEND

};

