#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/BiomeTemperatureCategory.h"
#include "mc/world/level/newbiome/WorkingData.h"

class AddOceanTemperatureOperationNode {
public:
    // prevent constructor by default
    AddOceanTemperatureOperationNode& operator=(AddOceanTemperatureOperationNode const &) = delete;
    AddOceanTemperatureOperationNode(AddOceanTemperatureOperationNode const &) = delete;
    AddOceanTemperatureOperationNode() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?init@OperationNodeBase@OperationNodeDetails@@UEAAX_J@Z
    virtual void init(int64_t);

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: ?_fillArea@AddOceanTemperatureOperationNode@@MEBAXAEAV?$WorkingData@W4BiomeTemperatureCategory@@D@OperationNodeDetails@@AEBVPos2d@@1@Z
    virtual void _fillArea(class OperationNodeDetails::WorkingData<::BiomeTemperatureCategory, char> &, class Pos2d const &, class Pos2d const &) const;

    // NOLINTEND

};

