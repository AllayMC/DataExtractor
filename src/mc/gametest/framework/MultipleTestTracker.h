#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class IGameTestListener; }
// clang-format on

namespace gametest {

class MultipleTestTracker {
public:
    // prevent constructor by default
    MultipleTestTracker& operator=(MultipleTestTracker const &) = delete;
    MultipleTestTracker(MultipleTestTracker const &) = delete;
    MultipleTestTracker() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?addListener@MultipleTestTracker@gametest@@QEAAXV?$shared_ptr@VIGameTestListener@gametest@@@std@@@Z
    MCAPI void addListener(std::shared_ptr<class gametest::IGameTestListener>);

    // symbol: ?isDone@MultipleTestTracker@gametest@@QEBA_NXZ
    MCAPI bool isDone() const;

    // symbol: ?removeListener@MultipleTestTracker@gametest@@QEAAXV?$shared_ptr@VIGameTestListener@gametest@@@std@@@Z
    MCAPI void removeListener(std::shared_ptr<class gametest::IGameTestListener>);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?sFailedOptionalTest@MultipleTestTracker@gametest@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sFailedOptionalTest;

    // symbol: ?sFailedRequiredTest@MultipleTestTracker@gametest@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sFailedRequiredTest;

    // symbol: ?sNotStartedTest@MultipleTestTracker@gametest@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sNotStartedTest;

    // symbol: ?sOnGoingTest@MultipleTestTracker@gametest@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sOnGoingTest;

    // symbol: ?sSuccessfulTest@MultipleTestTracker@gametest@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sSuccessfulTest;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $sFailedOptionalTest() { return sFailedOptionalTest; }

    inline auto& $sFailedRequiredTest() { return sFailedRequiredTest; }

    inline auto& $sNotStartedTest() { return sNotStartedTest; }

    inline auto& $sOnGoingTest() { return sOnGoingTest; }

    inline auto& $sSuccessfulTest() { return sSuccessfulTest; }

    // NOLINTEND

};

};
