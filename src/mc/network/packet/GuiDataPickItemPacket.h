#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class GuiDataPickItemPacket : public ::Packet {
public:
    // prevent constructor by default
    GuiDataPickItemPacket& operator=(GuiDataPickItemPacket const &) = delete;
    GuiDataPickItemPacket(GuiDataPickItemPacket const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@GuiDataPickItemPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol: ?getName@GuiDataPickItemPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@GuiDataPickItemPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream &) const;

    // vIndex: 7, symbol: ?_read@GuiDataPickItemPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream &);

    // symbol: ??1GuiDataPickItemPacket@@UEAA@XZ
    MCVAPI ~GuiDataPickItemPacket();

    // symbol: ??0GuiDataPickItemPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEBH@Z
    MCAPI GuiDataPickItemPacket(std::string const &, std::string const &, int const &);

    // symbol: ??0GuiDataPickItemPacket@@QEAA@XZ
    MCAPI GuiDataPickItemPacket();

    // NOLINTEND

};

