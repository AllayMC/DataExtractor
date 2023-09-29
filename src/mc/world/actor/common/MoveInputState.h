#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MoveInputState {
public:
    // prevent constructor by default
    MoveInputState& operator=(MoveInputState const &) = delete;
    MoveInputState(MoveInputState const &) = delete;
    MoveInputState() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?clear@MoveInputState@@QEAAX_N@Z
    MCAPI void clear(bool);

    // symbol: ?wantsSneak@MoveInputState@@QEBA_NXZ
    MCAPI bool wantsSneak() const;

    // NOLINTEND

};

