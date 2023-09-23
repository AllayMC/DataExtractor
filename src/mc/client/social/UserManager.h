#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class UserManager {
public:
    // prevent constructor by default
    UserManager& operator=(UserManager const &) = delete;
    UserManager(UserManager const &) = delete;
    UserManager() = delete;

};

};
