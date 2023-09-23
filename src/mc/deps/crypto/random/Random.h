#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Random {

class Random {
public:
    // prevent constructor by default
    Random& operator=(Random const &) = delete;
    Random(Random const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0Random@0Crypto@@QEAA@XZ
    MCAPI Random();

    // symbol: ?fillData@Random@1Crypto@@QEAAXPEADI@Z
    MCAPI void fillData(char *, uint);

    // symbol: ?getBytes@Random@1Crypto@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z
    MCAPI std::string getBytes(uint);

    // NOLINTEND

};

};
