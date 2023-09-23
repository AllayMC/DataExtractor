#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityHost.h"

class VanillaEntityInitializerCommon {
public:
    // prevent constructor by default
    VanillaEntityInitializerCommon& operator=(VanillaEntityInitializerCommon const &) = delete;
    VanillaEntityInitializerCommon(VanillaEntityInitializerCommon const &) = delete;
    VanillaEntityInitializerCommon() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?initActorComponents@VanillaEntityInitializerCommon@@SAXW4EntityHost@@V?$unique_ptr@VActor@@U?$default_delete@VActor@@@std@@@std@@AEAVEntityContext@@AEBV5@@Z
    MCAPI static void initActorComponents(::EntityHost, std::unique_ptr<class Actor>, class EntityContext &, class EntityContext const &);

    // symbol: ?initLevelEntityDependentComponents@VanillaEntityInitializerCommon@@SAXAEAVEntityContext@@AEBV2@@Z
    MCAPI static void initLevelEntityDependentComponents(class EntityContext &, class EntityContext const &);

    // NOLINTEND

};

