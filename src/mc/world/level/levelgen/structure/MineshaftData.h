#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MineshaftData {
public:
    // prevent constructor by default
    MineshaftData& operator=(MineshaftData const &) = delete;
    MineshaftData(MineshaftData const &) = delete;
    MineshaftData() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0MineshaftData@@QEAA@_N@Z
    MCAPI MineshaftData(bool);

    // NOLINTEND

};

