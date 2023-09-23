#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SavedDataStorage {
public:
    // prevent constructor by default
    SavedDataStorage& operator=(SavedDataStorage const &) = delete;
    SavedDataStorage(SavedDataStorage const &) = delete;
    SavedDataStorage() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1SavedDataStorage@@UEAA@XZ
    MCVAPI ~SavedDataStorage();

    // symbol: ?loadAndSet@SavedDataStorage@@QEAA_NAEAVSavedData@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool loadAndSet(class SavedData &, std::string const &);

    // symbol: ?save@SavedDataStorage@@QEAAXXZ
    MCAPI void save();

    // symbol: ?set@SavedDataStorage@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVSavedData@@@Z
    MCAPI void set(std::string const &, class SavedData &);

    // NOLINTEND

};

