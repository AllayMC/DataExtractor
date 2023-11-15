#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace qrcodegen {

class QrCode {
public:
    // prevent constructor by default
    QrCode& operator=(QrCode const &) = delete;
    QrCode(QrCode const &) = delete;
    QrCode() = delete;

private:
    // NOLINTBEGIN
    // symbol: ?PENALTY_N1@QrCode@qrcodegen@@0HB
    MCAPI static int32_t const PENALTY_N1;

    // symbol: ?PENALTY_N2@QrCode@qrcodegen@@0HB
    MCAPI static int32_t const PENALTY_N2;

    // symbol: ?PENALTY_N3@QrCode@qrcodegen@@0HB
    MCAPI static int32_t const PENALTY_N3;

    // symbol: ?PENALTY_N4@QrCode@qrcodegen@@0HB
    MCAPI static int32_t const PENALTY_N4;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $PENALTY_N1() { return PENALTY_N1; }

    inline auto& $PENALTY_N2() { return PENALTY_N2; }

    inline auto& $PENALTY_N3() { return PENALTY_N3; }

    inline auto& $PENALTY_N4() { return PENALTY_N4; }

    // NOLINTEND

};

};
