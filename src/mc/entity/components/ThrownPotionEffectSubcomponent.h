#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/SplashPotionEffectSubcomponent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ThrownPotionEffectSubcomponent : public ::SplashPotionEffectSubcomponent {
public:
    // prevent constructor by default
    ThrownPotionEffectSubcomponent& operator=(ThrownPotionEffectSubcomponent const &) = delete;
    ThrownPotionEffectSubcomponent(ThrownPotionEffectSubcomponent const &) = delete;
    ThrownPotionEffectSubcomponent() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?writetoJSON@ThrownPotionEffectSubcomponent@@UEBAXAEAVValue@Json@@@Z
    virtual void writetoJSON(class Json::Value &) const;

    // vIndex: 3, symbol: ?doOnHitEffect@ThrownPotionEffectSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);

    // vIndex: 4, symbol: ?getName@ThrownPotionEffectSubcomponent@@UEAAPEBDXZ
    virtual char const * getName();

    // NOLINTEND

};

