#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

namespace VanillaOffsetSystemUtil {
    // NOLINTBEGIN
    // symbol: ?_clientTick@VanillaOffsetSystemUtil@@YAXAEAVStrictEntityContext@@AEAUVanillaOffsetComponent@@AEBUOffsetsComponent@@AEBUSynchedActorDataComponent@@V?$Optional@$$CBV?$FlagComponent@UPlayerIsSleepingFlag@@@@@@V?$Optional@$$CBUIsHorizontalPoseFlagComponent@@@@MV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UIsHorizontalPoseFlagComponent@@@@@Z
    MCAPI void _clientTick(class StrictEntityContext &, struct VanillaOffsetComponent &, struct OffsetsComponent const &, struct SynchedActorDataComponent const &, class Optional<class FlagComponent<struct PlayerIsSleepingFlag> const>, class Optional<struct IsHorizontalPoseFlagComponent const>, float, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct IsHorizontalPoseFlagComponent>);

    // symbol: ?_serverTick@VanillaOffsetSystemUtil@@YAXAEAVStrictEntityContext@@AEAUVanillaOffsetComponent@@AEBUOffsetsComponent@@AEBUSynchedActorDataComponent@@V?$Optional@$$CBV?$FlagComponent@UPlayerIsSleepingFlag@@@@@@V?$Optional@$$CBUIsHorizontalPoseFlagComponent@@@@MV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UIsHorizontalPoseFlagComponent@@@@@Z
    MCAPI void _serverTick(class StrictEntityContext &, struct VanillaOffsetComponent &, struct OffsetsComponent const &, struct SynchedActorDataComponent const &, class Optional<class FlagComponent<struct PlayerIsSleepingFlag> const>, class Optional<struct IsHorizontalPoseFlagComponent const>, float, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct IsHorizontalPoseFlagComponent>);

    // symbol: ?_updateHorizontalFlagComponent@VanillaOffsetSystemUtil@@YAXAEAVStrictEntityContext@@AEBUSynchedActorDataComponent@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UIsHorizontalPoseFlagComponent@@@@@Z
    MCAPI void _updateHorizontalFlagComponent(class StrictEntityContext &, struct SynchedActorDataComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct IsHorizontalPoseFlagComponent>);

    // symbol: ?getCameraOffset@VanillaOffsetSystemUtil@@YAMAEBUSynchedActorDataComponent@@V?$Optional@$$CBV?$FlagComponent@UPlayerIsSleepingFlag@@@@@@V?$Optional@$$CBUIsHorizontalPoseFlagComponent@@@@M@Z
    MCAPI float getCameraOffset(struct SynchedActorDataComponent const &, class Optional<class FlagComponent<struct PlayerIsSleepingFlag> const>, class Optional<struct IsHorizontalPoseFlagComponent const>, float);
    // NOLINTEND

};
