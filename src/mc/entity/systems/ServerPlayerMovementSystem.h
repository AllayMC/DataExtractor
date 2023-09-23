#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerPlayerMovementSystem {
public:
    // prevent constructor by default
    ServerPlayerMovementSystem& operator=(ServerPlayerMovementSystem const &) = delete;
    ServerPlayerMovementSystem(ServerPlayerMovementSystem const &) = delete;
    ServerPlayerMovementSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?_createCheckCheatingSystem@ServerPlayerMovementSystem@@SA?AUTickingSystemWithInfo@@_N@Z
    MCAPI static struct TickingSystemWithInfo _createCheckCheatingSystem(bool);

    // symbol: ?_updateFallDistance@ServerPlayerMovementSystem@@SAXAEBUServerPlayerCurrentMovementComponent@@AEBUStateVectorComponent@@AEAUFallDistanceComponent@@@Z
    MCAPI static void _updateFallDistance(struct ServerPlayerCurrentMovementComponent const &, struct StateVectorComponent const &, struct FallDistanceComponent &);

    // symbol: ?createPostInputSystems@ServerPlayerMovementSystem@@SA?AV?$array@UTickingSystemWithInfo@@$01@std@@XZ
    MCAPI static std::array<struct TickingSystemWithInfo, 2> createPostInputSystems();

    // symbol: ?createPostTravelSystems@ServerPlayerMovementSystem@@SA?AV?$array@UTickingSystemWithInfo@@$03@std@@_N@Z
    MCAPI static std::array<struct TickingSystemWithInfo, 4> createPostTravelSystems(bool);

    // symbol: ?createPreInputSystems@ServerPlayerMovementSystem@@SA?AV?$array@UTickingSystemWithInfo@@$02@std@@XZ
    MCAPI static std::array<struct TickingSystemWithInfo, 3> createPreInputSystems();

    // symbol: ?createServerPlayerMovementFinalSystem@ServerPlayerMovementSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createServerPlayerMovementFinalSystem();

    // NOLINTEND

};

