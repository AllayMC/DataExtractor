#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

namespace StructureFeatureTypeNames {
    // NOLINTBEGIN
    // symbol: ?getFeatureName@StructureFeatureTypeNames@@YA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@W4StructureFeatureType@@@Z
    MCAPI std::string_view getFeatureName(::StructureFeatureType);

    // symbol: ?getFeatureType@StructureFeatureTypeNames@@YA?AW4StructureFeatureType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ::StructureFeatureType getFeatureType(std::string const &);

    // symbol: ?getFeatureTypeAliasesMap@StructureFeatureTypeNames@@YAAEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4StructureFeatureType@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4StructureFeatureType@@@std@@@2@@std@@XZ
    MCAPI std::map<std::string,::StructureFeatureType> const & getFeatureTypeAliasesMap();
    // NOLINTEND

};
