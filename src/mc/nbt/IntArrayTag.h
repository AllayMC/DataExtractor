#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"

class IntArrayTag : public ::Tag {
public:
    // prevent constructor by default
    IntArrayTag& operator=(IntArrayTag const &) = delete;
    IntArrayTag(IntArrayTag const &) = delete;
    IntArrayTag() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?write@IntArrayTag@@UEBAXAEAVIDataOutput@@@Z
    virtual void write(class IDataOutput &) const;

    // vIndex: 3, symbol: ?load@IntArrayTag@@UEAAXAEAVIDataInput@@@Z
    virtual void load(class IDataInput &);

    // vIndex: 4, symbol: ?toString@IntArrayTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string toString() const;

    // vIndex: 5, symbol: ?getId@IntArrayTag@@UEBA?AW4Type@Tag@@XZ
    virtual ::Tag::Type getId() const;

    // vIndex: 6, symbol: ?equals@IntArrayTag@@UEBA_NAEBVTag@@@Z
    virtual bool equals(class Tag const &) const;

    // vIndex: 9, symbol: ?copy@IntArrayTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class Tag> copy() const;

    // vIndex: 10, symbol: ?hash@IntArrayTag@@UEBA_KXZ
    virtual uint64 hash() const;

    // NOLINTEND

};

