#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/common/wrapper/StackRefResultT.h"
#include "mc/enums/SimulationType.h"

class PauseManager {
public:
    // prevent constructor by default
    PauseManager& operator=(PauseManager const &) = delete;
    PauseManager(PauseManager const &) = delete;
    PauseManager() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?getSimulationType@PauseManager@@SA?AW4SimulationType@@V?$StackRefResultT@U?$SharePtrRefTraits@$$CBVPauseManager@@@@@@@Z
    MCAPI static ::SimulationType getSimulationType(class StackRefResultT<struct SharePtrRefTraits<class PauseManager const>>);

    // symbol: ?DEFAULT_SIMULATION_TYPE@PauseManager@@2W4SimulationType@@B
    MCAPI static ::SimulationType const DEFAULT_SIMULATION_TYPE;

    // NOLINTEND

};

