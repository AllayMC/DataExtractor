#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/Amplifier.h"

class MultiplyValueAmplifier : public ::Amplifier {
public:
    // prevent constructor by default
    MultiplyValueAmplifier& operator=(MultiplyValueAmplifier const &) = delete;
    MultiplyValueAmplifier(MultiplyValueAmplifier const &) = delete;
    MultiplyValueAmplifier() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getAmount@MultiplyValueAmplifier@@UEBAMHM@Z
    virtual float getAmount(int32_t, float) const;

    // NOLINTEND

};

