#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class CommandBlockUpdatePacket : public ::Packet {
public:
    // prevent constructor by default
    CommandBlockUpdatePacket& operator=(CommandBlockUpdatePacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@CommandBlockUpdatePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@CommandBlockUpdatePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@CommandBlockUpdatePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@CommandBlockUpdatePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1CommandBlockUpdatePacket@@UEAA@XZ
    MCVAPI ~CommandBlockUpdatePacket();

    // symbol: ??0CommandBlockUpdatePacket@@QEAA@AEBV0@@Z
    MCAPI CommandBlockUpdatePacket(class CommandBlockUpdatePacket const &);

    // symbol: ??0CommandBlockUpdatePacket@@QEAA@XZ
    MCAPI CommandBlockUpdatePacket();

    // NOLINTEND

};

