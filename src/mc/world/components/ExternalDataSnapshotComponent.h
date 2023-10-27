#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExternalDataSnapshotComponent {
public:
    // prevent constructor by default
    ExternalDataSnapshotComponent& operator=(ExternalDataSnapshotComponent const &) = delete;
    ExternalDataSnapshotComponent(ExternalDataSnapshotComponent const &) = delete;
    ExternalDataSnapshotComponent() = delete;

};

