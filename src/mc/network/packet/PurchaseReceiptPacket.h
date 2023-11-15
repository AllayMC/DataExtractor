#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PurchaseReceiptPacket : public ::Packet {
public:
    // prevent constructor by default
    PurchaseReceiptPacket& operator=(PurchaseReceiptPacket const &) = delete;
    PurchaseReceiptPacket(PurchaseReceiptPacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@PurchaseReceiptPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@PurchaseReceiptPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@PurchaseReceiptPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@PurchaseReceiptPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream &);

    // symbol: ??0PurchaseReceiptPacket@@QEAA@XZ
    MCAPI PurchaseReceiptPacket();

    // symbol: ?sMaxReceiptsPerPacket@PurchaseReceiptPacket@@2_KB
    MCAPI static uint64_t const sMaxReceiptsPerPacket;

    // NOLINTEND

};

