#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

class SilverfishMergeWithStoneGoal : public ::RandomStrollGoal {
public:
    // prevent constructor by default
    SilverfishMergeWithStoneGoal& operator=(SilverfishMergeWithStoneGoal const &) = delete;
    SilverfishMergeWithStoneGoal(SilverfishMergeWithStoneGoal const &) = delete;
    SilverfishMergeWithStoneGoal() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canUse@SilverfishMergeWithStoneGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@SilverfishMergeWithStoneGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@SilverfishMergeWithStoneGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 7, symbol: ?appendDebugInfo@SilverfishMergeWithStoneGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string &) const;

    // symbol: ??0SilverfishMergeWithStoneGoal@@QEAA@AEAVSilverfish@@@Z
    MCAPI SilverfishMergeWithStoneGoal(class Silverfish &);

    // NOLINTEND

};

