#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BlockComponentBase.h"

struct BlockPlacementFilterComponent : public ::BlockComponentBase {
public:
    // prevent constructor by default
    BlockPlacementFilterComponent& operator=(BlockPlacementFilterComponent const &) = delete;
    BlockPlacementFilterComponent(BlockPlacementFilterComponent const &) = delete;
    BlockPlacementFilterComponent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?mayPlace@BlockPlacementFilterComponent@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    MCAPI bool mayPlace(class BlockSource &, class BlockPos const &, uchar) const;

    // symbol: ?mayPlace@BlockPlacementFilterComponent@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool mayPlace(class BlockSource &, class BlockPos const &) const;

    // symbol: ??4BlockPlacementFilterComponent@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct BlockPlacementFilterComponent & operator=(struct BlockPlacementFilterComponent &&);

    // NOLINTEND

};

