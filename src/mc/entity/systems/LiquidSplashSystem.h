#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class LiquidSplashSystem {
public:
    // prevent constructor by default
    LiquidSplashSystem& operator=(LiquidSplashSystem const &) = delete;
    LiquidSplashSystem(LiquidSplashSystem const &) = delete;
    LiquidSplashSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@LiquidSplashSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickLiquidSplash@LiquidSplashSystem@@CAXV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UWaterSplashEffectRequestFlag@@@@@@VActorOwnerComponent@@@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UPostSplashGameEventRequestFlag@@@@@@VActorOwnerComponent@@@@@Z
    MCAPI static void _tickLiquidSplash(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct WaterSplashEffectRequestFlag>>, class ActorOwnerComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PostSplashGameEventRequestFlag>>, class ActorOwnerComponent>);

    // NOLINTEND

};

