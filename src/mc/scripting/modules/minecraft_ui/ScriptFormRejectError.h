#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ErrorBindingBuilder.h"
#include "mc/scripting/modules/minecraft_ui/ScriptFormRejectReason.h"

namespace ScriptModuleMinecraftServerUI {

class ScriptFormRejectError {
public:
    // prevent constructor by default
    ScriptFormRejectError& operator=(ScriptFormRejectError const &) = delete;
    ScriptFormRejectError(ScriptFormRejectError const &) = delete;
    ScriptFormRejectError() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptFormRejectError@ScriptModuleMinecraftServerUI@@QEAA@W4ScriptFormRejectReason@1@@Z
    MCAPI ScriptFormRejectError(::ScriptModuleMinecraftServerUI::ScriptFormRejectReason);

    // symbol: ??1ScriptFormRejectError@ScriptModuleMinecraftServerUI@@QEAA@XZ
    MCAPI ~ScriptFormRejectError();

    // symbol: ?bind@ScriptFormRejectError@ScriptModuleMinecraftServerUI@@SA?AV?$ErrorBindingBuilder@VScriptFormRejectError@ScriptModuleMinecraftServerUI@@@Scripting@@XZ
    MCAPI static class Scripting::ErrorBindingBuilder<class ScriptModuleMinecraftServerUI::ScriptFormRejectError> bind();

    // NOLINTEND

};

};
