#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/resources/PacketViolationResponse.h"

class PacketViolationWarningPacket : public ::Packet {
public:
    // prevent constructor by default
    PacketViolationWarningPacket& operator=(PacketViolationWarningPacket const &) = delete;
    PacketViolationWarningPacket(PacketViolationWarningPacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@PacketViolationWarningPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@PacketViolationWarningPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@PacketViolationWarningPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@PacketViolationWarningPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1PacketViolationWarningPacket@@UEAA@XZ
    MCVAPI ~PacketViolationWarningPacket();

    // symbol: ??0PacketViolationWarningPacket@@QEAA@XZ
    MCAPI PacketViolationWarningPacket();

    // symbol: ??0PacketViolationWarningPacket@@QEAA@AEBVerror_code@std@@W4PacketViolationResponse@@W4MinecraftPacketIds@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z
    MCAPI PacketViolationWarningPacket(std::error_code const &, ::PacketViolationResponse, ::MinecraftPacketIds, std::string const &);

    // NOLINTEND

};

