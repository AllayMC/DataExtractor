#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/entries/LootPoolEntry.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootItem : public ::LootPoolEntry {
public:
    // prevent constructor by default
    LootItem& operator=(LootItem const &) = delete;
    LootItem(LootItem const &) = delete;
    LootItem() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?_createItem@LootItem@@MEAA_NAEAV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual bool _createItem(std::vector<class ItemStack> &, class Random &, class LootTableContext &);

    // symbol: ?deserialize@LootItem@@SA?AV?$unique_ptr@VLootPoolEntry@@U?$default_delete@VLootPoolEntry@@@std@@@std@@AEBVValue@Json@@HHAEAV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@3@@Z
    MCAPI static std::unique_ptr<class LootPoolEntry> deserialize(class Json::Value const &, int32_t, int32_t, std::vector<std::unique_ptr<class LootItemCondition>> &);

    // NOLINTEND

};

