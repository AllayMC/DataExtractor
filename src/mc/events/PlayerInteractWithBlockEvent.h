#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInteractWithBlockEvent {
public:
    // prevent constructor by default
    PlayerInteractWithBlockEvent& operator=(PlayerInteractWithBlockEvent const &) = delete;
    PlayerInteractWithBlockEvent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0PlayerInteractWithBlockEvent@@QEAA@AEBU0@@Z
    MCAPI PlayerInteractWithBlockEvent(struct PlayerInteractWithBlockEvent const &);

    // symbol: ??1PlayerInteractWithBlockEvent@@QEAA@XZ
    MCAPI ~PlayerInteractWithBlockEvent();

    // NOLINTEND

};

