#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBlockHitInformation; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptProjectileHitBlockAfterEvent {
public:
    // prevent constructor by default
    ScriptProjectileHitBlockAfterEvent& operator=(ScriptProjectileHitBlockAfterEvent const &) = delete;
    ScriptProjectileHitBlockAfterEvent(ScriptProjectileHitBlockAfterEvent const &) = delete;
    ScriptProjectileHitBlockAfterEvent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?getBlockHit@ScriptProjectileHitBlockAfterEvent@ScriptModuleMinecraft@@QEBA?AUScriptBlockHitInformation@2@XZ
    MCAPI struct ScriptModuleMinecraft::ScriptBlockHitInformation getBlockHit() const;

    // symbol: ??1ScriptProjectileHitBlockAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptProjectileHitBlockAfterEvent();

    // symbol: ?bind@ScriptProjectileHitBlockAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptProjectileHitBlockAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptProjectileHitBlockAfterEvent> bind();

    // NOLINTEND

};

};
