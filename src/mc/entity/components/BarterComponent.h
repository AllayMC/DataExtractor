#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BarterComponent {
public:
    // prevent constructor by default
    BarterComponent& operator=(BarterComponent const &) = delete;
    BarterComponent(BarterComponent const &) = delete;
    BarterComponent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?onBarterItemPickedUp@BarterComponent@@QEAAXAEBVActor@@UActorUniqueID@@F@Z
    MCAPI void onBarterItemPickedUp(class Actor const &, struct ActorUniqueID, int16_t);

    // symbol: ?stopBarter@BarterComponent@@QEAAXXZ
    MCAPI void stopBarter();

    // NOLINTEND

};

