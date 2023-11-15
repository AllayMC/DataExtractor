#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ItemStackResponsePacket : public ::Packet {
public:
    // prevent constructor by default
    ItemStackResponsePacket& operator=(ItemStackResponsePacket const &) = delete;
    ItemStackResponsePacket(ItemStackResponsePacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@ItemStackResponsePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@ItemStackResponsePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ItemStackResponsePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@ItemStackResponsePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1ItemStackResponsePacket@@UEAA@XZ
    MCVAPI ~ItemStackResponsePacket();

    // symbol: ??0ItemStackResponsePacket@@QEAA@XZ
    MCAPI ItemStackResponsePacket();

    // symbol: ??0ItemStackResponsePacket@@QEAA@$$QEAV?$vector@UItemStackResponseInfo@@V?$allocator@UItemStackResponseInfo@@@std@@@std@@@Z
    MCAPI ItemStackResponsePacket(std::vector<struct ItemStackResponseInfo> &&);

    // symbol: ?getResponses@ItemStackResponsePacket@@QEBAAEBV?$vector@UItemStackResponseInfo@@V?$allocator@UItemStackResponseInfo@@@std@@@std@@XZ
    MCAPI std::vector<struct ItemStackResponseInfo> const & getResponses() const;

    // NOLINTEND

};

