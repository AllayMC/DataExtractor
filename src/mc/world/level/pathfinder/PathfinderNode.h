#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/NodeType.h"

class PathfinderNode {
public:
    // prevent constructor by default
    PathfinderNode& operator=(PathfinderNode const &) = delete;
    PathfinderNode() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0PathfinderNode@@QEAA@AEBVBlockPos@@W4NodeType@@@Z
    MCAPI PathfinderNode(class BlockPos const &, ::NodeType);

    // symbol: ??0PathfinderNode@@QEAA@AEBV0@@Z
    MCAPI PathfinderNode(class PathfinderNode const &);

    // symbol: ?distanceTo@PathfinderNode@@QEBAMPEAV1@@Z
    MCAPI float distanceTo(class PathfinderNode *) const;

    // symbol: ?distanceToSqr@PathfinderNode@@QEBAMPEAV1@@Z
    MCAPI float distanceToSqr(class PathfinderNode *) const;

    // symbol: ?equals@PathfinderNode@@QEAA_NPEAV1@@Z
    MCAPI bool equals(class PathfinderNode *);

    // symbol: ?getType@PathfinderNode@@QEBA?AW4NodeType@@XZ
    MCAPI ::NodeType getType() const;

    // symbol: ?inOpenSet@PathfinderNode@@QEAA_NXZ
    MCAPI bool inOpenSet();

    // NOLINTEND

};

