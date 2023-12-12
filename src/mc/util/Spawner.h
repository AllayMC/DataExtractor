#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Spawner {
public:
    // prevent constructor by default
    Spawner& operator=(Spawner const&);
    Spawner(Spawner const&);
    Spawner();

public:
    // NOLINTBEGIN
    // symbol: ??0Spawner@@QEAA@AEAVLevel@@@Z
    MCAPI explicit Spawner(class Level&);

    // symbol:
    // ?spawnMob@Spawner@@QEAAPEAVMob@@AEAVBlockSource@@AEBUActorDefinitionIdentifier@@PEAVActor@@AEBVVec3@@_N44@Z
    MCAPI class Mob* spawnMob(
        class BlockSource& blockSource,
        struct ActorDefinitionIdentifier const& id,
        class Actor* spawner,
        class Vec3 const& pos,
        bool                                    naturalSpawn = false,
        bool                                    surface = true,
        bool                                    fromSpawner = false
    );
    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?SPAWN_RING_OFFSETS@Spawner@@0V?$unordered_set@VChunkPos@@U?$hash@VChunkPos@@@std@@U?$equal_to@VChunkPos@@@3@V?$allocator@VChunkPos@@@3@@std@@B
    MCAPI static std::unordered_set<class ChunkPos> const SPAWN_RING_OFFSETS;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $SPAWN_RING_OFFSETS() { return SPAWN_RING_OFFSETS; }

    // NOLINTEND
};
