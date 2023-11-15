#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/SidePoweredComponent.h"

class ComparatorCapacitor : public ::SidePoweredComponent {
public:
    // ComparatorCapacitor inner types define
    enum class Mode {};
    
public:
    // prevent constructor by default
    ComparatorCapacitor& operator=(ComparatorCapacitor const &) = delete;
    ComparatorCapacitor(ComparatorCapacitor const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 11, symbol: ?addSource@ComparatorCapacitor@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int32_t &, bool &);

    // vIndex: 14, symbol: ?evaluate@ComparatorCapacitor@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);

    // vIndex: 15, symbol: ?cacheValues@ComparatorCapacitor@@UEAAXAEAVCircuitSystem@@AEBVBlockPos@@@Z
    virtual void cacheValues(class CircuitSystem &, class BlockPos const &);

    // vIndex: 16, symbol: ?updateDependencies@ComparatorCapacitor@@UEAAXAEAVCircuitSceneGraph@@AEBVBlockPos@@@Z
    virtual void updateDependencies(class CircuitSceneGraph &, class BlockPos const &);

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 23, symbol: ?getCircuitComponentType@ComparatorCapacitor@@UEBA?AW4CircuitComponentType@@XZ
    virtual ::CircuitComponentType getCircuitComponentType() const;

    // symbol: ??0ComparatorCapacitor@@QEAA@XZ
    MCAPI ComparatorCapacitor();

    // symbol: ?clearAnalogStrength@ComparatorCapacitor@@QEAAXE@Z
    MCAPI void clearAnalogStrength(uint8_t);

    // symbol: ?getOldStrength@ComparatorCapacitor@@QEAAHXZ
    MCAPI int32_t getOldStrength();

    // symbol: ?isSubtractMode@ComparatorCapacitor@@QEAA_NXZ
    MCAPI bool isSubtractMode();

    // symbol: ?setAnalogStrength@ComparatorCapacitor@@QEAAXHE@Z
    MCAPI void setAnalogStrength(int32_t, uint8_t);

    // symbol: ?setMode@ComparatorCapacitor@@QEAAXW4Mode@1@@Z
    MCAPI void setMode(::ComparatorCapacitor::Mode);

    // NOLINTEND

};

