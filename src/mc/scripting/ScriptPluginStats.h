#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptPluginStats {
public:
    // prevent constructor by default
    ScriptPluginStats(ScriptPluginStats const &) = delete;
    ScriptPluginStats() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??4ScriptPluginStats@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct ScriptPluginStats & operator=(struct ScriptPluginStats const &);

    // symbol: ??4ScriptPluginStats@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct ScriptPluginStats & operator=(struct ScriptPluginStats &&);

    // symbol: ??1ScriptPluginStats@@QEAA@XZ
    MCAPI ~ScriptPluginStats();

    // NOLINTEND

};

