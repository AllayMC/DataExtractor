#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureIntegrityProcessor {
public:
    // prevent constructor by default
    StructureIntegrityProcessor& operator=(StructureIntegrityProcessor const &) = delete;
    StructureIntegrityProcessor(StructureIntegrityProcessor const &) = delete;
    StructureIntegrityProcessor() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?generateFlagsForIndices@StructureIntegrityProcessor@@QEBA?AV?$vector@_NV?$allocator@_N@std@@@std@@HH@Z
    MCAPI std::vector<bool> generateFlagsForIndices(int32_t, int32_t) const;

    // NOLINTEND

};

