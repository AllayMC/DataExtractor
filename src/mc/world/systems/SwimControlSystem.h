#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SwimControlSystem {
public:
    // prevent constructor by default
    SwimControlSystem& operator=(SwimControlSystem const &) = delete;
    SwimControlSystem(SwimControlSystem const &) = delete;
    SwimControlSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?create@SwimControlSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // NOLINTEND

};

