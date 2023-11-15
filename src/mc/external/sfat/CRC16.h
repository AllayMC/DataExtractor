#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class CRC16 {
public:
    // prevent constructor by default
    CRC16& operator=(CRC16 const &) = delete;
    CRC16(CRC16 const &) = delete;
    CRC16() = delete;

private:
    // NOLINTBEGIN
    // symbol: ?table@CRC16@SFAT@@0QBIB
    MCAPI static uint32_t const table[];

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $table() { return table; }

    // NOLINTEND

};

};
