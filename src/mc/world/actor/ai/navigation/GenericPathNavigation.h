#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/navigation/PathNavigation.h"

class GenericPathNavigation : public ::PathNavigation {
public:
    // prevent constructor by default
    GenericPathNavigation& operator=(GenericPathNavigation const &) = delete;
    GenericPathNavigation(GenericPathNavigation const &) = delete;
    GenericPathNavigation() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?initializeInternal@GenericPathNavigation@@UEAAXAEAVMob@@PEAUNavigationDescription@@@Z
    virtual void initializeInternal(class Mob &, struct NavigationDescription *);

    // vIndex: 2, symbol: ?tick@GenericPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
    virtual void tick(class NavigationComponent &, class Mob &);

    // vIndex: 3, symbol: ?getTempMobPos@GenericPathNavigation@@MEBA?AVVec3@@AEBVMob@@@Z
    virtual class Vec3 getTempMobPos(class Mob const &) const;

    // vIndex: 9, symbol: ?stop@GenericPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
    virtual void stop(class NavigationComponent &, class Mob &);

    // vIndex: 12, symbol: ?updatePath@GenericPathNavigation@@MEAAXAEAVNavigationComponent@@AEAVMob@@@Z
    virtual void updatePath(class NavigationComponent &, class Mob &);

    // NOLINTEND

};

