#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RenderingRidingOffsetSystem {
public:
    // prevent constructor by default
    RenderingRidingOffsetSystem& operator=(RenderingRidingOffsetSystem const &) = delete;
    RenderingRidingOffsetSystem(RenderingRidingOffsetSystem const &) = delete;
    RenderingRidingOffsetSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?getInterpolatedRenderingRidingOffset@RenderingRidingOffsetSystem@@SA?AVVec3@@PEBUPassengerRenderingRidingOffsetComponent@@M@Z
    MCAPI static class Vec3 getInterpolatedRenderingRidingOffset(struct PassengerRenderingRidingOffsetComponent const *, float);

    // NOLINTEND

};

