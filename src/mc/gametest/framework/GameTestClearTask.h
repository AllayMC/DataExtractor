#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameTestClearTask {
public:
    // prevent constructor by default
    GameTestClearTask& operator=(GameTestClearTask const &) = delete;
    GameTestClearTask(GameTestClearTask const &) = delete;
    GameTestClearTask() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?tick@GameTestClearTask@@QEAAXXZ
    MCAPI void tick();

    // NOLINTEND

};

