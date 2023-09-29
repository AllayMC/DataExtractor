#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/ContainerValidationCaller.h"

class ContainerValidatorFactory {
public:
    // prevent constructor by default
    ContainerValidatorFactory& operator=(ContainerValidatorFactory const &) = delete;
    ContainerValidatorFactory(ContainerValidatorFactory const &) = delete;
    ContainerValidatorFactory() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?createContainerScreenValidator@ContainerValidatorFactory@@SA?AV?$unique_ptr@VContainerScreenValidatorBase@@U?$default_delete@VContainerScreenValidatorBase@@@std@@@std@@AEBVContainerScreenContext@@@Z
    MCAPI static std::unique_ptr<class ContainerScreenValidatorBase> createContainerScreenValidator(class ContainerScreenContext const &);

    // symbol: ?createContainerValidator@ContainerValidatorFactory@@SA?AV?$shared_ptr@$$CBVContainerValidationBase@@@std@@W4ContainerEnumName@@AEBVContainerScreenContext@@W4ContainerValidationCaller@@@Z
    MCAPI static std::shared_ptr<class ContainerValidationBase const> createContainerValidator(::ContainerEnumName, class ContainerScreenContext const &, ::ContainerValidationCaller);

    // symbol: ?getBackingContainer@ContainerValidatorFactory@@SAPEAVContainer@@W4ContainerEnumName@@AEBVContainerScreenContext@@@Z
    MCAPI static class Container * getBackingContainer(::ContainerEnumName, class ContainerScreenContext const &);

    // NOLINTEND

};

