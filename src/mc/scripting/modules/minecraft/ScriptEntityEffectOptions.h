#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptEntityEffectOptions {
public:
    // prevent constructor by default
    ScriptEntityEffectOptions& operator=(ScriptEntityEffectOptions const &) = delete;
    ScriptEntityEffectOptions(ScriptEntityEffectOptions const &) = delete;
    ScriptEntityEffectOptions() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?bind@ScriptEntityEffectOptions@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptEntityEffectOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptEntityEffectOptions> bind();

    // NOLINTEND

};

};
