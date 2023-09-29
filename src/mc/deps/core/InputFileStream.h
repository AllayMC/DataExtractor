#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/FileStream.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStream; }
// clang-format on

namespace Core {

class InputFileStream : public ::Core::FileStream {
public:
    // prevent constructor by default
    InputFileStream& operator=(InputFileStream const &) = delete;
    InputFileStream(InputFileStream const &) = delete;
    InputFileStream() = delete;

};

};
