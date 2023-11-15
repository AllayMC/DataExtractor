#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourcePackFileDownloaderManager {
public:
    // prevent constructor by default
    ResourcePackFileDownloaderManager& operator=(ResourcePackFileDownloaderManager const &) = delete;
    ResourcePackFileDownloaderManager(ResourcePackFileDownloaderManager const &) = delete;
    ResourcePackFileDownloaderManager() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?cleanup@ResourcePackFileDownloaderManager@@QEAAXXZ
    MCAPI void cleanup();

    // symbol: ?update@ResourcePackFileDownloaderManager@@QEAAXXZ
    MCAPI void update();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?MAX_CHUNK_ATTEMPTS@ResourcePackFileDownloaderManager@@0HB
    MCAPI static int32_t const MAX_CHUNK_ATTEMPTS;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $MAX_CHUNK_ATTEMPTS() { return MAX_CHUNK_ATTEMPTS; }

    // NOLINTEND

};

