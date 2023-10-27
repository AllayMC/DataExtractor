#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct EntitySystemsInfo {
public:
    // prevent constructor by default
    EntitySystemsInfo& operator=(EntitySystemsInfo const &) = delete;
    EntitySystemsInfo(EntitySystemsInfo const &) = delete;
    EntitySystemsInfo() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?bindType@EntitySystemsInfo@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx &);

    // NOLINTEND

};

