#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace VanillaComplexAliasBlockUtils::Carpet {
    // NOLINTBEGIN
    // symbol: ?getComplexAliasCallback@Carpet@VanillaComplexAliasBlockUtils@@YA?AV?$function@$$A6APEBVBlock@@H@Z@std@@XZ
    MCAPI std::function<class Block const * (int32_t)> getComplexAliasCallback();

    // symbol: ?getSplitStates@Carpet@VanillaComplexAliasBlockUtils@@YA?AV?$vector@USplitBlock@RemovedStateCollection@BlockLegacy@@V?$allocator@USplitBlock@RemovedStateCollection@BlockLegacy@@@std@@@std@@XZ
    MCAPI std::vector<struct BlockLegacy::RemovedStateCollection::SplitBlock> getSplitStates();
    // NOLINTEND

};
