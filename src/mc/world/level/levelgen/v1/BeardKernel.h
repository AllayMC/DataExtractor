#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BeardKernel {
public:
    // prevent constructor by default
    BeardKernel& operator=(BeardKernel const &) = delete;
    BeardKernel(BeardKernel const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0BeardKernel@@QEAA@XZ
    MCAPI BeardKernel();

    // symbol: ?getContribution@BeardKernel@@SAMHHH@Z
    MCAPI static float getContribution(int32_t, int32_t, int32_t);

    // NOLINTEND

};

