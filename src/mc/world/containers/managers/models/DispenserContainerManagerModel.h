#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

class DispenserContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // prevent constructor by default
    DispenserContainerManagerModel& operator=(DispenserContainerManagerModel const &) = delete;
    DispenserContainerManagerModel(DispenserContainerManagerModel const &) = delete;
    DispenserContainerManagerModel() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 17, symbol: ?_postInit@DispenserContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
    virtual class ContainerScreenContext _postInit();

    // symbol: ??0DispenserContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI DispenserContainerManagerModel(::ContainerID, class Player &, class BlockPos const &);

    // NOLINTEND

};

