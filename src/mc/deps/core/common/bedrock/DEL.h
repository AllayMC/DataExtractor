#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::MethodType {

struct DEL {
public:
    // prevent constructor by default
    DEL& operator=(DEL const &) = delete;
    DEL(DEL const &) = delete;
    DEL() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?name@DEL@MethodType@Http@Bedrock@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const name;

    // NOLINTEND

};

};
