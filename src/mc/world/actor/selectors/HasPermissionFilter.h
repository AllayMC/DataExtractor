#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HasPermissionFilter {
public:
    // prevent constructor by default
    HasPermissionFilter& operator=(HasPermissionFilter const &) = delete;
    HasPermissionFilter(HasPermissionFilter const &) = delete;
    HasPermissionFilter() = delete;

};

