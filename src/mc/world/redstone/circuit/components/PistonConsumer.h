#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/ConsumerComponent.h"

class PistonConsumer : public ::ConsumerComponent {
public:
    // prevent constructor by default
    PistonConsumer& operator=(PistonConsumer const &) = delete;
    PistonConsumer(PistonConsumer const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 6, symbol: ?canConsumePowerAnyDirection@PistonConsumer@@UEBA_NXZ
    virtual bool canConsumePowerAnyDirection() const;

    // vIndex: 11, symbol: ?addSource@PistonConsumer@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int32_t &, bool &);

    // vIndex: 12, symbol: ?allowConnection@PistonConsumer@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 23, symbol: ?getCircuitComponentType@PistonConsumer@@UEBA?AW4CircuitComponentType@@XZ
    virtual ::CircuitComponentType getCircuitComponentType() const;

    // symbol: ??0PistonConsumer@@QEAA@XZ
    MCAPI PistonConsumer();

    // symbol: ?setBlockPowerFace@PistonConsumer@@QEAAXE@Z
    MCAPI void setBlockPowerFace(uint8_t);

    // NOLINTEND

};

