#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/StackString.h"
#include "mc/deps/core/UnzipResult.h"
#include "mc/deps/core/ZipResult.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core::ZipUtils { class UnzipSettings; }
namespace Core::ZipUtils { class ZipProgress; }
namespace Core::ZipUtils { class ZipSettings; }
// clang-format on

namespace Core::ZipUtils {
    // NOLINTBEGIN
    // symbol: ?_zipEncodedPathToUTF8@ZipUtils@Core@@YA?AV?$PathBuffer@V?$StackString@D$0EAA@@Core@@@2@AEBVPath@2@@Z
    MCAPI class Core::PathBuffer<class Core::StackString<char, 1024>> _zipEncodedPathToUTF8(class Core::Path const &);

    // symbol: ?exists@ZipUtils@Core@@YA_NAEBVPath@2@0@Z
    MCAPI bool exists(class Core::Path const &, class Core::Path const &);

    // symbol: ?getTranslatedUnzipResult@ZipUtils@Core@@YA?AW4UnzipResult@12@H@Z
    MCAPI ::Core::ZipUtils::UnzipResult getTranslatedUnzipResult(int32_t);

    // symbol: ?getTranslatedZipResult@ZipUtils@Core@@YA?AW4ZipResult@12@H@Z
    MCAPI ::Core::ZipUtils::ZipResult getTranslatedZipResult(int32_t);

    // symbol: ?isFolderDepthValid@ZipUtils@Core@@YA?AVResult@2@AEBV?$PathBuffer@V?$StackString@D$0EAA@@Core@@@2@_K@Z
    MCAPI class Core::Result isFolderDepthValid(class Core::PathBuffer<class Core::StackString<char, 1024>> const &, uint64_t);

    // symbol: ?unzipInTransaction@ZipUtils@Core@@YA?AW4UnzipResult@12@AEBVPath@2@0AEAVZipProgress@12@_NAEBVUnzipSettings@12@@Z
    MCAPI ::Core::ZipUtils::UnzipResult unzipInTransaction(class Core::Path const &, class Core::Path const &, class Core::ZipUtils::ZipProgress &, bool, class Core::ZipUtils::UnzipSettings const &);

    // symbol: ?zip@ZipUtils@Core@@YA?AW4ZipResult@12@AEBVPath@2@0AEAVZipProgress@12@_NAEBVZipSettings@12@@Z
    MCAPI ::Core::ZipUtils::ZipResult zip(class Core::Path const &, class Core::Path const &, class Core::ZipUtils::ZipProgress &, bool, class Core::ZipUtils::ZipSettings const &);
    // NOLINTEND

};
