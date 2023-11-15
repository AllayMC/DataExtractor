#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class AutomationClientConnectPacket : public ::Packet {
public:
    // prevent constructor by default
    AutomationClientConnectPacket& operator=(AutomationClientConnectPacket const &) = delete;
    AutomationClientConnectPacket(AutomationClientConnectPacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@AutomationClientConnectPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@AutomationClientConnectPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@AutomationClientConnectPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@AutomationClientConnectPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1AutomationClientConnectPacket@@UEAA@XZ
    MCVAPI ~AutomationClientConnectPacket();

    // symbol: ??0AutomationClientConnectPacket@@QEAA@UWebSocketPacketData@@@Z
    MCAPI AutomationClientConnectPacket(struct WebSocketPacketData);

    // symbol: ??0AutomationClientConnectPacket@@QEAA@XZ
    MCAPI AutomationClientConnectPacket();

    // NOLINTEND

};

