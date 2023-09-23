#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PendingRemovePassengersSystem {
public:
    // prevent constructor by default
    PendingRemovePassengersSystem& operator=(PendingRemovePassengersSystem const &) = delete;
    PendingRemovePassengersSystem(PendingRemovePassengersSystem const &) = delete;
    PendingRemovePassengersSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@PendingRemovePassengersSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

};

