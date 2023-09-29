#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class DimensionDataPacket : public ::Packet {
public:
    // prevent constructor by default
    DimensionDataPacket& operator=(DimensionDataPacket const &) = delete;
    DimensionDataPacket(DimensionDataPacket const &) = delete;
    DimensionDataPacket() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@DimensionDataPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@DimensionDataPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@DimensionDataPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@DimensionDataPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1DimensionDataPacket@@UEAA@XZ
    MCVAPI ~DimensionDataPacket();

    // symbol: ??0DimensionDataPacket@@QEAA@AEBVDimensionDefinitionGroup@@@Z
    MCAPI DimensionDataPacket(class DimensionDefinitionGroup const &);

    // NOLINTEND

};

