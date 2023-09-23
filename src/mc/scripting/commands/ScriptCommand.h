#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ScriptCommand {
public:
    // prevent constructor by default
    ScriptCommand& operator=(ScriptCommand const &) = delete;
    ScriptCommand(ScriptCommand const &) = delete;
    ScriptCommand() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptCommand@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ScriptCommand(std::string const &);

    // symbol: ?getMessages@ScriptCommand@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getMessages() const;

    // symbol: ?getSuccessCount@ScriptCommand@@QEBAHXZ
    MCAPI int getSuccessCount() const;

    // symbol: ?serializeJsonOutput@ScriptCommand@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string serializeJsonOutput() const;

    // symbol: ?setJsonOutput@ScriptCommand@@QEAAX$$QEAVValue@Json@@@Z
    MCAPI void setJsonOutput(class Json::Value &&);

    // symbol: ?setOutput@ScriptCommand@@QEAAXH$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setOutput(int, std::string &&);

    // NOLINTEND

};

