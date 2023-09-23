#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace gametest {

struct GameTestErrorContext {
public:
    // prevent constructor by default
    GameTestErrorContext& operator=(GameTestErrorContext const &) = delete;
    GameTestErrorContext(GameTestErrorContext const &) = delete;
    GameTestErrorContext() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?bind@GameTestErrorContext@gametest@@SA?AV?$InterfaceBindingBuilder@UGameTestErrorContext@gametest@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct gametest::GameTestErrorContext> bind();

    // NOLINTEND

};

};
