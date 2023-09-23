#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnFallOnTrigger {
public:
    // prevent constructor by default
    OnFallOnTrigger& operator=(OnFallOnTrigger const &) = delete;
    OnFallOnTrigger(OnFallOnTrigger const &) = delete;
    OnFallOnTrigger() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1OnFallOnTrigger@@UEAA@XZ
    MCVAPI ~OnFallOnTrigger();

    // symbol: ??0OnFallOnTrigger@@QEAA@$$QEAV0@@Z
    MCAPI OnFallOnTrigger(class OnFallOnTrigger &&);

    // NOLINTEND

};

