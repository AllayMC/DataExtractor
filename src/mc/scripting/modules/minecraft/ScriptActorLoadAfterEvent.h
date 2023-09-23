#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorLoadAfterEvent {
public:
    // prevent constructor by default
    ScriptActorLoadAfterEvent& operator=(ScriptActorLoadAfterEvent const &) = delete;
    ScriptActorLoadAfterEvent(ScriptActorLoadAfterEvent const &) = delete;
    ScriptActorLoadAfterEvent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptActorLoadAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptActorLoadAfterEvent();

    // symbol: ?bind@ScriptActorLoadAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptActorLoadAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorLoadAfterEvent> bind();

    // NOLINTEND

};

};
