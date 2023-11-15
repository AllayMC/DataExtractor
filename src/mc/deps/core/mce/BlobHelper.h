#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Blob; }
// clang-format on

namespace mce::BlobHelper {
    // NOLINTBEGIN
    // symbol: ?clone@BlobHelper@mce@@YA?AVBlob@2@AEBV32@@Z
    MCAPI class mce::Blob clone(class mce::Blob const &);

    // symbol: ?copySpanIntoBlob@BlobHelper@mce@@YAXAEAVBlob@2@V?$span@$$CBE$0?0@gsl@@@Z
    MCAPI void copySpanIntoBlob(class mce::Blob &, class gsl::span<uint8_t const>);

    // symbol: ?copyStringIntoBlob@BlobHelper@mce@@YAXAEAVBlob@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void copyStringIntoBlob(class mce::Blob &, std::string const &);
    // NOLINTEND

};
