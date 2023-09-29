#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace ResourceHelper {
    // NOLINTBEGIN
    // symbol: ?deserializePackStackEntry@ResourceHelper@@YA_NAEBVValue@Json@@AEAUPackInstanceId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool deserializePackStackEntry(class Json::Value const &, struct PackInstanceId &, std::string const &);

    // symbol: ?stringifyResourceMetadataGeneratedWith@ResourceHelper@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVResourceMetadata@@@Z
    MCAPI std::string stringifyResourceMetadataGeneratedWith(class ResourceMetadata const &);
    // NOLINTEND

};
