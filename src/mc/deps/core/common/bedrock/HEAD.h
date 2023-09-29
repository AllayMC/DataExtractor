#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::MethodType {

struct HEAD {
public:
    // prevent constructor by default
    HEAD& operator=(HEAD const &) = delete;
    HEAD(HEAD const &) = delete;
    HEAD() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?name@HEAD@MethodType@Http@Bedrock@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const name;

    // NOLINTEND

};

};
