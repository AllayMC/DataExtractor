#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VariableMaxAutoStepSystem {
public:
    // prevent constructor by default
    VariableMaxAutoStepSystem& operator=(VariableMaxAutoStepSystem const &) = delete;
    VariableMaxAutoStepSystem(VariableMaxAutoStepSystem const &) = delete;
    VariableMaxAutoStepSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@VariableMaxAutoStepSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

};

