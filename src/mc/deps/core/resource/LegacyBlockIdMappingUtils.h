#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"

namespace LegacyBlockIdMappingUtils {
    // NOLINTBEGIN
    // symbol: ?addLegacyBlockIdMapping@LegacyBlockIdMappingUtils@@YAXAEBVBlockLegacy@@_K@Z
    MCAPI void addLegacyBlockIdMapping(class BlockLegacy const &, uint64_t);

    // symbol: ?addLegacyBlockIdMappings@LegacyBlockIdMappingUtils@@YAXXZ
    MCAPI void addLegacyBlockIdMappings();

    // symbol: ?mBlockIdToVanillaBlockTypesMap@LegacyBlockIdMappingUtils@@3V?$unordered_map@IV?$WeakPtr@VBlockLegacy@@@@U?$hash@I@std@@U?$equal_to@I@3@V?$allocator@U?$pair@$$CBIV?$WeakPtr@VBlockLegacy@@@@@std@@@3@@std@@A
    MCAPI extern std::unordered_map<uint32_t,class WeakPtr<class BlockLegacy>> mBlockIdToVanillaBlockTypesMap;

    // symbol: ?mBlockNameToBlockIdMap@LegacyBlockIdMappingUtils@@3V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HU?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@std@@@2@@std@@A
    MCAPI extern std::unordered_map<std::string,int32_t> mBlockNameToBlockIdMap;
    // NOLINTEND

};
