#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/SimpleContainer.h"
#include "mc/world/containers/ContainerType.h"

class SimplePlayerContainer : public ::SimpleContainer {
public:
    // prevent constructor by default
    SimplePlayerContainer& operator=(SimplePlayerContainer const &) = delete;
    SimplePlayerContainer(SimplePlayerContainer const &) = delete;
    SimplePlayerContainer() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 10, symbol: ?setItem@SimplePlayerContainer@@UEAAXHAEBVItemStack@@@Z
    virtual void setItem(int, class ItemStack const &);

    // vIndex: 25, symbol: __unk_vfn_25
    virtual void __unk_vfn_25();

    // vIndex: 26, symbol: __unk_vfn_26
    virtual void __unk_vfn_26();

    // symbol: ??0SimplePlayerContainer@@QEAA@AEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NHW4ContainerType@@@Z
    MCAPI SimplePlayerContainer(class Player &, std::string const &, bool, int, ::ContainerType);

    // NOLINTEND

};

