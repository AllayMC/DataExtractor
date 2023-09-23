#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerValidationCommitObject.h"

class ExperienceRewardCommitObject : public ::ContainerValidationCommitObject {
public:
    // prevent constructor by default
    ExperienceRewardCommitObject& operator=(ExperienceRewardCommitObject const &) = delete;
    ExperienceRewardCommitObject(ExperienceRewardCommitObject const &) = delete;
    ExperienceRewardCommitObject() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?append@ExperienceRewardCommitObject@@UEAA_NPEAVContainerValidationCommitObject@@@Z
    virtual bool append(class ContainerValidationCommitObject *);

    // vIndex: 2, symbol: ?canCommit@ExperienceRewardCommitObject@@UEBA_NAEBVContainerScreenContext@@@Z
    virtual bool canCommit(class ContainerScreenContext const &) const;

    // vIndex: 3, symbol: ?commit@ExperienceRewardCommitObject@@UEAAXAEBVContainerScreenContext@@@Z
    virtual void commit(class ContainerScreenContext const &);

    // symbol: ??0ExperienceRewardCommitObject@@QEAA@H@Z
    MCAPI ExperienceRewardCommitObject(int);

    // NOLINTEND

};

