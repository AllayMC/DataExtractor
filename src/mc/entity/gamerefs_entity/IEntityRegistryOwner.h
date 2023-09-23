#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class IEntityRegistryOwner : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IEntityRegistryOwner& operator=(IEntityRegistryOwner const &) = delete;
    IEntityRegistryOwner(IEntityRegistryOwner const &) = delete;
    IEntityRegistryOwner() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1IEntityRegistryOwner@@MEAA@XZ
    MCVAPI ~IEntityRegistryOwner();

    // NOLINTEND

};

