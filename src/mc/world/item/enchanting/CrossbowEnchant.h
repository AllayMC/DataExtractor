#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class CrossbowEnchant : public ::Enchant {
public:
    // prevent constructor by default
    CrossbowEnchant& operator=(CrossbowEnchant const &) = delete;
    CrossbowEnchant(CrossbowEnchant const &) = delete;
    CrossbowEnchant() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isCompatibleWith@CrossbowEnchant@@UEBA_NW4Type@Enchant@@@Z
    virtual bool isCompatibleWith(::Enchant::Type) const;

    // vIndex: 2, symbol: ?getMinCost@CrossbowEnchant@@UEBAHH@Z
    virtual int32_t getMinCost(int32_t) const;

    // vIndex: 3, symbol: ?getMaxCost@CrossbowEnchant@@UEBAHH@Z
    virtual int32_t getMaxCost(int32_t) const;

    // vIndex: 5, symbol: ?getMaxLevel@CrossbowEnchant@@UEBAHXZ
    virtual int32_t getMaxLevel() const;

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // vIndex: 14, symbol: ?_isValidEnchantmentTypeForCategory@CrossbowEnchant@@EEBA_NW4Type@Enchant@@@Z
    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type) const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?VALID_ENCHANTMENTS@CrossbowEnchant@@0V?$vector@W4Type@Enchant@@V?$allocator@W4Type@Enchant@@@std@@@std@@B
    MCAPI static std::vector<::Enchant::Type> const VALID_ENCHANTMENTS;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $VALID_ENCHANTMENTS() { return VALID_ENCHANTMENTS; }

    // NOLINTEND

};

