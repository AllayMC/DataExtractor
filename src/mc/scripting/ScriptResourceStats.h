#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ScriptResourceStats {
public:
    // prevent constructor by default
    ScriptResourceStats& operator=(ScriptResourceStats const &) = delete;
    ScriptResourceStats(ScriptResourceStats const &) = delete;
    ScriptResourceStats() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?serialize@ScriptResourceStats@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUReflectionCtx@cereal@@@Z
    MCAPI std::string serialize(struct cereal::ReflectionCtx &) const;

    // symbol: ??1ScriptResourceStats@@QEAA@XZ
    MCAPI ~ScriptResourceStats();

    // symbol: ?bindType@ScriptResourceStats@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx &);

    // NOLINTEND

};

