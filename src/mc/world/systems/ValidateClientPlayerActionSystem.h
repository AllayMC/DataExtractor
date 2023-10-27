#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ValidateClientPlayerActionSystem {
public:
    // prevent constructor by default
    ValidateClientPlayerActionSystem& operator=(ValidateClientPlayerActionSystem const &) = delete;
    ValidateClientPlayerActionSystem(ValidateClientPlayerActionSystem const &) = delete;
    ValidateClientPlayerActionSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@ValidateClientPlayerActionSystem@@SA?AUTickingSystemWithInfo@@_N@Z
    MCAPI static struct TickingSystemWithInfo createSystem(bool);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mReportsTelemetry@ValidateClientPlayerActionSystem@@0_NA
    MCAPI static bool mReportsTelemetry;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $mReportsTelemetry() { return mReportsTelemetry; }

    // NOLINTEND

};

