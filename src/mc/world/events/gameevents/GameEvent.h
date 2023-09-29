#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/GameEventType.h"

class GameEvent {
public:
    // prevent constructor by default
    GameEvent& operator=(GameEvent const &) = delete;
    GameEvent(GameEvent const &) = delete;
    GameEvent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?getType@GameEvent@@QEBA?BW4GameEventType@GameEventConfig@@XZ
    MCAPI ::GameEventConfig::GameEventType const getType() const;

    // NOLINTEND

};

