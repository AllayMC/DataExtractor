#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Randomize {
public:
    // prevent constructor by default
    Randomize& operator=(Randomize const &) = delete;
    Randomize(Randomize const &) = delete;
    Randomize() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0Randomize@@QEAA@AEAVRandom@@@Z
    MCAPI Randomize(class Random &);

    // symbol: ?chance@Randomize@@QEBA_NHH@Z
    MCAPI bool chance(int, int) const;

    // symbol: ?chanceAllButOneIn@Randomize@@QEBA_NH@Z
    MCAPI bool chanceAllButOneIn(int) const;

    // symbol: ?chanceFloatGreaterThan@Randomize@@QEBA_NM@Z
    MCAPI bool chanceFloatGreaterThan(float) const;

    // symbol: ?chanceFloatLessOrEqual@Randomize@@QEBA_NM@Z
    MCAPI bool chanceFloatLessOrEqual(float) const;

    // symbol: ?chanceFloatLessThan@Randomize@@QEBA_NM@Z
    MCAPI bool chanceFloatLessThan(float) const;

    // symbol: ?chanceOneIn@Randomize@@QEBA_NH@Z
    MCAPI bool chanceOneIn(int) const;

    // symbol: ?nextFloat@Randomize@@QEBAMXZ
    MCAPI float nextFloat() const;

    // symbol: ?nextIntInclusive@Randomize@@QEBAHHH@Z
    MCAPI int nextIntInclusive(int, int) const;

    // symbol: ??1Randomize@@QEAA@XZ
    MCAPI ~Randomize();

    // symbol: ?ChanceFloatGreaterThan_MinExcessiveImprobability@Randomize@@2MB
    MCAPI static float const ChanceFloatGreaterThan_MinExcessiveImprobability;

    // NOLINTEND

};

