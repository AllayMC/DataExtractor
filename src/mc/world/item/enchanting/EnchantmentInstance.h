#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class EnchantmentInstance {
public:
    // prevent constructor by default
    EnchantmentInstance& operator=(EnchantmentInstance const &) = delete;
    EnchantmentInstance(EnchantmentInstance const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0EnchantmentInstance@@QEAA@XZ
    MCAPI EnchantmentInstance();

    // symbol: ??0EnchantmentInstance@@QEAA@W4Type@Enchant@@H@Z
    MCAPI EnchantmentInstance(::Enchant::Type, int32_t);

    // symbol: ?getEnchantLevel@EnchantmentInstance@@QEBAHXZ
    MCAPI int32_t getEnchantLevel() const;

    // symbol: ?getEnchantType@EnchantmentInstance@@QEBA?AW4Type@Enchant@@XZ
    MCAPI ::Enchant::Type getEnchantType() const;

    // symbol: ?setEnchantLevel@EnchantmentInstance@@QEAAXH@Z
    MCAPI void setEnchantLevel(int32_t);

    // NOLINTEND

};

