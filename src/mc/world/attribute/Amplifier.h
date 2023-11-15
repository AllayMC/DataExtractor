#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Amplifier {
public:
    // prevent constructor by default
    Amplifier& operator=(Amplifier const &) = delete;
    Amplifier(Amplifier const &) = delete;
    Amplifier() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getAmount@Amplifier@@UEBAMHM@Z
    virtual float getAmount(int32_t, float) const;

    // vIndex: 2, symbol: ?shouldBuff@Amplifier@@UEBA_NHH@Z
    virtual bool shouldBuff(int32_t, int32_t) const;

    // vIndex: 3, symbol: ?getTickInterval@Amplifier@@UEBAHH@Z
    virtual int32_t getTickInterval(int32_t) const;

    // NOLINTEND

};

