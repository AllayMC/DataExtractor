#pragma once

#include <span>
#include <string>

#include "ll/base/Macro.h"
#include "ll/base/StdInt.h"

namespace ll::utils::win_utils {

LLNDAPI std::span<uchar> getImageRangeSpan();

} // namespace ll::utils::win_utils
