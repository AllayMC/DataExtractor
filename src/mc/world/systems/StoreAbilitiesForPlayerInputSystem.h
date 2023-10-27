#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StoreAbilitiesForPlayerInputSystem {
public:
    // prevent constructor by default
    StoreAbilitiesForPlayerInputSystem& operator=(StoreAbilitiesForPlayerInputSystem const &) = delete;
    StoreAbilitiesForPlayerInputSystem(StoreAbilitiesForPlayerInputSystem const &) = delete;
    StoreAbilitiesForPlayerInputSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@StoreAbilitiesForPlayerInputSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

};

