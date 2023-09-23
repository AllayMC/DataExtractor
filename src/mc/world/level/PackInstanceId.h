#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PackInstanceId {
public:
    // prevent constructor by default
    PackInstanceId& operator=(PackInstanceId const &) = delete;
    PackInstanceId(PackInstanceId const &) = delete;
    PackInstanceId() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0PackInstanceId@@QEAA@AEBUPackIdVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI PackInstanceId(struct PackIdVersion const &, std::string const &);

    // symbol: ??0PackInstanceId@@QEAA@$$QEAU0@@Z
    MCAPI PackInstanceId(struct PackInstanceId &&);

    // symbol: ??1PackInstanceId@@QEAA@XZ
    MCAPI ~PackInstanceId();

    // NOLINTEND

};

