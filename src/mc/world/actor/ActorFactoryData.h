#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorFactoryData {
public:
    // prevent constructor by default
    ActorFactoryData(ActorFactoryData const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0ActorFactoryData@@QEAA@XZ
    MCAPI ActorFactoryData();

    // symbol: ??4ActorFactoryData@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct ActorFactoryData & operator=(struct ActorFactoryData const &);

    // symbol: ??1ActorFactoryData@@QEAA@XZ
    MCAPI ~ActorFactoryData();

    // NOLINTEND

};

