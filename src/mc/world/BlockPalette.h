#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
class BlockPalette {
public:
    // prevent constructor by default
    BlockPalette& operator=(BlockPalette const&);
    BlockPalette(BlockPalette const&);
    BlockPalette();

public:
    // vIndex: 3, symbol: ?getBlock@BlockPalette@@UEBAAEBVBlock@@AEBI@Z
    class Block const& getBlock(uint const&) const;//this is a virtual function

    // symbol: ??0BlockPalette@@QEAA@AEAVLevel@@@Z
    MCAPI explicit BlockPalette(class Level&);

    // symbol: ?cacheBlockComponentData@BlockPalette@@QEAAXXZ
    MCAPI void cacheBlockComponentData();

    // symbol: ?getBlockFromLegacyData@BlockPalette@@QEBAAEBVBlock@@UNewBlockID@@I@Z
    MCAPI class Block const& getBlockFromLegacyData(struct NewBlockID, uint) const;

    // symbol:
    // ?getUnknownBlockTypeRegistry@BlockPalette@@QEBA?BV?$NonOwnerPointer@VIUnknownBlockTypeRegistry@@@Bedrock@@XZ
    MCAPI class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry> const getUnknownBlockTypeRegistry() const;

    // symbol: ?initFromBlockDefinitions@BlockPalette@@QEAAXXZ
    MCAPI void initFromBlockDefinitions();

    // symbol: ?switchBlock@BlockPalette@@QEBAAEBVBlock@@AEBV2@AEBVBlockLegacy@@@Z
    MCAPI class Block const& switchBlock(class Block const&, class BlockLegacy const&) const;

    // symbol: ?convertLegacyBlock@BlockPalette@@SAAEBVBlock@@UBlockID@@G@Z
    MCAPI static class Block const& convertLegacyBlock(struct BlockID, ushort);


    // protected:
    // NOLINTBEGIN
    // symbol: ?shouldWarnFor@BlockPalette@@IEBA_NUNewBlockID@@G@Z
    MCAPI bool shouldWarnFor(struct NewBlockID, ushort) const;

    // NOLINTEND
};