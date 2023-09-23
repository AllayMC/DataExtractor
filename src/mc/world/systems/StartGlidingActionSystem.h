#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StartGlidingActionSystem {
public:
    // prevent constructor by default
    StartGlidingActionSystem& operator=(StartGlidingActionSystem const &) = delete;
    StartGlidingActionSystem(StartGlidingActionSystem const &) = delete;
    StartGlidingActionSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@StartGlidingActionSystem@@SA?AUTickingSystemWithInfo@@_N@Z
    MCAPI static struct TickingSystemWithInfo createSystem(bool);

    // NOLINTEND

};

