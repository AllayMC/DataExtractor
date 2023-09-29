#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class EntityServerPacket : public ::Packet {
public:
    // prevent constructor by default
    EntityServerPacket& operator=(EntityServerPacket const &) = delete;
    EntityServerPacket(EntityServerPacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?write@EntityServerPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@EntityServerPacket@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1EntityServerPacket@@UEAA@XZ
    MCVAPI ~EntityServerPacket();

    // symbol: ??0EntityServerPacket@@QEAA@AEBVEntityContext@@@Z
    MCAPI EntityServerPacket(class EntityContext const &);

    // symbol: ??0EntityServerPacket@@QEAA@XZ
    MCAPI EntityServerPacket();

    // NOLINTEND

};

