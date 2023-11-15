#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class StrongholdStart : public ::StructureStart {
public:
    // prevent constructor by default
    StrongholdStart& operator=(StrongholdStart const &) = delete;
    StrongholdStart(StrongholdStart const &) = delete;
    StrongholdStart() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?isValid@StrongholdStart@@UEBA_NXZ
    virtual bool isValid() const;

    // symbol: ??0StrongholdStart@@QEAA@AEAVDimension@@AEAVRandom@@HH@Z
    MCAPI StrongholdStart(class Dimension &, class Random &, int32_t, int32_t);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_initializePieceSet@StrongholdStart@@AEAAXAEAVRandom@@@Z
    MCAPI void _initializePieceSet(class Random &);

    // NOLINTEND

};

