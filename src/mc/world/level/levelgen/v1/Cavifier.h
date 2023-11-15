#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Cavifier {
public:
    // prevent constructor by default
    Cavifier& operator=(Cavifier const &) = delete;
    Cavifier(Cavifier const &) = delete;
    Cavifier() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?cavify@Cavifier@@QEBAMVVec3@@HM@Z
    MCAPI float cavify(class Vec3, int32_t, float) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getSpaghetti2d@Cavifier@@AEBAMVVec3@@@Z
    MCAPI float _getSpaghetti2d(class Vec3) const;

    // NOLINTEND

};

