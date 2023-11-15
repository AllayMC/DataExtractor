#pragma once

#include <span>
#include <string>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

namespace ll::utils::win_utils {

LLNDAPI std::span<uchar> getImageRangeSpan();

} // namespace ll::utils::win_utils
