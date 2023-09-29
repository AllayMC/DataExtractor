#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InterpolatedRidingPositionCalculationHelper {
public:
    // prevent constructor by default
    InterpolatedRidingPositionCalculationHelper& operator=(InterpolatedRidingPositionCalculationHelper const &) = delete;
    InterpolatedRidingPositionCalculationHelper(InterpolatedRidingPositionCalculationHelper const &) = delete;
    InterpolatedRidingPositionCalculationHelper() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?getCamelInterpolatedRidingOffset@InterpolatedRidingPositionCalculationHelper@@SA?AVVec3@@_N@Z
    MCAPI static class Vec3 getCamelInterpolatedRidingOffset(bool);

    // symbol: ?BASE_OFFSET@InterpolatedRidingPositionCalculationHelper@@2VVec3@@B
    MCAPI static class Vec3 const BASE_OFFSET;

    // NOLINTEND

};

