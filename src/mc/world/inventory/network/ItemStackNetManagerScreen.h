#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemStackNetManagerScreen {
public:
    // prevent constructor by default
    ItemStackNetManagerScreen& operator=(ItemStackNetManagerScreen const &) = delete;
    ItemStackNetManagerScreen(ItemStackNetManagerScreen const &) = delete;
    ItemStackNetManagerScreen() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0ItemStackNetManagerScreen@@QEAA@AEAVEntityRegistry@@@Z
    MCAPI ItemStackNetManagerScreen(class EntityRegistry &);

    // symbol: ?getEntity@ItemStackNetManagerScreen@@QEAAAEAVEntityContext@@XZ
    MCAPI class EntityContext & getEntity();

    // symbol: ?getEntity@ItemStackNetManagerScreen@@QEBAAEBVEntityContext@@XZ
    MCAPI class EntityContext const & getEntity() const;

    // NOLINTEND

};

