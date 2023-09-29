#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class TickingAreasLoadStatusPacket : public ::Packet {
public:
    // prevent constructor by default
    TickingAreasLoadStatusPacket& operator=(TickingAreasLoadStatusPacket const &) = delete;
    TickingAreasLoadStatusPacket(TickingAreasLoadStatusPacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@TickingAreasLoadStatusPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@TickingAreasLoadStatusPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@TickingAreasLoadStatusPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@TickingAreasLoadStatusPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1TickingAreasLoadStatusPacket@@UEAA@XZ
    MCVAPI ~TickingAreasLoadStatusPacket();

    // symbol: ??0TickingAreasLoadStatusPacket@@QEAA@XZ
    MCAPI TickingAreasLoadStatusPacket();

    // symbol: ??0TickingAreasLoadStatusPacket@@QEAA@_N@Z
    MCAPI TickingAreasLoadStatusPacket(bool);

    // NOLINTEND

};

