#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/MoonPhases.h"

namespace LevelUtils {
    // NOLINTBEGIN
    // symbol: ?getDay@LevelUtils@@YAHH@Z
    MCAPI int32_t getDay(int32_t);

    // symbol: ?getMoonPhase@LevelUtils@@YA?AW4MoonPhases@@AEBVILevel@@@Z
    MCAPI ::MoonPhases getMoonPhase(class ILevel const &);

    // symbol: ?getTimeOfDay@LevelUtils@@YAHH@Z
    MCAPI int32_t getTimeOfDay(int32_t);

    // symbol: ?projectToTimeOfDay@LevelUtils@@YAHHH@Z
    MCAPI int32_t projectToTimeOfDay(int32_t, int32_t);
    // NOLINTEND

};
