#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FileChunkInfo {
public:
    // prevent constructor by default
    FileChunkInfo& operator=(FileChunkInfo const &) = delete;
    FileChunkInfo(FileChunkInfo const &) = delete;
    FileChunkInfo() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0FileChunkInfo@@QEAA@H_K0@Z
    MCAPI FileChunkInfo(int, uint64, uint64);

    // NOLINTEND

};

