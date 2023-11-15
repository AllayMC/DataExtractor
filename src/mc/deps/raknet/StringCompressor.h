#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class StringCompressor {
public:
    // prevent constructor by default
    StringCompressor& operator=(StringCompressor const &) = delete;
    StringCompressor(StringCompressor const &) = delete;
    StringCompressor() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?AddReference@StringCompressor@RakNet@@SAXXZ
    MCAPI static void AddReference();

    // symbol: ?RemoveReference@StringCompressor@RakNet@@SAXXZ
    MCAPI static void RemoveReference();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?instance@StringCompressor@RakNet@@0PEAV12@EA
    MCAPI static class RakNet::StringCompressor * instance;

    // symbol: ?referenceCount@StringCompressor@RakNet@@0HA
    MCAPI static int32_t referenceCount;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $instance() { return instance; }

    inline auto& $referenceCount() { return referenceCount; }

    // NOLINTEND

};

};
