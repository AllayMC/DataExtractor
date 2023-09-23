#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace mce { class UUID; }
// clang-format on

class IWorldTemplateManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IWorldTemplateManager& operator=(IWorldTemplateManager const &) = delete;
    IWorldTemplateManager(IWorldTemplateManager const &) = delete;
    IWorldTemplateManager() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?findInstalledWorldTemplateByUUID@WorldTemplateManager@@UEBAPEBUWorldTemplateInfo@@AEBV?$vector@VUUID@mce@@V?$allocator@VUUID@mce@@@std@@@std@@@Z
    virtual struct WorldTemplateInfo const * findInstalledWorldTemplateByUUID(std::vector<class mce::UUID> const &) const = 0;

    // symbol: ??1IWorldTemplateManager@@UEAA@XZ
    MCVAPI ~IWorldTemplateManager();

    // NOLINTEND

};

