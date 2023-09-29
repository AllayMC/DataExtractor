#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CurrentCmdVersion.h"
#include "mc/util/molang/MolangVersion.h"

class ActorAnimationControllerState {
public:
    // prevent constructor by default
    ActorAnimationControllerState& operator=(ActorAnimationControllerState const &) = delete;
    ActorAnimationControllerState(ActorAnimationControllerState const &) = delete;
    ActorAnimationControllerState() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?addAnimation@ActorAnimationControllerState@@QEAAXAEBVHashedString@@AEBVExpressionNode@@@Z
    MCAPI void addAnimation(class HashedString const &, class ExpressionNode const &);

    // symbol: ?addAnimation@ActorAnimationControllerState@@QEAAXAEBVHashedString@@@Z
    MCAPI void addAnimation(class HashedString const &);

    // symbol: ?addBlendTransitionKeyFrame@ActorAnimationControllerState@@QEAAXMM@Z
    MCAPI void addBlendTransitionKeyFrame(float, float);

    // symbol: ?addEntryActorEvent@ActorAnimationControllerState@@QEAAAEAVActorAnimationEvent@@MAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CurrentCmdVersion@@W4MolangVersion@@@Z
    MCAPI class ActorAnimationEvent & addEntryActorEvent(float, std::string const &, ::CurrentCmdVersion, ::MolangVersion);

    // symbol: ?addExitActorEvent@ActorAnimationControllerState@@QEAAAEAVActorAnimationEvent@@MAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CurrentCmdVersion@@W4MolangVersion@@@Z
    MCAPI class ActorAnimationEvent & addExitActorEvent(float, std::string const &, ::CurrentCmdVersion, ::MolangVersion);

    // symbol: ?addParticleEffect@ActorAnimationControllerState@@QEAAAEAVActorParticleEffect@@XZ
    MCAPI class ActorParticleEffect & addParticleEffect();

    // symbol: ?addSoundEffect@ActorAnimationControllerState@@QEAAAEAVActorSoundEffect@@XZ
    MCAPI class ActorSoundEffect & addSoundEffect();

    // symbol: ?addTransition@ActorAnimationControllerState@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4MolangVersion@@_N@Z
    MCAPI void addTransition(std::string const &, std::string const &, ::MolangVersion, bool);

    // symbol: ?addVariable@ActorAnimationControllerState@@QEAAAEAVStateAnimationVariable@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class StateAnimationVariable & addVariable(std::string const &);

    // symbol: ?setBlendTransitionTime@ActorAnimationControllerState@@QEAAXM@Z
    MCAPI void setBlendTransitionTime(float);

    // symbol: ?setVariables@ActorAnimationControllerState@@QEBAXAEAVRenderParams@@@Z
    MCAPI void setVariables(class RenderParams &) const;

    // NOLINTEND

};

