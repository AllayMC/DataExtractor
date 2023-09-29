#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScreenChangedEventing {
public:
    // prevent constructor by default
    IScreenChangedEventing& operator=(IScreenChangedEventing const &) = delete;
    IScreenChangedEventing(IScreenChangedEventing const &) = delete;
    IScreenChangedEventing() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1IScreenChangedEventing@@UEAA@XZ
    MCVAPI ~IScreenChangedEventing();

    // NOLINTEND

};

