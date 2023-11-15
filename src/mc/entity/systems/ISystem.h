#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ISystem {
public:
    // prevent constructor by default
    ISystem& operator=(ISystem const &) = delete;
    ISystem(ISystem const &) = delete;
    ISystem() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    MCVAPI void registerEvents(class entt::basic_dispatcher<std::allocator<void>> &);

    // NOLINTEND

};

