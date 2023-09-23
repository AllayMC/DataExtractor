#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class GameTestTicker; }
// clang-format on

class GameTestLevelListener {
public:
    // prevent constructor by default
    GameTestLevelListener& operator=(GameTestLevelListener const &) = delete;
    GameTestLevelListener(GameTestLevelListener const &) = delete;
    GameTestLevelListener() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?onEvent@GameTestLevelListener@@UEAA?AW4EventResult@@AEBULevelNotificationEvent@@@Z
    MCVAPI ::EventResult onEvent(struct LevelNotificationEvent const &);

    // symbol: ?onLevelTickEnd@GameTestLevelListener@@UEAAXXZ
    MCVAPI void onLevelTickEnd();

    // symbol: ??0GameTestLevelListener@@QEAA@AEAVGameTestTicker@gametest@@@Z
    MCAPI GameTestLevelListener(class gametest::GameTestTicker &);

    // NOLINTEND

};

