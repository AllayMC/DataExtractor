#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorMovement {
    // NOLINTBEGIN
    // symbol: ?getHasTeleported@ActorMovement@@YA_NAEBVEntityContext@@@Z
    MCAPI bool getHasTeleported(class EntityContext const &);

    // symbol: ?getPredictedWalkDist@ActorMovement@@YAMAEBVEntityContext@@M@Z
    MCAPI float getPredictedWalkDist(class EntityContext const &, float);

    // symbol: ?initializeActor@ActorMovement@@YAXAEAVEntityContext@@@Z
    MCAPI void initializeActor(class EntityContext &);

    // symbol: ?isImmobile@ActorMovement@@YA_NAEBVEntityContext@@@Z
    MCAPI bool isImmobile(class EntityContext const &);

    // symbol: ?setHasTeleported@ActorMovement@@YAXAEAVEntityContext@@_N@Z
    MCAPI void setHasTeleported(class EntityContext &, bool);

    // symbol: ?setIsImmobile@ActorMovement@@YAXAEAVEntityContext@@_N@Z
    MCAPI void setIsImmobile(class EntityContext &, bool);
    // NOLINTEND

};
