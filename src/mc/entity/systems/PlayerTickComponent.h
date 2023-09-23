#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerTickComponent {
public:
    // prevent constructor by default
    PlayerTickComponent& operator=(PlayerTickComponent const &) = delete;
    PlayerTickComponent(PlayerTickComponent const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0PlayerTickComponent@@QEAA@XZ
    MCAPI PlayerTickComponent();

    // symbol: ??0PlayerTickComponent@@QEAA@V?$unique_ptr@UIPlayerTickPolicy@@U?$default_delete@UIPlayerTickPolicy@@@std@@@std@@@Z
    MCAPI PlayerTickComponent(std::unique_ptr<struct IPlayerTickPolicy>);

    // symbol: ??0PlayerTickComponent@@QEAA@$$QEAU0@@Z
    MCAPI PlayerTickComponent(struct PlayerTickComponent &&);

    // symbol: ??4PlayerTickComponent@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct PlayerTickComponent & operator=(struct PlayerTickComponent &&);

    // symbol: ??1PlayerTickComponent@@QEAA@XZ
    MCAPI ~PlayerTickComponent();

    // NOLINTEND

};

