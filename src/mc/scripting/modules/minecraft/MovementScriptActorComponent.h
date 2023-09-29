#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
// clang-format on

namespace ScriptModuleMinecraft {

class MovementScriptActorComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // prevent constructor by default
    MovementScriptActorComponent& operator=(MovementScriptActorComponent const &) = delete;
    MovementScriptActorComponent(MovementScriptActorComponent const &) = delete;
    MovementScriptActorComponent() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?getMaxTurn@MovementScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@M$$V@Scripting@@XZ
    virtual class Scripting::Result<float> getMaxTurn() const;

    // symbol: ?bind@MovementScriptActorComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VMovementScriptActorComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::MovementScriptActorComponent> bind();

    // NOLINTEND

};

};
