#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LeashableComponent {
public:
    // prevent constructor by default
    LeashableComponent& operator=(LeashableComponent const &) = delete;
    LeashableComponent(LeashableComponent const &) = delete;
    LeashableComponent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?getInteraction@LeashableComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);

    // symbol: ?leash@LeashableComponent@@QEAAXAEAVActor@@0@Z
    MCAPI void leash(class Actor &, class Actor &);

    // symbol: ?unleash@LeashableComponent@@QEAAXAEAVActor@@@Z
    MCAPI void unleash(class Actor &);

    // NOLINTEND

};

