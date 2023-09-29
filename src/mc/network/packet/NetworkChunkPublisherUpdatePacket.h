#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class NetworkChunkPublisherUpdatePacket : public ::Packet {
public:
    // prevent constructor by default
    NetworkChunkPublisherUpdatePacket& operator=(NetworkChunkPublisherUpdatePacket const &) = delete;
    NetworkChunkPublisherUpdatePacket(NetworkChunkPublisherUpdatePacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@NetworkChunkPublisherUpdatePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@NetworkChunkPublisherUpdatePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@NetworkChunkPublisherUpdatePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@NetworkChunkPublisherUpdatePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1NetworkChunkPublisherUpdatePacket@@UEAA@XZ
    MCVAPI ~NetworkChunkPublisherUpdatePacket();

    // symbol: ??0NetworkChunkPublisherUpdatePacket@@QEAA@AEBVBlockPos@@I@Z
    MCAPI NetworkChunkPublisherUpdatePacket(class BlockPos const &, uint);

    // symbol: ??0NetworkChunkPublisherUpdatePacket@@QEAA@XZ
    MCAPI NetworkChunkPublisherUpdatePacket();

    // NOLINTEND

};

