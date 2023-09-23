#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { class CommandCooldown; }
namespace AgentComponents { struct ActionDetails; }
namespace AgentComponents { struct AnimationShrugFlag; }
namespace AgentComponents { struct ExecutingFlag; }
// clang-format on

namespace AgentActionSystems {
    // NOLINTBEGIN
    // symbol: ?tickActionFailed@AgentActionSystems@@YAXAEAVStrictEntityContext@@AEAVActorOwnerComponent@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UActionDetails@AgentComponents@@V?$FlagComponent@UAnimationShrugFlag@AgentComponents@@@@VCommandCooldown@4@V?$FlagComponent@UExecutingFlag@AgentComponents@@@@@@@Z
    MCAPI void tickActionFailed(class StrictEntityContext &, class ActorOwnerComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct AgentComponents::ActionDetails, class FlagComponent<struct AgentComponents::AnimationShrugFlag>, class AgentComponents::CommandCooldown, class FlagComponent<struct AgentComponents::ExecutingFlag>> &);
    // NOLINTEND

};
