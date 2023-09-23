#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyPackIdVersion {
public:
    // prevent constructor by default
    LegacyPackIdVersion& operator=(LegacyPackIdVersion const &) = delete;
    LegacyPackIdVersion(LegacyPackIdVersion const &) = delete;
    LegacyPackIdVersion() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0LegacyPackIdVersion@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI LegacyPackIdVersion(std::string const &, std::string const &);

    // symbol: ?getUpgradedPackId@LegacyPackIdVersion@@QEBA?AUPackIdVersion@@XZ
    MCAPI struct PackIdVersion getUpgradedPackId() const;

    // symbol: ??1LegacyPackIdVersion@@QEAA@XZ
    MCAPI ~LegacyPackIdVersion();

    // NOLINTEND

};

