#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/SharePtrRefTraits.h"

template <typename T0>
class StackRefResultT : public T0::StackResultStorage {
public:
    using StackRef = typename T0::StackRef;
    using Base     = typename T0::StackResultStorage;
    using Base::Base;
};
