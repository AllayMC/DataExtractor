#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class BreakDoorAnnotationDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    BreakDoorAnnotationDescription& operator=(BreakDoorAnnotationDescription const &) = delete;
    BreakDoorAnnotationDescription(BreakDoorAnnotationDescription const &) = delete;
    BreakDoorAnnotationDescription() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@BreakDoorAnnotationDescription@@UEBAPEBDXZ
    virtual char const * getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@BreakDoorAnnotationDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1BreakDoorAnnotationDescription@@UEAA@XZ
    MCVAPI ~BreakDoorAnnotationDescription();

    // NOLINTEND

};

