#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EcsEventDispatcher {
public:
    // prevent constructor by default
    EcsEventDispatcher& operator=(EcsEventDispatcher const &) = delete;
    EcsEventDispatcher(EcsEventDispatcher const &) = delete;
    EcsEventDispatcher() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?update@EcsEventDispatcher@@QEAAXXZ
    MCAPI void update();

    // NOLINTEND

};

