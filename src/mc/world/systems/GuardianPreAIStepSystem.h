#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GuardianPreAIStepSystem {
public:
    // prevent constructor by default
    GuardianPreAIStepSystem& operator=(GuardianPreAIStepSystem const &) = delete;
    GuardianPreAIStepSystem(GuardianPreAIStepSystem const &) = delete;
    GuardianPreAIStepSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@GuardianPreAIStepSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_doGuardianPreAIStepSystem@GuardianPreAIStepSystem@@CAXAEBVStrictEntityContext@@AEAVActorOwnerComponent@@@Z
    MCAPI static void _doGuardianPreAIStepSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

    // NOLINTEND

};

