#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AsynchronousIPResolver {
public:
    // prevent constructor by default
    AsynchronousIPResolver& operator=(AsynchronousIPResolver const &) = delete;
    AsynchronousIPResolver(AsynchronousIPResolver const &) = delete;
    AsynchronousIPResolver() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0AsynchronousIPResolver@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI AsynchronousIPResolver(std::string);

    // symbol: ?getIp@AsynchronousIPResolver@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getIp() const;

    // symbol: ?getOriginalUrl@AsynchronousIPResolver@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const & getOriginalUrl() const;

    // symbol: ?isDone@AsynchronousIPResolver@@QEBA_NXZ
    MCAPI bool isDone() const;

    // symbol: ??1AsynchronousIPResolver@@QEAA@XZ
    MCAPI ~AsynchronousIPResolver();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_resolve@AsynchronousIPResolver@@AEAAXXZ
    MCAPI void _resolve();

    // NOLINTEND

};

