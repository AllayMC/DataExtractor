#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Brightness {
public:
    // prevent constructor by default
    Brightness() = delete;
    uchar value;

public:
    // NOLINTBEGIN
    // symbol: ??0Brightness@@QEAA@AEBU0@@Z
    MCAPI Brightness(struct Brightness const &);

    // symbol: ??0Brightness@@QEAA@AEBE@Z
    MCAPI Brightness(uchar const &);

    // symbol: ??4Brightness@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct Brightness & operator=(struct Brightness const &);

    // symbol: ??4Brightness@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct Brightness & operator=(struct Brightness &&);

    // symbol: ?INVALID@Brightness@@2U1@B
    MCAPI static struct Brightness const INVALID;

    // symbol: ?MAX@Brightness@@2U1@B
    MCAPI static struct Brightness const MAX;

    // symbol: ?MIN@Brightness@@2U1@B
    MCAPI static struct Brightness const MIN;

    // NOLINTEND

};

