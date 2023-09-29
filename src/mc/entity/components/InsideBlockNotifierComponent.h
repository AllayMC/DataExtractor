#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsideBlockNotifierComponent {
public:
    // prevent constructor by default
    InsideBlockNotifierComponent& operator=(InsideBlockNotifierComponent const &) = delete;
    InsideBlockNotifierComponent(InsideBlockNotifierComponent const &) = delete;
    InsideBlockNotifierComponent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?getBlockList@InsideBlockNotifierComponent@@QEBAAEBV?$vector@VInsideBlockEventMap@@V?$allocator@VInsideBlockEventMap@@@std@@@std@@XZ
    MCAPI std::vector<class InsideBlockEventMap> const & getBlockList() const;

    // symbol: ?isTrackedBlock@InsideBlockNotifierComponent@@QEBA_NAEBVBlock@@@Z
    MCAPI bool isTrackedBlock(class Block const &) const;

    // symbol: ?resetBlocksInsideState@InsideBlockNotifierComponent@@QEAAXXZ
    MCAPI void resetBlocksInsideState();

    // symbol: ?setInsideBlock@InsideBlockNotifierComponent@@QEAAXAEBVBlock@@_N@Z
    MCAPI void setInsideBlock(class Block const &, bool);

    // NOLINTEND

};

