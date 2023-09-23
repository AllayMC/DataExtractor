#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameEventListenerRegistry {
public:
    // prevent constructor by default
    GameEventListenerRegistry& operator=(GameEventListenerRegistry const &) = delete;
    GameEventListenerRegistry(GameEventListenerRegistry const &) = delete;
    GameEventListenerRegistry() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?registerListener@GameEventListenerRegistry@@QEAA?AV?$final_action@V?$function@$$A6AXXZ@std@@@gsl@@AEAVGameEventListener@@@Z
    MCAPI gsl::final_action<std::function<void (void)>> registerListener(class GameEventListener &);

    // NOLINTEND

};

