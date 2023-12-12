#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/Result.h"
#include "mc/common/MinecraftPacketIds.h"
#include "mc/network/Packet.h"

class CraftingDataPacket : public ::Packet {
public:
    char padding[144];

    // prevent constructor by default
    CraftingDataPacket& operator=(CraftingDataPacket const&);
    CraftingDataPacket(CraftingDataPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CraftingDataPacket@@UEAA@XZ
    virtual ~CraftingDataPacket() = default;

    // vIndex: 1, symbol: ?getId@CraftingDataPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@CraftingDataPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@CraftingDataPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@CraftingDataPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0CraftingDataPacket@@QEAA@XZ
    MCAPI CraftingDataPacket();

    // symbol:
    // ?prepareFromRecipes@CraftingDataPacket@@SA?AV?$unique_ptr@VCraftingDataPacket@@U?$default_delete@VCraftingDataPacket@@@std@@@std@@AEBVRecipes@@_N@Z
    MCAPI static std::unique_ptr<class CraftingDataPacket> prepareFromRecipes(class Recipes const&, bool);

    // NOLINTEND
};