#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OwnerStorageFeature {
public:
    // prevent constructor by default
    OwnerStorageFeature& operator=(OwnerStorageFeature const &) = delete;
    OwnerStorageFeature(OwnerStorageFeature const &) = delete;
    OwnerStorageFeature() = delete;

    // protected:
    // NOLINTBEGIN
    // symbol: ??1OwnerStorageFeature@@IEAA@XZ
    MCAPI ~OwnerStorageFeature();

    // NOLINTEND

};

