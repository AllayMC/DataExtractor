#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {

class ValueConstIterator {
public:
    // prevent constructor by default
    ValueConstIterator& operator=(ValueConstIterator const &) = delete;
    ValueConstIterator(ValueConstIterator const &) = delete;
    ValueConstIterator() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1ValueConstIterator@Json@@QEAA@XZ
    MCAPI ~ValueConstIterator();

    // NOLINTEND

};

};
