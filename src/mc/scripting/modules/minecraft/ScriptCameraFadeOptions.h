#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCameraFadeOptions {
public:
    // prevent constructor by default
    ScriptCameraFadeOptions& operator=(ScriptCameraFadeOptions const &) = delete;
    ScriptCameraFadeOptions(ScriptCameraFadeOptions const &) = delete;
    ScriptCameraFadeOptions() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?bind@ScriptCameraFadeOptions@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptCameraFadeOptions@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptCameraFadeOptions> bind();

    // NOLINTEND

};

};
