#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct AssertHandlerContext;
// clang-format on

namespace DebugUtils {

class ComposedAssertMessage {
public:
    // prevent constructor by default
    ComposedAssertMessage& operator=(ComposedAssertMessage const &) = delete;
    ComposedAssertMessage(ComposedAssertMessage const &) = delete;
    ComposedAssertMessage() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?compose@ComposedAssertMessage@DebugUtils@@QEAAXAEBUAssertHandlerContext@@@Z
    MCAPI void compose(struct AssertHandlerContext const &);

    // symbol: ??1ComposedAssertMessage@DebugUtils@@QEAA@XZ
    MCAPI ~ComposedAssertMessage();

    // NOLINTEND

};

};
