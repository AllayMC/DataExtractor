#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

struct PendingArea {
public:
    // prevent constructor by default
    PendingArea& operator=(PendingArea const &) = delete;
    PendingArea(PendingArea const &) = delete;
    PendingArea() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?getDescription@PendingArea@@QEBA?AUTickingAreaDescription@@XZ
    MCAPI struct TickingAreaDescription getDescription() const;

    // symbol: ??4PendingArea@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct PendingArea & operator=(struct PendingArea &&);

    // symbol: ?serialize@PendingArea@@QEBA?AVCompoundTag@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI class CompoundTag serialize(class AutomaticID<class Dimension, int>) const;

    // symbol: ??1PendingArea@@QEAA@XZ
    MCAPI ~PendingArea();

    // symbol: ?load@PendingArea@@SA?AU1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@@Z
    MCAPI static struct PendingArea load(std::string const &, class CompoundTag const &);

    // NOLINTEND

};

