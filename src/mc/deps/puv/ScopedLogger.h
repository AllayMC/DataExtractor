#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv::internal {

class ScopedLogger {
public:
    // prevent constructor by default
    ScopedLogger& operator=(ScopedLogger const &) = delete;
    ScopedLogger(ScopedLogger const &) = delete;
    ScopedLogger() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1ScopedLogger@internal@Puv@@QEAA@XZ
    MCAPI ~ScopedLogger();

    // NOLINTEND

};

};
