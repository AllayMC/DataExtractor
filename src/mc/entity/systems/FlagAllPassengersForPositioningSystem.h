#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FlagAllPassengersForPositioningSystem {
public:
    // prevent constructor by default
    FlagAllPassengersForPositioningSystem& operator=(FlagAllPassengersForPositioningSystem const &) = delete;
    FlagAllPassengersForPositioningSystem(FlagAllPassengersForPositioningSystem const &) = delete;
    FlagAllPassengersForPositioningSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@FlagAllPassengersForPositioningSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

};

