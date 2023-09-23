#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::CodeBuilder {

class Event {
public:
    // prevent constructor by default
    Event& operator=(Event const &) = delete;
    Event(Event const &) = delete;
    Event() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1Event@CodeBuilder@Util@@QEAA@XZ
    MCAPI ~Event();

    // NOLINTEND

};

};
