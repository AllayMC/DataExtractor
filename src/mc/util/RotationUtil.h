#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Rotation.h"

namespace RotationUtil {
    // NOLINTBEGIN
    // symbol: ?getRandomRotation@RotationUtil@@YA?AW4Rotation@@AEAVRandom@@@Z
    MCAPI ::Rotation getRandomRotation(class Random &);

    // symbol: ?getRotated@RotationUtil@@YA?AW4Rotation@@W42@0@Z
    MCAPI ::Rotation getRotated(::Rotation, ::Rotation);

    // symbol: ?getShuffledRotations@RotationUtil@@YA?AV?$vector@W4Rotation@@V?$allocator@W4Rotation@@@std@@@std@@AEAVRandom@@@Z
    MCAPI std::vector<::Rotation> getShuffledRotations(class Random &);

    // symbol: ?rotate@RotationUtil@@YA?AVBlockPos@@AEBV2@W4Rotation@@@Z
    MCAPI class BlockPos rotate(class BlockPos const &, ::Rotation);

    // symbol: ?rotate@RotationUtil@@YAEW4Rotation@@E@Z
    MCAPI uint8_t rotate(::Rotation, uint8_t);
    // NOLINTEND

};
