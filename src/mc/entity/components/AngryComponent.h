#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/LevelSoundEvent.h"

class AngryComponent {
public:
    // prevent constructor by default
    AngryComponent& operator=(AngryComponent const &) = delete;
    AngryComponent(AngryComponent const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0AngryComponent@@QEAA@XZ
    MCAPI AngryComponent();

    // symbol: ??0AngryComponent@@QEAA@$$QEAV0@@Z
    MCAPI AngryComponent(class AngryComponent &&);

    // symbol: ?canGetAngry@AngryComponent@@QEBA_NAEAVMob@@PEAV2@PEAVActor@@_N3@Z
    MCAPI bool canGetAngry(class Mob &, class Mob *, class Actor *, bool, bool) const;

    // symbol: ?getAngrySound@AngryComponent@@QEBA?BW4LevelSoundEvent@@AEBVMob@@@Z
    MCAPI ::LevelSoundEvent const getAngrySound(class Mob const &) const;

    // symbol: ?getBroadcastAnger@AngryComponent@@QEBA_NXZ
    MCAPI bool getBroadcastAnger() const;

    // symbol: ?getBroadcastAngerOnAttack@AngryComponent@@QEBA_NXZ
    MCAPI bool getBroadcastAngerOnAttack() const;

    // symbol: ?getBroadcastAngerOnBeingAttacked@AngryComponent@@QEBA_NXZ
    MCAPI bool getBroadcastAngerOnBeingAttacked() const;

    // symbol: ?getBroadcastFilter@AngryComponent@@QEBAAEBVActorFilterGroup@@XZ
    MCAPI class ActorFilterGroup const & getBroadcastFilter() const;

    // symbol: ?getBroadcastRange@AngryComponent@@QEBAHXZ
    MCAPI int getBroadcastRange() const;

    // symbol: ?getHasTicked@AngryComponent@@QEBA_NXZ
    MCAPI bool getHasTicked() const;

    // symbol: ?getNextSoundEventTick@AngryComponent@@QEBA?BUTick@@XZ
    MCAPI struct Tick const getNextSoundEventTick() const;

    // symbol: ??4AngryComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class AngryComponent & operator=(class AngryComponent &&);

    // symbol: ?restartTimer@AngryComponent@@QEAAXAEAVMob@@@Z
    MCAPI void restartTimer(class Mob &);

    // symbol: ?setAngry@AngryComponent@@QEAAXAEAVMob@@_N@Z
    MCAPI void setAngry(class Mob &, bool);

    // symbol: ?setHasTicked@AngryComponent@@QEAAX_N@Z
    MCAPI void setHasTicked(bool);

    // symbol: ?setNextSoundEventTick@AngryComponent@@QEAAXAEBVMob@@@Z
    MCAPI void setNextSoundEventTick(class Mob const &);

    // symbol: ??1AngryComponent@@QEAA@XZ
    MCAPI ~AngryComponent();

    // NOLINTEND

};

