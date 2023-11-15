#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SculkSpreader {
public:
    // prevent constructor by default
    SculkSpreader& operator=(SculkSpreader const &) = delete;
    SculkSpreader(SculkSpreader const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0SculkSpreader@@QEAA@_NHHHH@Z
    MCAPI SculkSpreader(bool, int32_t, int32_t, int32_t, int32_t);

    // symbol: ??0SculkSpreader@@QEAA@XZ
    MCAPI SculkSpreader();

    // symbol: ?addCursors@SculkSpreader@@QEAAXAEBVBlockPos@@H@Z
    MCAPI void addCursors(class BlockPos const &, int32_t);

    // symbol: ?clearCursors@SculkSpreader@@QEAAXXZ
    MCAPI void clearCursors();

    // symbol: ?getCursorPosition@SculkSpreader@@QEBA?AVBlockPos@@H@Z
    MCAPI class BlockPos getCursorPosition(int32_t) const;

    // symbol: ?getMaxCharge@SculkSpreader@@QEBAHXZ
    MCAPI int32_t getMaxCharge() const;

    // symbol: ?getNumberOfCursors@SculkSpreader@@QEBAHXZ
    MCAPI int32_t getNumberOfCursors() const;

    // symbol: ?getTotalCharge@SculkSpreader@@QEBAHXZ
    MCAPI int32_t getTotalCharge() const;

    // symbol: ?load@SculkSpreader@@QEAAXAEBVCompoundTag@@@Z
    MCAPI void load(class CompoundTag const &);

    // symbol: ?save@SculkSpreader@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void save(class CompoundTag &) const;

    // symbol: ?updateCursors@SculkSpreader@@QEAAXAEAVIBlockWorldGenAPI@@PEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@_N@Z
    MCAPI void updateCursors(class IBlockWorldGenAPI &, class BlockSource *, class BlockPos const &, class Random &, bool);

    // symbol: ??1SculkSpreader@@QEAA@XZ
    MCAPI ~SculkSpreader();

    // NOLINTEND

};

