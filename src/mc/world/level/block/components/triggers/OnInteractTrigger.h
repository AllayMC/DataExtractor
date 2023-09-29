#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnInteractTrigger {
public:
    // prevent constructor by default
    OnInteractTrigger& operator=(OnInteractTrigger const &) = delete;
    OnInteractTrigger(OnInteractTrigger const &) = delete;
    OnInteractTrigger() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1OnInteractTrigger@@UEAA@XZ
    MCVAPI ~OnInteractTrigger();

    // symbol: ??0OnInteractTrigger@@QEAA@$$QEAV0@@Z
    MCAPI OnInteractTrigger(class OnInteractTrigger &&);

    // NOLINTEND

};

