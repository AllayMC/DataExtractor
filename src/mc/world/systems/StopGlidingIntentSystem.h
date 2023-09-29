#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StopGlidingIntentSystem {
public:
    // prevent constructor by default
    StopGlidingIntentSystem& operator=(StopGlidingIntentSystem const &) = delete;
    StopGlidingIntentSystem(StopGlidingIntentSystem const &) = delete;
    StopGlidingIntentSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@StopGlidingIntentSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

};

