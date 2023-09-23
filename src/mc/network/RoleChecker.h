#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/edu/Role.h"

class RoleChecker {
public:
    // prevent constructor by default
    RoleChecker& operator=(RoleChecker const &) = delete;
    RoleChecker(RoleChecker const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0RoleChecker@@QEAA@XZ
    MCAPI RoleChecker();

    // symbol: ?checkRole@RoleChecker@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6AXW4Role@edu@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z@3@@Z
    MCAPI void checkRole(std::string const &, std::function<void (::edu::Role, std::string const &, std::string const &)>);

    // symbol: ?lookupInProgress@RoleChecker@@QEBA_NXZ
    MCAPI bool lookupInProgress() const;

    // symbol: ??1RoleChecker@@QEAA@XZ
    MCAPI ~RoleChecker();

    // NOLINTEND

};

