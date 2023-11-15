#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/Amplifier.h"

class ShiftedDurationAmplifier : public ::Amplifier {
public:
    // prevent constructor by default
    ShiftedDurationAmplifier& operator=(ShiftedDurationAmplifier const &) = delete;
    ShiftedDurationAmplifier(ShiftedDurationAmplifier const &) = delete;
    ShiftedDurationAmplifier() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?shouldBuff@ShiftedDurationAmplifier@@UEBA_NHH@Z
    virtual bool shouldBuff(int32_t, int32_t) const;

    // vIndex: 3, symbol: ?getTickInterval@ShiftedDurationAmplifier@@UEBAHH@Z
    virtual int32_t getTickInterval(int32_t) const;

    // NOLINTEND

};

