#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class BlockEventPacket : public ::Packet {
public:
    // prevent constructor by default
    BlockEventPacket& operator=(BlockEventPacket const &) = delete;
    BlockEventPacket(BlockEventPacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@BlockEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@BlockEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@BlockEventPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@BlockEventPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1BlockEventPacket@@UEAA@XZ
    MCVAPI ~BlockEventPacket();

    // symbol: ??0BlockEventPacket@@QEAA@VBlockPos@@HH@Z
    MCAPI BlockEventPacket(class BlockPos, int, int);

    // symbol: ??0BlockEventPacket@@QEAA@XZ
    MCAPI BlockEventPacket();

    // NOLINTEND

};

