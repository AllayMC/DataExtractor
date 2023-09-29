#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PhysicsComponent {
public:
    // prevent constructor by default
    PhysicsComponent& operator=(PhysicsComponent const &) = delete;
    PhysicsComponent(PhysicsComponent const &) = delete;
    PhysicsComponent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?isAffectedByGravity@PhysicsComponent@@QEBA_NAEBUSynchedActorDataComponent@@@Z
    MCAPI bool isAffectedByGravity(struct SynchedActorDataComponent const &) const;

    // symbol: ?setAffectedByGravity@PhysicsComponent@@QEBAXAEAUSynchedActorDataComponent@@_N@Z
    MCAPI void setAffectedByGravity(struct SynchedActorDataComponent &, bool) const;

    // symbol: ?setHasCollision@PhysicsComponent@@QEAAXAEAVActor@@_N@Z
    MCAPI void setHasCollision(class Actor &, bool);

    // NOLINTEND

};

