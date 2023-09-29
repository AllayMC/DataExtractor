#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/TypedRuntimeId.h"
#include "mc/world/containers/ActorContainerType.h"

class ContainerWeakRef {
public:
    // prevent constructor by default
    ContainerWeakRef& operator=(ContainerWeakRef const &) = delete;
    ContainerWeakRef(ContainerWeakRef const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0ContainerWeakRef@@QEAA@XZ
    MCAPI ContainerWeakRef();

    // symbol: ??0ContainerWeakRef@@QEAA@AEBVBlockPos@@AEBV?$TypedRuntimeId@UContainerRuntimeIdTag@@I$0A@@@@Z
    MCAPI ContainerWeakRef(class BlockPos const &, class ContainerRuntimeId const &);

    // symbol: ??0ContainerWeakRef@@QEAA@AEBUActorUniqueID@@W4ActorContainerType@@AEBV?$TypedRuntimeId@UContainerRuntimeIdTag@@I$0A@@@@Z
    MCAPI ContainerWeakRef(struct ActorUniqueID const &, ::ActorContainerType, class ContainerRuntimeId const &);

    // symbol: ??BContainerWeakRef@@QEBA_NXZ
    MCAPI operator bool() const;

    // symbol: ??1ContainerWeakRef@@QEAA@XZ
    MCAPI ~ContainerWeakRef();

    // NOLINTEND

};

