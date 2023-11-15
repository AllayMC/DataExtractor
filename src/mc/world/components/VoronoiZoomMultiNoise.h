#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VoronoiZoomMultiNoise {
    // NOLINTBEGIN
    // symbol: ?getGridOffset@VoronoiZoomMultiNoise@@YA?AVVec3@@AEBVSimplePositionalRandomFactory@@VBlockPos@@@Z
    MCAPI class Vec3 getGridOffset(class SimplePositionalRandomFactory const &, class BlockPos);

    // symbol: ?getZoomedVoronoiCellIndex@VoronoiZoomMultiNoise@@YAIVBlockPos@@AEBV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@III@Z
    MCAPI uint32_t getZoomedVoronoiCellIndex(class BlockPos, std::vector<class Vec3> const &, uint32_t, uint32_t, uint32_t);
    // NOLINTEND

};
