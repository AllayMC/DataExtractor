#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class OceanMonumentStart : public ::StructureStart {
public:
    // prevent constructor by default
    OceanMonumentStart& operator=(OceanMonumentStart const &) = delete;
    OceanMonumentStart(OceanMonumentStart const &) = delete;
    OceanMonumentStart() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?postProcess@OceanMonumentStart@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

    // symbol: ?createMonument@OceanMonumentStart@@QEAAXAEAVDimension@@AEAVRandom@@HH@Z
    MCAPI void createMonument(class Dimension &, class Random &, int32_t, int32_t);

    // NOLINTEND

};

