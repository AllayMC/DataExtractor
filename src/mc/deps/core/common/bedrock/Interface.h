#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/debug/LogCategory.h"
#include "mc/deps/core/common/debug/LogRule.h"
#include "mc/enums/LogAreaID.h"

namespace Bedrock::Diagnostics::Interface {
    // NOLINTBEGIN
    // symbol: ?handleAssert@Interface@Diagnostics@Bedrock@@YA_NPEBD0AEA_NH00PEAD@Z
    MCAPI bool handleAssert(char const *, char const *, bool &, int32_t, char const *, char const *, char *);

    // symbol: ?log@Interface@Diagnostics@Bedrock@@YAXW4LogCategory@BedrockLog@@V?$bitset@$02@std@@W4LogRule@5@W4LogAreaID@@IPEBDH4PEAD@Z
    MCAPI void log(::BedrockLog::LogCategory, std::bitset<3>, ::BedrockLog::LogRule, ::LogAreaID, uint32_t, char const *, int32_t, char const *, char *);

    // symbol: ?shouldDebugBreak@Interface@Diagnostics@Bedrock@@YA_NXZ
    MCAPI bool shouldDebugBreak();
    // NOLINTEND

};
