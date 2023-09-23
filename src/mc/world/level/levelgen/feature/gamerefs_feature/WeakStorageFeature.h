#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WeakStorageFeature {
public:
    // WeakStorageFeature inner types define
    enum class EmptyInit {};
    
public:
    // prevent constructor by default
    WeakStorageFeature& operator=(WeakStorageFeature const &) = delete;
    WeakStorageFeature(WeakStorageFeature const &) = delete;
    WeakStorageFeature() = delete;

    // protected:
    // NOLINTBEGIN
    // symbol: ??0WeakStorageFeature@@IEAA@W4EmptyInit@0@@Z
    MCAPI WeakStorageFeature(::WeakStorageFeature::EmptyInit);

    // symbol: ??0WeakStorageFeature@@IEAA@$$QEAV0@@Z
    MCAPI WeakStorageFeature(class WeakStorageFeature &&);

    // symbol: ??4WeakStorageFeature@@IEAAAEAV0@$$QEAV0@@Z
    MCAPI class WeakStorageFeature & operator=(class WeakStorageFeature &&);

    // NOLINTEND

};

