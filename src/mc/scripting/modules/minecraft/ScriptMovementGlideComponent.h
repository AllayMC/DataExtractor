#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/MovementScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class MovementScriptActorComponent; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMovementGlideComponent : public ::ScriptModuleMinecraft::MovementScriptActorComponent {
public:
    // prevent constructor by default
    ScriptMovementGlideComponent& operator=(ScriptMovementGlideComponent const &) = delete;
    ScriptMovementGlideComponent(ScriptMovementGlideComponent const &) = delete;
    ScriptMovementGlideComponent() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1ScriptMovementGlideComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptMovementGlideComponent();

    // symbol: ?getSpeedWhenTurning@ScriptMovementGlideComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@M$$V@Scripting@@XZ
    MCAPI class Scripting::Result<float> getSpeedWhenTurning() const;

    // symbol: ?getStartSpeed@ScriptMovementGlideComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@M$$V@Scripting@@XZ
    MCAPI class Scripting::Result<float> getStartSpeed() const;

    // symbol: ?bind@ScriptMovementGlideComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptMovementGlideComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMovementGlideComponent> bind();

    // symbol: ?ComponentId@ScriptMovementGlideComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const * ComponentId;

    // NOLINTEND

};

};
