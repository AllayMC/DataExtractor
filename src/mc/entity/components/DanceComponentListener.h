#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/LevelSoundEvent.h"

class DanceComponentListener {
public:
    // prevent constructor by default
    DanceComponentListener& operator=(DanceComponentListener const &) = delete;
    DanceComponentListener(DanceComponentListener const &) = delete;
    DanceComponentListener() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?setLevel@DanceComponentListener@@QEAAXAEAVLevel@@@Z
    MCAPI void setLevel(class Level &);

    // symbol: ??1DanceComponentListener@@QEAA@XZ
    MCAPI ~DanceComponentListener();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_onLevelSoundEvent@DanceComponentListener@@AEAAXW4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N3@Z
    MCAPI void _onLevelSoundEvent(::LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);

    // NOLINTEND

};

