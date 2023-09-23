#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/NBBridgeCrossing.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class NBStartPiece : public ::NBBridgeCrossing {
public:
    // prevent constructor by default
    NBStartPiece& operator=(NBStartPiece const &) = delete;
    NBStartPiece(NBStartPiece const &) = delete;
    NBStartPiece() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?getType@NBStartPiece@@UEBA?AW4StructurePieceType@@XZ
    virtual ::StructurePieceType getType() const;

    // symbol: ??0NBStartPiece@@QEAA@AEAVRandom@@HH@Z
    MCAPI NBStartPiece(class Random &, int, int);

    // NOLINTEND

};

