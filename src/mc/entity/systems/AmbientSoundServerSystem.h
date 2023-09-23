#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class AmbientSoundServerSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AmbientSoundServerSystem& operator=(AmbientSoundServerSystem const &) = delete;
    AmbientSoundServerSystem(AmbientSoundServerSystem const &) = delete;
    AmbientSoundServerSystem() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@AmbientSoundServerSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickAmbientSoundComponent@AmbientSoundServerSystem@@CAXAEAVActorOwnerComponent@@AEAVAmbientSoundServerComponent@@@Z
    MCAPI static void _tickAmbientSoundComponent(class ActorOwnerComponent &, class AmbientSoundServerComponent &);

    // NOLINTEND

};

