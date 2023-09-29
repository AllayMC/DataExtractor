#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/RedefinitionMode.h"

class Attribute {
public:
    // prevent constructor by default
    Attribute& operator=(Attribute const &) = delete;
    Attribute(Attribute const &) = delete;
    Attribute() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0Attribute@@QEAA@AEBVHashedString@@W4RedefinitionMode@@_N@Z
    MCAPI Attribute(class HashedString const &, ::RedefinitionMode, bool);

    // symbol: ?getName@Attribute@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const & getName() const;

    // symbol: ?getRedefinitionMode@Attribute@@QEBA?AW4RedefinitionMode@@XZ
    MCAPI ::RedefinitionMode getRedefinitionMode() const;

    // symbol: ?getByName@Attribute@@SAAEAV1@AEBVHashedString@@@Z
    MCAPI static class Attribute & getByName(class HashedString const &);

    // NOLINTEND

};

