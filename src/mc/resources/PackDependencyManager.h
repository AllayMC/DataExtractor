#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PackDependencyManager {
    // NOLINTBEGIN
    // symbol: ?getMissingDependencyIdentities@PackDependencyManager@@YA?AV?$vector@UPackIdVersion@@V?$allocator@UPackIdVersion@@@std@@@std@@V?$not_null@PEBVPackSource@@@gsl@@AEBVPackManifest@@@Z
    MCAPI std::vector<struct PackIdVersion> getMissingDependencyIdentities(class gsl::not_null<class PackSource const *>, class PackManifest const &);

    // symbol: ?hasMissingDependencies@PackDependencyManager@@YA_NV?$not_null@PEBVPackSource@@@gsl@@AEBVPackManifest@@@Z
    MCAPI bool hasMissingDependencies(class gsl::not_null<class PackSource const *>, class PackManifest const &);

    // symbol: ?isNativeModule@PackDependencyManager@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool isNativeModule(std::string const &);
    // NOLINTEND

};
