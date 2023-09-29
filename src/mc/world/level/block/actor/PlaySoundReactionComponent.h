#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/LabTableReactionComponent.h"

class PlaySoundReactionComponent : public ::LabTableReactionComponent {
public:
    // prevent constructor by default
    PlaySoundReactionComponent& operator=(PlaySoundReactionComponent const &) = delete;
    PlaySoundReactionComponent(PlaySoundReactionComponent const &) = delete;
    PlaySoundReactionComponent() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: ?_onEnd@PlaySoundReactionComponent@@UEAAXAEAVLabTableReaction@@AEAVBlockSource@@@Z
    virtual void _onEnd(class LabTableReaction &, class BlockSource &);

    // NOLINTEND

};

