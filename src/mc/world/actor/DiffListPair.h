#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DiffListPair {
public:
    // prevent constructor by default
    DiffListPair& operator=(DiffListPair const &) = delete;
    DiffListPair(DiffListPair const &) = delete;
    DiffListPair() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0DiffListPair@@QEAA@_NPEAVActorDefinitionDescriptor@@@Z
    MCAPI DiffListPair(bool, class ActorDefinitionDescriptor *);

    // NOLINTEND

};

