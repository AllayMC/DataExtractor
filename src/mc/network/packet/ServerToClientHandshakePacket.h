#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ServerToClientHandshakePacket : public ::Packet {
public:
    // prevent constructor by default
    ServerToClientHandshakePacket& operator=(ServerToClientHandshakePacket const &) = delete;
    ServerToClientHandshakePacket(ServerToClientHandshakePacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@ServerToClientHandshakePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@ServerToClientHandshakePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ServerToClientHandshakePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@ServerToClientHandshakePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1ServerToClientHandshakePacket@@UEAA@XZ
    MCVAPI ~ServerToClientHandshakePacket();

    // symbol: ??0ServerToClientHandshakePacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ServerToClientHandshakePacket(std::string const &);

    // symbol: ??0ServerToClientHandshakePacket@@QEAA@XZ
    MCAPI ServerToClientHandshakePacket();

    // NOLINTEND

};

