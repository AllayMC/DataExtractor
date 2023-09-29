#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifierT.h"

class GlidingMoveFinalizeSystem {
public:
    // prevent constructor by default
    GlidingMoveFinalizeSystem& operator=(GlidingMoveFinalizeSystem const &) = delete;
    GlidingMoveFinalizeSystem(GlidingMoveFinalizeSystem const &) = delete;
    GlidingMoveFinalizeSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?_tickCollisionDamageCalculate@GlidingMoveFinalizeSystem@@SAXAEBVStrictEntityContext@@AEBUMobTravelComponent@@AEBUStateVectorComponent@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UGlidingCollisionDamageComponent@@@@AEBVIConstBlockSource@@@Z
    MCAPI static void _tickCollisionDamageCalculate(class StrictEntityContext const &, struct MobTravelComponent const &, struct StateVectorComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct GlidingCollisionDamageComponent> &, class IConstBlockSource const &);

    // symbol: ?_tickCollisionDamageHurt@GlidingMoveFinalizeSystem@@SAXAEAVStrictEntityContext@@AEAVActorOwnerComponent@@AEBUGlidingCollisionDamageComponent@@@Z
    MCAPI static void _tickCollisionDamageHurt(class StrictEntityContext &, class ActorOwnerComponent &, struct GlidingCollisionDamageComponent const &);

    // symbol: ?createCollisionDamageCalculateSystem@GlidingMoveFinalizeSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createCollisionDamageCalculateSystem();

    // symbol: ?createCollisionDamageHurtSystem@GlidingMoveFinalizeSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createCollisionDamageHurtSystem();

    // NOLINTEND

};

