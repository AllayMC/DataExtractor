#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StartGlidingIntentSystem {
public:
    // prevent constructor by default
    StartGlidingIntentSystem& operator=(StartGlidingIntentSystem const &) = delete;
    StartGlidingIntentSystem(StartGlidingIntentSystem const &) = delete;
    StartGlidingIntentSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@StartGlidingIntentSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

};

