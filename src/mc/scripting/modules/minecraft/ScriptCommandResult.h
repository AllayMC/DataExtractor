#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCommandResult {
public:
    // prevent constructor by default
    ScriptCommandResult& operator=(ScriptCommandResult const &) = delete;
    ScriptCommandResult(ScriptCommandResult const &) = delete;
    ScriptCommandResult() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?bind@ScriptCommandResult@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptCommandResult@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptCommandResult> bind();

    // NOLINTEND

};

};
