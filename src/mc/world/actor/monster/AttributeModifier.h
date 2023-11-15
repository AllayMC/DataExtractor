#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AttributeModifierOperation.h"
#include "mc/enums/AttributeOperands.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class AttributeModifier {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isInstantaneous@AttributeModifier@@UEBA_NXZ
    virtual bool isInstantaneous() const;

    // symbol: ??1AttributeModifier@@UEAA@XZ
    MCVAPI ~AttributeModifier();

    // symbol: ??0AttributeModifier@@QEAA@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MW4AttributeModifierOperation@@W4AttributeOperands@@_N@Z
    MCAPI AttributeModifier(class mce::UUID, std::string const &, float, ::AttributeModifierOperation, ::AttributeOperands, bool);

    // symbol: ??0AttributeModifier@@QEAA@AEBV0@@Z
    MCAPI AttributeModifier(class AttributeModifier const &);

    // symbol: ??0AttributeModifier@@QEAA@XZ
    MCAPI AttributeModifier();

    // symbol: ??0AttributeModifier@@QEAA@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MHH_N@Z
    MCAPI AttributeModifier(class mce::UUID, std::string const &, float, int32_t, int32_t, bool);

    // symbol: ?getAmount@AttributeModifier@@QEBAMXZ
    MCAPI float getAmount() const;

    // symbol: ?getId@AttributeModifier@@QEBAAEBVUUID@mce@@XZ
    MCAPI class mce::UUID const & getId() const;

    // symbol: ?getName@AttributeModifier@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const & getName() const;

    // symbol: ?getOperand@AttributeModifier@@QEBAHXZ
    MCAPI int32_t getOperand() const;

    // symbol: ?getOperation@AttributeModifier@@QEBAHXZ
    MCAPI int32_t getOperation() const;

    // symbol: ?isSerializable@AttributeModifier@@QEBA_NXZ
    MCAPI bool isSerializable() const;

    // symbol: ??4AttributeModifier@@QEAAAEAV0@AEBV0@@Z
    MCAPI class AttributeModifier & operator=(class AttributeModifier const &);

    // symbol: ??8AttributeModifier@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class AttributeModifier const &) const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mInvalidUUID@AttributeModifier@@0VUUID@mce@@B
    MCAPI static class mce::UUID const mInvalidUUID;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $mInvalidUUID() { return mInvalidUUID; }

    // NOLINTEND

};

