#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ThirdPartyInfo {
public:
    // prevent constructor by default
    ThirdPartyInfo& operator=(ThirdPartyInfo const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0ThirdPartyInfo@@QEAA@AEBV0@@Z
    MCAPI ThirdPartyInfo(class ThirdPartyInfo const &);

    // symbol: ??0ThirdPartyInfo@@QEAA@XZ
    MCAPI ThirdPartyInfo();

    // symbol: ??1ThirdPartyInfo@@QEAA@XZ
    MCAPI ~ThirdPartyInfo();

    // NOLINTEND

};

