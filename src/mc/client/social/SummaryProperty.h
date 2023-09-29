#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class SummaryProperty {
public:
    // prevent constructor by default
    SummaryProperty(SummaryProperty const &) = delete;
    SummaryProperty() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??4SummaryProperty@Events@Social@@QEAAAEAV012@AEBV012@@Z
    MCAPI class Social::Events::SummaryProperty & operator=(class Social::Events::SummaryProperty const &);

    // symbol: ?summarize@SummaryProperty@Events@Social@@QEAAXAEBV123@@Z
    MCAPI void summarize(class Social::Events::SummaryProperty const &);

    // symbol: ??1SummaryProperty@Events@Social@@QEAA@XZ
    MCAPI ~SummaryProperty();

    // NOLINTEND

};

};
