#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class ItemStackRequestActionCraftGrindstone {
public:
    // prevent constructor by default
    ItemStackRequestActionCraftGrindstone& operator=(ItemStackRequestActionCraftGrindstone const &) = delete;
    ItemStackRequestActionCraftGrindstone(ItemStackRequestActionCraftGrindstone const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getCraftAction@ItemStackRequestActionCraftBase@@UEBAPEBV1@XZ
    virtual class ItemStackRequestActionCraftBase const * getCraftAction() const;

    // vIndex: 2, symbol: ?getFilteredStringIndex@ItemStackRequestAction@@UEBAHXZ
    virtual int getFilteredStringIndex() const;

    // vIndex: 3, symbol: ?postLoadItems_DEPRECATEDASKTYLAING@ItemStackRequestActionCraftBase@@UEAAXAEAVBlockPalette@@_N@Z
    virtual void postLoadItems_DEPRECATEDASKTYLAING(class BlockPalette &, bool);

    // vIndex: 4, symbol: ?_write@ItemStackRequestActionCraftGrindstone@@UEBAXAEAVBinaryStream@@@Z
    virtual void _write(class BinaryStream &) const;

    // vIndex: 5, symbol: ?_read@ItemStackRequestActionCraftGrindstone@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream &);

    // vIndex: 6, symbol: ?getRecipeNetId@ItemStackRequestActionCraftGrindstone@@UEBAAEBUItemStackNetIdVariant@@XZ
    virtual struct ItemStackNetIdVariant const & getRecipeNetId() const;

    // symbol: ??0ItemStackRequestActionCraftGrindstone@@QEAA@XZ
    MCAPI ItemStackRequestActionCraftGrindstone();

    // NOLINTEND

};

