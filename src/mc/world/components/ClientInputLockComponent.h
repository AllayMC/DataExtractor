#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ClientInputLockCategory.h"
#include "mc/enums/ClientInputLockType.h"

struct ClientInputLockComponent {
public:
    // prevent constructor by default
    ClientInputLockComponent& operator=(ClientInputLockComponent const &) = delete;
    ClientInputLockComponent(ClientInputLockComponent const &) = delete;
    ClientInputLockComponent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?hasAnyLock@ClientInputLockComponent@@QEBA_NXZ
    MCAPI bool hasAnyLock() const;

    // symbol: ?hasLockCategory@ClientInputLockComponent@@QEBA_NW4ClientInputLockCategory@@@Z
    MCAPI bool hasLockCategory(::ClientInputLockCategory) const;

    // symbol: ?hasLockType@ClientInputLockComponent@@QEBA_NW4ClientInputLockType@@@Z
    MCAPI bool hasLockType(::ClientInputLockType) const;

    // symbol: ?serialize@ClientInputLockComponent@@QEBAIXZ
    MCAPI uint32_t serialize() const;

    // symbol: ?setLockCategory@ClientInputLockComponent@@QEAAXW4ClientInputLockCategory@@_N@Z
    MCAPI void setLockCategory(::ClientInputLockCategory, bool);

    // NOLINTEND

};

