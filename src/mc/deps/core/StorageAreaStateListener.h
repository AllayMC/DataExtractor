#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/LevelStorageState.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
// clang-format on

namespace Core {

class StorageAreaStateListener {
public:
    // prevent constructor by default
    StorageAreaStateListener& operator=(StorageAreaStateListener const &) = delete;
    StorageAreaStateListener(StorageAreaStateListener const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?onExtendDiskSpace@StorageAreaStateListener@Core@@UEAAX_NAEAV?$weak_ptr@VFileStorageArea@Core@@@std@@_KV?$function@$$A6AXXZ@4@@Z
    virtual void onExtendDiskSpace(bool, std::weak_ptr<class Core::FileStorageArea> &, uint64, std::function<void (void)>);

    // symbol: ?onCriticalDiskError@StorageAreaStateListener@Core@@UEAAX_NAEBW4LevelStorageState@2@@Z
    MCVAPI void onCriticalDiskError(bool, ::Core::LevelStorageState const &);

    // symbol: ?onLowDiskSpace@StorageAreaStateListener@Core@@UEAAX_N@Z
    MCVAPI void onLowDiskSpace(bool);

    // symbol: ?onOutOfDiskSpace@StorageAreaStateListener@Core@@UEAAX_N@Z
    MCVAPI void onOutOfDiskSpace(bool);

    // symbol: ??1StorageAreaStateListener@Core@@UEAA@XZ
    MCVAPI ~StorageAreaStateListener();

    // symbol: ??0StorageAreaStateListener@Core@@QEAA@XZ
    MCAPI StorageAreaStateListener();

    // symbol: ?initListener@StorageAreaStateListener@Core@@QEAAXV?$shared_ptr@VFileStorageArea@Core@@@std@@@Z
    MCAPI void initListener(std::shared_ptr<class Core::FileStorageArea>);

    // NOLINTEND

};

};
