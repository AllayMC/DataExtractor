#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CreativePlayerOnFireServerSystem {
public:
    // prevent constructor by default
    CreativePlayerOnFireServerSystem& operator=(CreativePlayerOnFireServerSystem const &) = delete;
    CreativePlayerOnFireServerSystem(CreativePlayerOnFireServerSystem const &) = delete;
    CreativePlayerOnFireServerSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@CreativePlayerOnFireServerSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

};

