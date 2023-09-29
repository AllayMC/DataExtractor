#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ObjectiveSortOrder.h"

class DisplayObjective {
public:
    // prevent constructor by default
    DisplayObjective& operator=(DisplayObjective const &) = delete;
    DisplayObjective(DisplayObjective const &) = delete;
    DisplayObjective() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?getBelowNameStringForId@DisplayObjective@@QEBA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUScoreboardId@@@Z
    MCAPI std::string const getBelowNameStringForId(struct ScoreboardId const &) const;

    // symbol: ?getObjective@DisplayObjective@@QEBAAEBVObjective@@XZ
    MCAPI class Objective const & getObjective() const;

    // symbol: ?getSortOrder@DisplayObjective@@QEBA?AW4ObjectiveSortOrder@@XZ
    MCAPI ::ObjectiveSortOrder getSortOrder() const;

    // symbol: ?isValid@DisplayObjective@@QEBA_NXZ
    MCAPI bool isValid() const;

    // NOLINTEND

};

