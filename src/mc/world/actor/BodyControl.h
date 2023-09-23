#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/Control.h"

class BodyControl : public ::Control {
public:
    // prevent constructor by default
    BodyControl& operator=(BodyControl const &) = delete;
    BodyControl(BodyControl const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?clientTick@BodyControl@@UEAAXAEAVMob@@@Z
    virtual void clientTick(class Mob &);

    // symbol: ??1BodyControl@@UEAA@XZ
    MCVAPI ~BodyControl();

    // symbol: ??0BodyControl@@QEAA@XZ
    MCAPI BodyControl();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_allowUpdateBodyRotation@BodyControl@@AEBA_NAEBVMob@@@Z
    MCAPI bool _allowUpdateBodyRotation(class Mob const &) const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?MAX_CLAMP_ANGLE@BodyControl@@0MB
    MCAPI static float const MAX_CLAMP_ANGLE;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $MAX_CLAMP_ANGLE() { return MAX_CLAMP_ANGLE; }

    // NOLINTEND

};

