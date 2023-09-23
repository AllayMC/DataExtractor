#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/LevelStorageState.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Core { class StorageAreaStateListener; }
// clang-format on

namespace Core {

class StorageAreaState {
public:
    // prevent constructor by default
    StorageAreaState& operator=(StorageAreaState const &) = delete;
    StorageAreaState(StorageAreaState const &) = delete;
    StorageAreaState() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0StorageAreaState@Core@@QEAA@VPath@1@@Z
    MCAPI StorageAreaState(class Core::Path);

    // symbol: ?addListener@StorageAreaState@Core@@QEAAXPEAVStorageAreaStateListener@2@@Z
    MCAPI void addListener(class Core::StorageAreaStateListener *);

    // symbol: ?checkUserStorage@StorageAreaState@Core@@QEAAXAEAV?$weak_ptr@VFileStorageArea@Core@@@std@@_K11@Z
    MCAPI void checkUserStorage(std::weak_ptr<class Core::FileStorageArea> &, uint64, uint64, uint64);

    // symbol: ?isCriticalDiskError@StorageAreaState@Core@@QEBA_NXZ
    MCAPI bool isCriticalDiskError() const;

    // symbol: ?isOutOfDiskSpaceError@StorageAreaState@Core@@QEBA_NXZ
    MCAPI bool isOutOfDiskSpaceError() const;

    // symbol: ?notifyCriticalDiskError@StorageAreaState@Core@@QEAAXAEBW4LevelStorageState@2@@Z
    MCAPI void notifyCriticalDiskError(::Core::LevelStorageState const &);

    // symbol: ?removeListener@StorageAreaState@Core@@QEAAXPEAVStorageAreaStateListener@2@@Z
    MCAPI void removeListener(class Core::StorageAreaStateListener *);

    // symbol: ??1StorageAreaState@Core@@QEAA@XZ
    MCAPI ~StorageAreaState();

    // NOLINTEND

};

};
