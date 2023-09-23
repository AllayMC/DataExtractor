#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/PaletteColor.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace ActorSynchedData {
    // NOLINTBEGIN
    // symbol: ?updateAction@ActorSynchedData@@YAXAEAVActor@@@Z
    MCAPI void updateAction(class Actor &);

    // symbol: ?updateAmbientSound@ActorSynchedData@@YAXAEAVEntityContext@@@Z
    MCAPI void updateAmbientSound(class EntityContext &);

    // symbol: ?updateBoundingBox@ActorSynchedData@@YAXAEAVEntityContext@@AEBVSynchedActorDataEntityWrapper@@@Z
    MCAPI void updateBoundingBox(class EntityContext &, class SynchedActorDataEntityWrapper const &);

    // symbol: ?updateBuoyancyData@ActorSynchedData@@YAXAEAVEntityContext@@AEBVSynchedActorDataEntityWrapper@@@Z
    MCAPI void updateBuoyancyData(class EntityContext &, class SynchedActorDataEntityWrapper const &);

    // symbol: ?updateCommandBlock@ActorSynchedData@@YAXAEAVActor@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void updateCommandBlock(class Actor &, int, std::string &);

    // symbol: ?updateContainer@ActorSynchedData@@YAXAEAVActor@@@Z
    MCAPI void updateContainer(class Actor &);

    // symbol: ?updateHasNPC@ActorSynchedData@@YAXAEAVActor@@@Z
    MCAPI void updateHasNPC(class Actor &);

    // symbol: ?updateHeartbeat@ActorSynchedData@@YAXAEAVEntityContext@@@Z
    MCAPI void updateHeartbeat(class EntityContext &);

    // symbol: ?updateHitbox@ActorSynchedData@@YAXAEAVEntityContext@@AEBVSynchedActorDataEntityWrapper@@@Z
    MCAPI void updateHitbox(class EntityContext &, class SynchedActorDataEntityWrapper const &);

    // symbol: ?updateInteractText@ActorSynchedData@@YAXAEAVActor@@@Z
    MCAPI void updateInteractText(class Actor &);

    // symbol: ?updateIsBuoyant@ActorSynchedData@@YAXAEAVEntityContext@@AEAVSynchedActorDataEntityWrapper@@@Z
    MCAPI void updateIsBuoyant(class EntityContext &, class SynchedActorDataEntityWrapper &);

    // symbol: ?updateNPCData@ActorSynchedData@@YAXAEAVActor@@@Z
    MCAPI void updateNPCData(class Actor &);

    // symbol: ?updateNameTag@ActorSynchedData@@YAXAEAVActor@@@Z
    MCAPI void updateNameTag(class Actor &);

    // symbol: ?updateRawNameText@ActorSynchedData@@YAXAEAVActor@@@Z
    MCAPI void updateRawNameText(class Actor &);

    // symbol: ?updateRuntimeID@ActorSynchedData@@YAXAEAVActor@@@Z
    MCAPI void updateRuntimeID(class Actor &);

    // symbol: ?updateSize@ActorSynchedData@@YAXAEAVActor@@@Z
    MCAPI void updateSize(class Actor &);

    // symbol: ?updateTarget@ActorSynchedData@@YAXAEAVActor@@AEAUActorUniqueID@@@Z
    MCAPI void updateTarget(class Actor &, struct ActorUniqueID &);

    // symbol: ?updateTintColor@ActorSynchedData@@YAXAEAVColor@mce@@AEBW4PaletteColor@@@Z
    MCAPI void updateTintColor(class mce::Color &, ::PaletteColor const &);
    // NOLINTEND

};
