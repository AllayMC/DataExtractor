#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MoveControlDescription.h"

class MoveControlSkipDescription : public ::MoveControlDescription {
public:
    // prevent constructor by default
    MoveControlSkipDescription& operator=(MoveControlSkipDescription const &) = delete;
    MoveControlSkipDescription(MoveControlSkipDescription const &) = delete;
    MoveControlSkipDescription() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@MoveControlSkipDescription@@UEBAPEBDXZ
    virtual char const * getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@MobEffectChangeDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1MoveControlSkipDescription@@UEAA@XZ
    MCVAPI ~MoveControlSkipDescription();

    // NOLINTEND

};

