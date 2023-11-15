#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AttachableSlotIndex.h"

class AnimationComponentID {
public:
    // prevent constructor by default
    AnimationComponentID& operator=(AnimationComponentID const &) = delete;
    AnimationComponentID(AnimationComponentID const &) = delete;
    AnimationComponentID() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0AnimationComponentID@@QEAA@AEBUActorUniqueID@@GW4AttachableSlotIndex@@@Z
    MCAPI AnimationComponentID(struct ActorUniqueID const &, uint16_t, ::AttachableSlotIndex);

    // symbol: ?getHash@AnimationComponentID@@QEBA_KXZ
    MCAPI uint64_t getHash() const;

    // symbol: ??8AnimationComponentID@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class AnimationComponentID const &) const;

    // NOLINTEND

};

