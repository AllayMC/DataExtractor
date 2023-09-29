#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ButtonPushEvent {
public:
    // prevent constructor by default
    ButtonPushEvent& operator=(ButtonPushEvent const &) = delete;
    ButtonPushEvent(ButtonPushEvent const &) = delete;
    ButtonPushEvent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1ButtonPushEvent@@QEAA@XZ
    MCAPI ~ButtonPushEvent();

    // NOLINTEND

};

