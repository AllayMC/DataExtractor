#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/GameType.h"
#include "mc/resources/PackManifest.h"

class WorldTemplatePackManifest : public ::PackManifest {
public:
    // prevent constructor by default
    WorldTemplatePackManifest& operator=(WorldTemplatePackManifest const &) = delete;
    WorldTemplatePackManifest(WorldTemplatePackManifest const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?clone@WorldTemplatePackManifest@@UEBA?AV?$unique_ptr@VPackManifest@@U?$default_delete@VPackManifest@@@std@@@std@@XZ
    virtual std::unique_ptr<class PackManifest> clone() const;

    // symbol: ??1WorldTemplatePackManifest@@UEAA@XZ
    MCVAPI ~WorldTemplatePackManifest();

    // symbol: ??0WorldTemplatePackManifest@@QEAA@XZ
    MCAPI WorldTemplatePackManifest();

    // symbol: ?getGameType@WorldTemplatePackManifest@@QEBA?AW4GameType@@XZ
    MCAPI ::GameType getGameType() const;

    // NOLINTEND

};

