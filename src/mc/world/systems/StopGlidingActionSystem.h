#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StopGlidingActionSystem {
public:
    // prevent constructor by default
    StopGlidingActionSystem& operator=(StopGlidingActionSystem const &) = delete;
    StopGlidingActionSystem(StopGlidingActionSystem const &) = delete;
    StopGlidingActionSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@StopGlidingActionSystem@@SA?AUTickingSystemWithInfo@@_N@Z
    MCAPI static struct TickingSystemWithInfo createSystem(bool);

    // NOLINTEND

};

