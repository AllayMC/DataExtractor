#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/AttributeScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class AttributeScriptActorComponent; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLavaMovementComponent : public ::ScriptModuleMinecraft::AttributeScriptActorComponent {
public:
    // prevent constructor by default
    ScriptLavaMovementComponent& operator=(ScriptLavaMovementComponent const &) = delete;
    ScriptLavaMovementComponent(ScriptLavaMovementComponent const &) = delete;
    ScriptLavaMovementComponent() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1ScriptLavaMovementComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptLavaMovementComponent();

    // symbol: ?bind@ScriptLavaMovementComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptLavaMovementComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptLavaMovementComponent> bind();

    // symbol: ?ComponentId@ScriptLavaMovementComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const * ComponentId;

    // NOLINTEND

};

};
