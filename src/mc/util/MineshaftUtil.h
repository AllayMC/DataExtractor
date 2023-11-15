#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MineshaftUtil {
    // NOLINTBEGIN
    // symbol: ?_isLava@MineshaftUtil@@YA_NAEBVBlockLegacy@@@Z
    MCAPI bool _isLava(class BlockLegacy const &);

    // symbol: ?fillColumnBetween@MineshaftUtil@@YAXAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@HH@Z
    MCAPI void fillColumnBetween(class BlockSource &, class Block const &, class BlockPos const &, int32_t, int32_t);

    // symbol: ?isCavesAndCliffs@MineshaftUtil@@YA_NAEBVLevel@@@Z
    MCAPI bool isCavesAndCliffs(class Level const &);
    // NOLINTEND

};
