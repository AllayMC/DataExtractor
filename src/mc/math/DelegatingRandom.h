#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/math/IRandom.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

namespace NoiseUtils {

class DelegatingRandom : public ::IRandom {
public:
    // prevent constructor by default
    DelegatingRandom& operator=(DelegatingRandom const &) = delete;
    DelegatingRandom(DelegatingRandom const &) = delete;
    DelegatingRandom() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?consumeCount@DelegatingRandom@NoiseUtils@@UEAAXI@Z
    MCVAPI void consumeCount(uint32_t);

    // symbol: ?fork@DelegatingRandom@NoiseUtils@@UEAA?AV?$unique_ptr@VIRandom@@U?$default_delete@VIRandom@@@std@@@std@@XZ
    MCVAPI std::unique_ptr<class IRandom> fork();

    // symbol: ?nextBoolean@DelegatingRandom@NoiseUtils@@UEAA_NXZ
    MCVAPI bool nextBoolean();

    // symbol: ?nextDouble@DelegatingRandom@NoiseUtils@@UEAANXZ
    MCVAPI double nextDouble();

    // symbol: ?nextGaussianDouble@DelegatingRandom@NoiseUtils@@UEAANXZ
    MCVAPI double nextGaussianDouble();

    // symbol: ?nextInt@DelegatingRandom@NoiseUtils@@UEAAHXZ
    MCVAPI int32_t nextInt();

    // symbol: ?nextInt@DelegatingRandom@NoiseUtils@@UEAAHH@Z
    MCVAPI int32_t nextInt(int32_t);

    // symbol: ?nextLong@DelegatingRandom@NoiseUtils@@UEAA_JXZ
    MCVAPI int64_t nextLong();

    // NOLINTEND

};

};
