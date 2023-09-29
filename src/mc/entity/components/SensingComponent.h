#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SensingComponent {
public:
    // prevent constructor by default
    SensingComponent& operator=(SensingComponent const &) = delete;
    SensingComponent(SensingComponent const &) = delete;
    SensingComponent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?canSee@SensingComponent@@QEAA_NAEAVMob@@AEBVActor@@@Z
    MCAPI bool canSee(class Mob &, class Actor const &);

    // symbol: ?reset@SensingComponent@@QEAAXXZ
    MCAPI void reset();

    // symbol: ?withinFOV@SensingComponent@@QEAA_NAEAVMob@@AEBVVec3@@M@Z
    MCAPI bool withinFOV(class Mob &, class Vec3 const &, float);

    // NOLINTEND

};

