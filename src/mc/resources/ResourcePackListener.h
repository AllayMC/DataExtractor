#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourcePackListener {
public:
    // prevent constructor by default
    ResourcePackListener& operator=(ResourcePackListener const &) = delete;
    ResourcePackListener(ResourcePackListener const &) = delete;
    ResourcePackListener() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?onBaseGamePackDownloadComplete@ResourcePackListener@@UEAAXXZ
    MCVAPI void onBaseGamePackDownloadComplete();

    // symbol: ?onFullPackStackInvalid@ResourcePackListener@@UEAAXXZ
    MCVAPI void onFullPackStackInvalid();

    // symbol: ?onLanguageSubpacksChanged@ResourcePackListener@@UEAAXXZ
    MCVAPI void onLanguageSubpacksChanged();

    // symbol: ?onResourceManagerDestroyed@ResourcePackListener@@UEAAXAEAVResourcePackManager@@@Z
    MCVAPI void onResourceManagerDestroyed(class ResourcePackManager &);

    // symbol: ??1ResourcePackListener@@UEAA@XZ
    MCVAPI ~ResourcePackListener();

    // NOLINTEND

};

