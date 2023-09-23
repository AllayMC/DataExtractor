#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class SanitizedFormatString {
public:
    // prevent constructor by default
    SanitizedFormatString& operator=(SanitizedFormatString const &) = delete;
    SanitizedFormatString(SanitizedFormatString const &) = delete;
    SanitizedFormatString() = delete;

    // private:
    // NOLINTBEGIN
    // symbol: ?_sanitize@SanitizedFormatString@Bedrock@@AEAAXXZ
    MCAPI void _sanitize();

    // NOLINTEND

};

};
