#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TrimMaterialRegistry {
public:
    // prevent constructor by default
    TrimMaterialRegistry& operator=(TrimMaterialRegistry const &) = delete;
    TrimMaterialRegistry(TrimMaterialRegistry const &) = delete;
    TrimMaterialRegistry() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?getAllEntries@TrimMaterialRegistry@@QEBAAEBV?$vector@UTrimMaterial@@V?$allocator@UTrimMaterial@@@std@@@std@@XZ
    MCAPI std::vector<struct TrimMaterial> const & getAllEntries() const;

    // symbol: ?getTrimMaterialByItemName@TrimMaterialRegistry@@QEBA?AV?$optional@UTrimMaterial@@@std@@AEBVHashedString@@@Z
    MCAPI std::optional<struct TrimMaterial> getTrimMaterialByItemName(class HashedString const &) const;

    // symbol: ?initializeServer@TrimMaterialRegistry@@QEAAXXZ
    MCAPI void initializeServer();

    // NOLINTEND

};

