#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CompoundBlockVolumeItem {
public:
    // prevent constructor by default
    CompoundBlockVolumeItem& operator=(CompoundBlockVolumeItem const &) = delete;
    CompoundBlockVolumeItem(CompoundBlockVolumeItem const &) = delete;
    CompoundBlockVolumeItem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??8CompoundBlockVolumeItem@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class CompoundBlockVolumeItem const &) const;

    // symbol: ?bindType@CompoundBlockVolumeItem@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx &);

    // NOLINTEND

};

