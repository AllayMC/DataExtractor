#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/JumpType.h"

class JumpControlComponent {
public:
    // NOLINTBEGIN
    // symbol: ??0JumpControlComponent@@QEAA@XZ
    MCAPI JumpControlComponent();

    // symbol: ??0JumpControlComponent@@QEAA@AEBV0@@Z
    MCAPI JumpControlComponent(class JumpControlComponent const &);

    // symbol: ?getAnimationDuration@JumpControlComponent@@QEBAHXZ
    MCAPI int32_t getAnimationDuration() const;

    // symbol: ?getDistanceScale@JumpControlComponent@@QEBAMXZ
    MCAPI float getDistanceScale() const;

    // symbol: ?getJumpDelay@JumpControlComponent@@QEBAHXZ
    MCAPI int32_t getJumpDelay() const;

    // symbol: ?getJumpPower@JumpControlComponent@@QEBAMXZ
    MCAPI float getJumpPower() const;

    // symbol: ?getJumping@JumpControlComponent@@QEBA_NXZ
    MCAPI bool getJumping() const;

    // symbol: ?getSwimming@JumpControlComponent@@QEBA_NXZ
    MCAPI bool getSwimming() const;

    // symbol: ?initMultiTypeJumpComponent@JumpControlComponent@@QEAAXAEAVMob@@AEAVActorDefinitionDescriptor@@@Z
    MCAPI void initMultiTypeJumpComponent(class Mob &, class ActorDefinitionDescriptor &);

    // symbol: ?initializeFromDefinition@JumpControlComponent@@QEAAXAEAVMob@@PEAUJumpControlDescription@@@Z
    MCAPI void initializeFromDefinition(class Mob &, struct JumpControlDescription *);

    // symbol: ??4JumpControlComponent@@QEAAAEAV0@AEBV0@@Z
    MCAPI class JumpControlComponent & operator=(class JumpControlComponent const &);

    // symbol: ?resetSpeedModifier@JumpControlComponent@@QEAAXAEAVMob@@@Z
    MCAPI void resetSpeedModifier(class Mob &);

    // symbol: ?setInternalType@JumpControlComponent@@QEAAXV?$unique_ptr@VJumpControl@@U?$default_delete@VJumpControl@@@std@@@std@@@Z
    MCAPI void setInternalType(std::unique_ptr<class JumpControl>);

    // symbol: ?setJumpType@JumpControlComponent@@QEAAXW4JumpType@@@Z
    MCAPI void setJumpType(::JumpType);

    // symbol: ?setJumping@JumpControlComponent@@QEAAX_N@Z
    MCAPI void setJumping(bool);

    // symbol: ?setSwimming@JumpControlComponent@@QEAAX_N@Z
    MCAPI void setSwimming(bool);

    // symbol: ?update@JumpControlComponent@@QEAAXAEAVMob@@@Z
    MCAPI void update(class Mob &);

    // symbol: ??1JumpControlComponent@@QEAA@XZ
    MCAPI ~JumpControlComponent();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getDelayInternal@JumpControlComponent@@AEBAMXZ
    MCAPI float _getDelayInternal() const;

    // symbol: ?_getHeightInternal@JumpControlComponent@@AEBAMXZ
    MCAPI float _getHeightInternal() const;

    // NOLINTEND

};

