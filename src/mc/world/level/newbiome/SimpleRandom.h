#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SimpleRandom {
public:
    // prevent constructor by default
    SimpleRandom& operator=(SimpleRandom const &) = delete;
    SimpleRandom(SimpleRandom const &) = delete;
    SimpleRandom() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?consumeCount@SimpleRandom@@UEAAXI@Z
    MCVAPI void consumeCount(uint32_t);

    // symbol: ?fork@SimpleRandom@@UEAA?AV?$unique_ptr@VIRandom@@U?$default_delete@VIRandom@@@std@@@std@@XZ
    MCVAPI std::unique_ptr<class IRandom> fork();

    // symbol: ?forkPositional@SimpleRandom@@UEAA?AV?$unique_ptr@VIPositionalRandomFactory@@U?$default_delete@VIPositionalRandomFactory@@@std@@@std@@XZ
    MCVAPI std::unique_ptr<class IPositionalRandomFactory> forkPositional();

    // symbol: ?nextBoolean@SimpleRandom@@UEAA_NXZ
    MCVAPI bool nextBoolean();

    // symbol: ?nextDouble@SimpleRandom@@UEAANXZ
    MCVAPI double nextDouble();

    // symbol: ?nextFloat@SimpleRandom@@UEAAMXZ
    MCVAPI float nextFloat();

    // symbol: ?nextGaussianDouble@SimpleRandom@@UEAANXZ
    MCVAPI double nextGaussianDouble();

    // symbol: ?nextInt@SimpleRandom@@UEAAHXZ
    MCVAPI int32_t nextInt();

    // symbol: ?nextInt@SimpleRandom@@UEAAHH@Z
    MCVAPI int32_t nextInt(int32_t);

    // symbol: ?nextLong@SimpleRandom@@UEAA_JXZ
    MCVAPI int64_t nextLong();

    // symbol: ?seed128@SimpleRandom@@UEBA?AUSeed128Bit@@XZ
    MCVAPI struct Seed128Bit seed128() const;

    // symbol: ?seed64@SimpleRandom@@UEBA_JXZ
    MCVAPI int64_t seed64() const;

    // symbol: ?setSeed@SimpleRandom@@UEAAXUSeed128Bit@@@Z
    MCVAPI void setSeed(struct Seed128Bit);

    // symbol: ?setSeed@SimpleRandom@@UEAAX_J@Z
    MCVAPI void setSeed(int64_t);

    // symbol: ??1SimpleRandom@@UEAA@XZ
    MCVAPI ~SimpleRandom();

    // NOLINTEND

};

