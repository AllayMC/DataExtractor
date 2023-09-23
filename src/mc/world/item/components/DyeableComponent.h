#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class DyeableComponent {
public:
    // prevent constructor by default
    DyeableComponent& operator=(DyeableComponent const &) = delete;
    DyeableComponent(DyeableComponent const &) = delete;
    DyeableComponent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?appendFormattedHovertext@DyeableComponent@@QEBAXAEBVItemStackBase@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI void appendFormattedHovertext(class ItemStackBase const &, std::string &, bool) const;

    // symbol: ?clearColor@DyeableComponent@@QEBAXAEAVItemStackBase@@@Z
    MCAPI void clearColor(class ItemStackBase &) const;

    // symbol: ?hasCustomColor@DyeableComponent@@QEBA_NAEBVItemStackBase@@@Z
    MCAPI bool hasCustomColor(class ItemStackBase const &) const;

    // symbol: ?setColor@DyeableComponent@@QEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
    MCAPI void setColor(class ItemStackBase &, class mce::Color const &) const;

    // symbol: ?ResetDefaultLeatherColor@DyeableComponent@@SAXXZ
    MCAPI static void ResetDefaultLeatherColor();

    // symbol: ?getIdentifier@DyeableComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const & getIdentifier();

    // symbol: ?DEFAULT_HORSE_LEATHER_COLOR@DyeableComponent@@2VColor@mce@@A
    MCAPI static class mce::Color DEFAULT_HORSE_LEATHER_COLOR;

    // symbol: ?DEFAULT_LEATHER_COLOR@DyeableComponent@@2VColor@mce@@A
    MCAPI static class mce::Color DEFAULT_LEATHER_COLOR;

    // NOLINTEND

};

