#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/Result.h"

template <typename T>
struct serialize {
public:
    MCAPI static void               write(T const&, class BinaryStream&);
    MCAPI static Bedrock::Result<T> read(class ReadOnlyBinaryStream&);
};