#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ErrorBindingBuilder.h"
#include "mc/gametest/framework/GameTestErrorType.h"

// auto generated forward declare list
// clang-format off
namespace gametest { struct GameTestErrorContext; }
// clang-format on

namespace gametest {

struct GameTestError {
public:
    // prevent constructor by default
    GameTestError& operator=(GameTestError const &) = delete;
    GameTestError() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0GameTestError@gametest@@QEAA@W4GameTestErrorType@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@V?$optional@UGameTestErrorContext@gametest@@@4@@Z
    MCAPI GameTestError(::gametest::GameTestErrorType, std::string const &, std::vector<std::string>, std::optional<struct gametest::GameTestErrorContext>);

    // symbol: ??0GameTestError@gametest@@QEAA@AEBU01@@Z
    MCAPI GameTestError(struct gametest::GameTestError const &);

    // symbol: ??0GameTestError@gametest@@QEAA@$$QEAU01@@Z
    MCAPI GameTestError(struct gametest::GameTestError &&);

    // symbol: ??0GameTestError@gametest@@QEAA@W4GameTestErrorType@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
    MCAPI GameTestError(::gametest::GameTestErrorType, std::string const &, std::vector<std::string>);

    // symbol: ??0GameTestError@gametest@@QEAA@W4GameTestErrorType@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI GameTestError(::gametest::GameTestErrorType, std::string const &);

    // symbol: ??4GameTestError@gametest@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct gametest::GameTestError & operator=(struct gametest::GameTestError &&);

    // symbol: ??1GameTestError@gametest@@QEAA@XZ
    MCAPI ~GameTestError();

    // symbol: ?bind@GameTestError@gametest@@SA?AV?$ErrorBindingBuilder@UGameTestError@gametest@@@Scripting@@XZ
    MCAPI static class Scripting::ErrorBindingBuilder<struct gametest::GameTestError> bind();

    // NOLINTEND

};

};
