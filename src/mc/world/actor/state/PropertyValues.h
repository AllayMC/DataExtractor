#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PropertyValues {
public:
    // prevent constructor by default
    PropertyValues& operator=(PropertyValues const &) = delete;
    PropertyValues() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0PropertyValues@@QEAA@AEBU0@@Z
    MCAPI PropertyValues(struct PropertyValues const &);

    // symbol: ?resize@PropertyValues@@QEAAX_K000@Z
    MCAPI void resize(uint64_t, uint64_t, uint64_t, uint64_t);

    // symbol: ??1PropertyValues@@QEAA@XZ
    MCAPI ~PropertyValues();

    // NOLINTEND

};

