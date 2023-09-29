#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AppConfigsFactory {
public:
    // prevent constructor by default
    AppConfigsFactory& operator=(AppConfigsFactory const &) = delete;
    AppConfigsFactory(AppConfigsFactory const &) = delete;
    AppConfigsFactory() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?createAppConfigs@AppConfigsFactory@@SA?AV?$unique_ptr@VAppConfigs@@U?$default_delete@VAppConfigs@@@std@@@std@@XZ
    MCAPI static std::unique_ptr<class AppConfigs> createAppConfigs();

    // NOLINTEND

};

