#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptWorld; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWorldFactory {
public:
    // prevent constructor by default
    ScriptWorldFactory& operator=(ScriptWorldFactory const &) = delete;
    ScriptWorldFactory(ScriptWorldFactory const &) = delete;
    ScriptWorldFactory() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?getHandle@ScriptWorldFactory@ScriptModuleMinecraft@@SA?AV?$StrongTypedObjectHandle@VScriptWorld@ScriptModuleMinecraft@@@Scripting@@AEAVWeakLifetimeScope@4@AEAVServerLevel@@@Z
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptWorld> getHandle(class Scripting::WeakLifetimeScope &, class ServerLevel &);

    // NOLINTEND

};

};
