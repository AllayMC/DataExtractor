#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorStatusProvider {
public:
};

class Actor : public ::ActorStatusProvider {
public:
    // Actor inner types define
    enum class InitializationMethod {
        Invalid = 0x0,
        Loaded = 0x1,
        Spawned = 0x2,
        Born = 0x3,
        Transformed = 0x4,
        Updated = 0x5,
        Event = 0x6,
        Legacy = 0x7,
    };

    // vptr 8
    uchar filler[1176]; // IDA isAffectedByWaterBottle
public:
    // symbol: ?getAABB@Actor@@QEBAAEBVAABB@@XZ
    MCAPI class AABB const& getAABB() const;
};

class Mob : public ::Actor {
public:
    // prevent constructor by default
    Mob& operator=(Mob const&);
    Mob(Mob const&);
    Mob();

public:
    // vIndex: 149, symbol: ?kill@Mob@@UEAAXXZ
    void kill();//this is a virtual function
};