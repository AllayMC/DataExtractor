#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptorCount.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class RecipeIngredient : public ::ItemDescriptorCount {
public:
    // prevent constructor by default
    RecipeIngredient& operator=(RecipeIngredient const &) = delete;
    RecipeIngredient() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1RecipeIngredient@@UEAA@XZ
    MCVAPI ~RecipeIngredient();

    // symbol: ??0RecipeIngredient@@QEAA@AEBVItemDescriptor@@G@Z
    MCAPI RecipeIngredient(class ItemDescriptor const &, uint16_t);

    // symbol: ??0RecipeIngredient@@QEAA@AEBVBlock@@G@Z
    MCAPI RecipeIngredient(class Block const &, uint16_t);

    // symbol: ??0RecipeIngredient@@QEAA@AEBVBlockLegacy@@G@Z
    MCAPI RecipeIngredient(class BlockLegacy const &, uint16_t);

    // symbol: ??0RecipeIngredient@@QEAA@AEBV0@@Z
    MCAPI RecipeIngredient(class RecipeIngredient const &);

    // symbol: ??0RecipeIngredient@@QEAA@AEBUItemTag@@G@Z
    MCAPI RecipeIngredient(struct ItemTag const &, uint16_t);

    // symbol: ??0RecipeIngredient@@QEAA@AEBVItem@@HG@Z
    MCAPI RecipeIngredient(class Item const &, int32_t, uint16_t);

    // symbol: ??0RecipeIngredient@@QEAA@AEAVReadOnlyBinaryStream@@@Z
    MCAPI RecipeIngredient(class ReadOnlyBinaryStream &);

    // symbol: ??0RecipeIngredient@@QEAA@$$QEAV0@@Z
    MCAPI RecipeIngredient(class RecipeIngredient &&);

    // symbol: ??0RecipeIngredient@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@HG@Z
    MCAPI RecipeIngredient(std::string_view, int32_t, uint16_t);

    // symbol: ?EMPTY_INGREDIENT@RecipeIngredient@@2V1@A
    MCAPI static class RecipeIngredient EMPTY_INGREDIENT;

    // NOLINTEND

};

