#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ItemStackBaseComponentsHelper {
public:
    // prevent constructor by default
    ItemStackBaseComponentsHelper& operator=(ItemStackBaseComponentsHelper const &) = delete;
    ItemStackBaseComponentsHelper(ItemStackBaseComponentsHelper const &) = delete;
    ItemStackBaseComponentsHelper() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?isValidComponent@ItemStackBaseComponentsHelper@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static bool isValidComponent(std::string const &);

    // symbol: ?updateComponent@ItemStackBaseComponentsHelper@@SA_NAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@@Z
    MCAPI static bool updateComponent(class ItemStackBase &, std::string const &, class Json::Value const &);

    // NOLINTEND

};

