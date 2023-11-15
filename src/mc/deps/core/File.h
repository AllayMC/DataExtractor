#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/FileBufferingMode.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/StackString.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileOpenMode; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class File {
public:
    // prevent constructor by default
    File& operator=(File const &) = delete;
    File(File const &) = delete;
    File() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?close@File@Core@@QEAA?AVResult@2@XZ
    MCAPI class Core::Result close();

    // symbol: ?open@File@Core@@QEAA?AVResult@2@AEBVPath@2@VFileOpenMode@2@W4FileBufferingMode@2@@Z
    MCAPI class Core::Result open(class Core::Path const &, class Core::FileOpenMode, ::Core::FileBufferingMode);

    // symbol: ?write@File@Core@@QEAA?AVResult@2@PEBX_K@Z
    MCAPI class Core::Result write(void const *, uint64_t);

    // symbol: ??1File@Core@@QEAA@XZ
    MCAPI ~File();

    // symbol: ?cleanPath@File@Core@@SA?AV?$PathBuffer@V?$StackString@D$0EAA@@Core@@@2@AEBVPath@2@@Z
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> cleanPath(class Core::Path const &);

    // symbol: ?cleanPathSeparators@File@Core@@SA?AV?$PathBuffer@V?$StackString@D$0EAA@@Core@@@2@AEBVPath@2@@Z
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> cleanPathSeparators(class Core::Path const &);

    // symbol: ?writeCreateOrAppendFileData@File@Core@@SA?AVResult@2@AEBVPath@2@_K1AEBV?$vector@EV?$allocator@E@std@@@std@@@Z
    MCAPI static class Core::Result writeCreateOrAppendFileData(class Core::Path const &, uint64_t, uint64_t, std::vector<uint8_t> const &);

    // symbol: ?writeCreateOrAppendFileData@File@Core@@SA?AVResult@2@AEBVPath@2@_K1PEBE@Z
    MCAPI static class Core::Result writeCreateOrAppendFileData(class Core::Path const &, uint64_t, uint64_t, uint8_t const *);

    // NOLINTEND

};

};
