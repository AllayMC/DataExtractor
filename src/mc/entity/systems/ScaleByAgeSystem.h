#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class ScaleByAgeSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    ScaleByAgeSystem& operator=(ScaleByAgeSystem const &) = delete;
    ScaleByAgeSystem(ScaleByAgeSystem const &) = delete;
    ScaleByAgeSystem() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@ScaleByAgeSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry &);

    // NOLINTEND

};

