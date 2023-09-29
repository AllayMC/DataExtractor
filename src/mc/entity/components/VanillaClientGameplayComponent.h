#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VanillaClientGameplayComponent {
public:
    // prevent constructor by default
    VanillaClientGameplayComponent& operator=(VanillaClientGameplayComponent const &) = delete;
    VanillaClientGameplayComponent(VanillaClientGameplayComponent const &) = delete;
    VanillaClientGameplayComponent() = delete;

};

