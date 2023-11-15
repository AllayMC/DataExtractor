#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/newbiome/NeighborhoodReader.h"

namespace OperationNodeFilters {

struct River {
public:
    // prevent constructor by default
    River& operator=(River const &) = delete;
    River(River const &) = delete;
    River() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??RRiver@OperationNodeFilters@@QEBA_NAEAU?$NeighborhoodReader@H$00$00@OperationNodeDetails@@@Z
    MCAPI bool operator()(struct OperationNodeDetails::NeighborhoodReader<int32_t, 1, 1> &) const;

    // NOLINTEND

};

};
