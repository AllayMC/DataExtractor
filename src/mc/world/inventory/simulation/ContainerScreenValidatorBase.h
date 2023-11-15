#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"

class ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    ContainerScreenValidatorBase& operator=(ContainerScreenValidatorBase const &) = delete;
    ContainerScreenValidatorBase(ContainerScreenValidatorBase const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?postCommitItemRemoved@ContainerScreenValidatorBase@@UEAA?AV?$shared_ptr@VContainerValidationCommitObject@@@std@@W4ContainerEnumName@@HAEBVItemStack@@@Z
    virtual std::shared_ptr<class ContainerValidationCommitObject> postCommitItemRemoved(::ContainerEnumName, int32_t, class ItemStack const &);

    // vIndex: 2, symbol: ?isCraftingImplemented@ContainerScreenValidatorBase@@UEAA_NXZ
    virtual bool isCraftingImplemented();

    // vIndex: 3, symbol: ?getCraftResult@ContainerScreenValidatorBase@@UEAA?AUContainerValidationCraftResult@@AEBVContainerScreenContext@@AEAVContainerScreenValidation@@V?$unique_ptr@UContainerValidationCraftInputs@@U?$default_delete@UContainerValidationCraftInputs@@@std@@@std@@@Z
    virtual struct ContainerValidationCraftResult getCraftResult(class ContainerScreenContext const &, class ContainerScreenValidation &, std::unique_ptr<struct ContainerValidationCraftInputs>);

    // symbol: ??1ContainerScreenValidatorBase@@UEAA@XZ
    MCVAPI ~ContainerScreenValidatorBase();

    // symbol: ??0ContainerScreenValidatorBase@@QEAA@XZ
    MCAPI ContainerScreenValidatorBase();

    // symbol: ?isValidContainerForScreen@ContainerScreenValidatorBase@@QEBA_NW4ContainerEnumName@@@Z
    MCAPI bool isValidContainerForScreen(::ContainerEnumName) const;

    // NOLINTEND

};

