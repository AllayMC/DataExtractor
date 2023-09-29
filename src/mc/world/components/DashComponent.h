#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DashComponent {
public:
    // prevent constructor by default
    DashComponent& operator=(DashComponent const &) = delete;
    DashComponent(DashComponent const &) = delete;
    DashComponent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?getCooldownTime@DashComponent@@QEBA?BIXZ
    MCAPI uint const getCooldownTime() const;

    // symbol: ?getHorizontalMomentum@DashComponent@@QEBA?BMXZ
    MCAPI float const getHorizontalMomentum() const;

    // symbol: ?getVerticalMomentum@DashComponent@@QEBA?BMXZ
    MCAPI float const getVerticalMomentum() const;

    // NOLINTEND

};

