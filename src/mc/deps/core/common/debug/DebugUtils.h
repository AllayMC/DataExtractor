#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DebugUtils {
    // NOLINTBEGIN
    // symbol: ?handleAssert_va@DebugUtils@@YA_NPEBD0AEA_NH00PEAD@Z
    MCAPI bool handleAssert_va(char const *, char const *, bool &, int32_t, char const *, char const *, char *);

    // symbol: ?isDebuggerAttached@DebugUtils@@YA_NXZ
    MCAPI bool isDebuggerAttached();

    // symbol: ?runAssertHandler@DebugUtils@@YA_NAEBV?$bitset@$06@std@@AEBUAssertHandlerContext@@AEA_N@Z
    MCAPI bool runAssertHandler(std::bitset<7> const &, struct AssertHandlerContext const &, bool &);

    // symbol: ?setThreadName@DebugUtils@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setThreadName(std::string const &);

    // symbol: ?shouldDebugBreak@DebugUtils@@YA_NXZ
    MCAPI bool shouldDebugBreak();
    // NOLINTEND

};
