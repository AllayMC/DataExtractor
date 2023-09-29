#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/ThreadLocalObject.h"

class Random {
public:
    // prevent constructor by default
    Random& operator=(Random const &) = delete;
    Random(Random const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ?consumeCount@Random@@UEAAXI@Z
    MCVAPI void consumeCount(uint);

    // symbol: ?fork@Random@@UEAA?AV?$unique_ptr@VIRandom@@U?$default_delete@VIRandom@@@std@@@std@@XZ
    MCVAPI std::unique_ptr<class IRandom> fork();

    // symbol: ?nextBoolean@Random@@UEAA_NXZ
    MCVAPI bool nextBoolean();

    // symbol: ?nextDouble@Random@@UEAANXZ
    MCVAPI double nextDouble();

    // symbol: ?nextFloat@Random@@UEAAMXZ
    MCVAPI float nextFloat();

    // symbol: ?nextGaussianDouble@Random@@UEAANXZ
    MCVAPI double nextGaussianDouble();

    // symbol: ?nextInt@Random@@UEAAHH@Z
    MCVAPI int nextInt(int);

    // symbol: ?nextInt@Random@@UEAAHXZ
    MCVAPI int nextInt();

    // symbol: ?nextLong@Random@@UEAA_JXZ
    MCVAPI int64 nextLong();

    // symbol: ??1Random@@UEAA@XZ
    MCVAPI ~Random();

    // symbol: ??0Random@@QEAA@XZ
    MCAPI Random();

    // symbol: ?nextFloat@Random@@QEAAMMM@Z
    MCAPI float nextFloat(float, float);

    // symbol: ?nextGaussianFloat@Random@@QEAAMXZ
    MCAPI float nextGaussianFloat();

    // symbol: ?nextGaussianInt@Random@@QEAAHH@Z
    MCAPI int nextGaussianInt(int);

    // symbol: ?nextInt@Random@@QEAAHHH@Z
    MCAPI int nextInt(int, int);

    // symbol: ?nextIntInclusive@Random@@QEAAHHH@Z
    MCAPI int nextIntInclusive(int, int);

    // symbol: ?getThreadLocal@Random@@SAAEAV1@XZ
    MCAPI static class Random & getThreadLocal();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mThreadLocalRandom@Random@@0V?$ThreadLocalObject@VRandom@@V?$allocator@VRandom@@@std@@@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class Random> mThreadLocalRandom;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $mThreadLocalRandom() { return mThreadLocalRandom; }

    // NOLINTEND

};

