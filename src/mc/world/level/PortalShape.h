#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/PortalAxis.h"
#include "mc/world/Facing.h"

class PortalShape {
public:
    // prevent constructor by default
    PortalShape& operator=(PortalShape const &) = delete;
    PortalShape(PortalShape const &) = delete;
    PortalShape() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0PortalShape@@QEAA@AEBVBlockSource@@AEBVBlockPos@@W4PortalAxis@@@Z
    MCAPI PortalShape(class BlockSource const &, class BlockPos const &, ::PortalAxis);

    // symbol: ?createPortalBlocks@PortalShape@@QEBAXAEAVWorldChangeTransaction@@@Z
    MCAPI void createPortalBlocks(class WorldChangeTransaction &) const;

    // symbol: ?createRecord@PortalShape@@QEBA?AVPortalRecord@@XZ
    MCAPI class PortalRecord createRecord() const;

    // symbol: ?evaluate@PortalShape@@QEAAXAEBVBlockPos@@AEBVBlockSource@@@Z
    MCAPI void evaluate(class BlockPos const &, class BlockSource const &);

    // symbol: ?getNumberOfPortalBlocks@PortalShape@@QEBAHXZ
    MCAPI int32_t getNumberOfPortalBlocks() const;

    // symbol: ?isFilled@PortalShape@@QEBA_NXZ
    MCAPI bool isFilled() const;

    // symbol: ?isValid@PortalShape@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ?removePortalBlocks@PortalShape@@QEBAXAEAVWorldChangeTransaction@@AEBVBlockPos@@@Z
    MCAPI void removePortalBlocks(class WorldChangeTransaction &, class BlockPos const &) const;

    // symbol: ?setAxis@PortalShape@@QEAAXW4PortalAxis@@@Z
    MCAPI void setAxis(::PortalAxis);

    // symbol: ?updateNeighboringBlocks@PortalShape@@QEBAXAEAVBlockSource@@AEBVVec3@@@Z
    MCAPI void updateNeighboringBlocks(class BlockSource &, class Vec3 const &) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_calculatePortalHeight@PortalShape@@AEAAHAEBVBlockSource@@@Z
    MCAPI int32_t _calculatePortalHeight(class BlockSource const &);

    // symbol: ?_getDistanceUntilEdge@PortalShape@@AEBAHAEBVBlockPos@@W4Name@Facing@@AEBVBlockSource@@@Z
    MCAPI int32_t _getDistanceUntilEdge(class BlockPos const &, ::Facing::Name, class BlockSource const &) const;

    // NOLINTEND

};

