#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Promise.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/server/commands/DeferredCommandBase.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptCommandError; }
namespace ScriptModuleMinecraft { struct ScriptCommandResult; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class DeferredScriptCommand : public ::DeferredCommandBase {
public:
    // prevent constructor by default
    DeferredScriptCommand& operator=(DeferredScriptCommand const &) = delete;
    DeferredScriptCommand(DeferredScriptCommand const &) = delete;
    DeferredScriptCommand() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?execute@DeferredScriptCommand@@UEAAXAEAVMinecraftCommands@@@Z
    virtual void execute(class MinecraftCommands &);

    // symbol: ??0DeferredScriptCommand@@QEAA@V?$unique_ptr@VScriptCommand@@U?$default_delete@VScriptCommand@@@std@@@std@@V?$unique_ptr@VCommandContext@@U?$default_delete@VCommandContext@@@std@@@2@VWeakLifetimeScope@Scripting@@V?$Promise@V?$StrongTypedObjectHandle@UScriptCommandResult@ScriptModuleMinecraft@@@Scripting@@UScriptCommandError@ScriptModuleMinecraft@@X@5@@Z
    MCAPI DeferredScriptCommand(std::unique_ptr<class ScriptCommand>, std::unique_ptr<class CommandContext>, class Scripting::WeakLifetimeScope, class Scripting::Promise<class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptCommandResult>, struct ScriptModuleMinecraft::ScriptCommandError, void>);

    // NOLINTEND

};

