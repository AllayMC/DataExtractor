#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/FurnaceContainerManagerModel.h"

class SmokerContainerManagerModel : public ::FurnaceContainerManagerModel {
public:
    // prevent constructor by default
    SmokerContainerManagerModel& operator=(SmokerContainerManagerModel const &) = delete;
    SmokerContainerManagerModel(SmokerContainerManagerModel const &) = delete;
    SmokerContainerManagerModel() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??0SmokerContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI SmokerContainerManagerModel(::ContainerID, class Player &, class BlockPos const &);

    // NOLINTEND

};

