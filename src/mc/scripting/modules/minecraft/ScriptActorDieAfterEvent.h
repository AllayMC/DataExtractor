#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptActorDieAfterEvent {
public:
    // prevent constructor by default
    ScriptActorDieAfterEvent& operator=(ScriptActorDieAfterEvent const &) = delete;
    ScriptActorDieAfterEvent(ScriptActorDieAfterEvent const &) = delete;
    ScriptActorDieAfterEvent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptActorDieAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptActorDieAfterEvent();

    // symbol: ?bind@ScriptActorDieAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptActorDieAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptActorDieAfterEvent> bind();

    // NOLINTEND

};

};
