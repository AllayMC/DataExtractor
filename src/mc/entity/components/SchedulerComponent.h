#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SchedulerComponent {
public:
    // prevent constructor by default
    SchedulerComponent& operator=(SchedulerComponent const &) = delete;
    SchedulerComponent(SchedulerComponent const &) = delete;
    SchedulerComponent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?getCurrentEventIndex@SchedulerComponent@@QEBAHXZ
    MCAPI int32_t getCurrentEventIndex() const;

    // symbol: ?setCurrentEventIndex@SchedulerComponent@@QEAAXH@Z
    MCAPI void setCurrentEventIndex(int32_t);

    // NOLINTEND

};

