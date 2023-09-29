#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template<typename T0, int T1>
struct IScriptBlockEventSignal {
public:
    // prevent constructor by default
    IScriptBlockEventSignal& operator=(IScriptBlockEventSignal const &) = delete;
    IScriptBlockEventSignal(IScriptBlockEventSignal const &) = delete;
    IScriptBlockEventSignal() = delete;

};

};
