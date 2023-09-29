#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClientInputUpdateSystem {
public:
    // prevent constructor by default
    ClientInputUpdateSystem& operator=(ClientInputUpdateSystem const &) = delete;
    ClientInputUpdateSystem(ClientInputUpdateSystem const &) = delete;
    ClientInputUpdateSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?create@ClientInputUpdateSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // NOLINTEND

};

