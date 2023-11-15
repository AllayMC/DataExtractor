#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Closure.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptSystemAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptSystemBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSystem {
public:
    // prevent constructor by default
    ScriptSystem& operator=(ScriptSystem const &) = delete;
    ScriptSystem(ScriptSystem const &) = delete;
    ScriptSystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptSystem@ScriptModuleMinecraft@@QEAA@AEBVWeakLifetimeScope@Scripting@@V?$not_null@PEAVServerLevel@@@gsl@@@Z
    MCAPI ScriptSystem(class Scripting::WeakLifetimeScope const &, class gsl::not_null<class ServerLevel *>);

    // symbol: ?clearRun@ScriptSystem@ScriptModuleMinecraft@@QEAAXI@Z
    MCAPI void clearRun(uint32_t);

    // symbol: ?getSystemAfterEvents@ScriptSystem@ScriptModuleMinecraft@@QEAA?AV?$StrongTypedObjectHandle@VScriptSystemAfterEvents@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemAfterEvents> getSystemAfterEvents();

    // symbol: ?getSystemBeforeEvents@ScriptSystem@ScriptModuleMinecraft@@QEAA?AV?$StrongTypedObjectHandle@VScriptSystemBeforeEvents@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemBeforeEvents> getSystemBeforeEvents();

    // symbol: ?runInterval@ScriptSystem@ScriptModuleMinecraft@@QEAAIV?$Closure@$$A6AXXZ$$V@Scripting@@V?$optional@I@std@@@Z
    MCAPI uint32_t runInterval(class Scripting::Closure<void (void)>, std::optional<uint32_t>);

    // symbol: ?runSafe@ScriptSystem@ScriptModuleMinecraft@@QEAAIV?$Closure@$$A6AXXZ$$V@Scripting@@@Z
    MCAPI uint32_t runSafe(class Scripting::Closure<void (void)>);

    // symbol: ?runTimeout@ScriptSystem@ScriptModuleMinecraft@@QEAAIV?$Closure@$$A6AXXZ$$V@Scripting@@V?$optional@I@std@@@Z
    MCAPI uint32_t runTimeout(class Scripting::Closure<void (void)>, std::optional<uint32_t>);

    // symbol: ?bind@ScriptSystem@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptSystem@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptSystem> bind();

    // NOLINTEND

};

};
