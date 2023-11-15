#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DespawnComponent {
public:
    // DespawnComponent inner types declare
    // clang-format off
    class IWorldAccessor;
    class WorldAccessor;
    // clang-format on
    
    // DespawnComponent inner types define
    class IWorldAccessor {
    public:
        // prevent constructor by default
        IWorldAccessor& operator=(IWorldAccessor const &) = delete;
        IWorldAccessor(IWorldAccessor const &) = delete;
        IWorldAccessor() = delete;
    
    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __unk_vfn_0
        virtual void __unk_vfn_0();
    
        // vIndex: 1, symbol: ?fetchAnyInteractablePlayer@WorldAccessor@DespawnComponent@@UEBAPEAVPlayer@@AEBVVec3@@M@Z
        virtual class Player * fetchAnyInteractablePlayer(class Vec3 const &, float) const = 0;
    
        // vIndex: 2, symbol: ?getChunkTickRange@WorldAccessor@DespawnComponent@@UEBAIXZ
        virtual uint32_t getChunkTickRange() const = 0;
    
        // vIndex: 3, symbol: ?areChunksFullyLoaded@WorldAccessor@DespawnComponent@@UEBA_NAEBVBlockPos@@H@Z
        virtual bool areChunksFullyLoaded(class BlockPos const &, int32_t) const = 0;
    
        // vIndex: 4, symbol: ?hasUntickedNeighborChunk@WorldAccessor@DespawnComponent@@UEBA_NAEBVChunkPos@@H@Z
        virtual bool hasUntickedNeighborChunk(class ChunkPos const &, int32_t) const = 0;
    
        // vIndex: 5, symbol: ?getChanceRandomize@WorldAccessor@DespawnComponent@@UEAAAEAVRandomize@@XZ
        virtual class Randomize & getChanceRandomize() = 0;
    
        // vIndex: 6, symbol: ?getActorNoActionTime@WorldAccessor@DespawnComponent@@UEBA?AV?$optional@H@std@@AEBVActor@@@Z
        virtual std::optional<int32_t> getActorNoActionTime(class Actor const &) const = 0;
    
        // vIndex: 7, symbol: ?resetActorNoActionTime@WorldAccessor@DespawnComponent@@UEAAXAEAVActor@@@Z
        virtual void resetActorNoActionTime(class Actor &) = 0;
    
        // symbol: ??1IWorldAccessor@DespawnComponent@@UEAA@XZ
        MCVAPI ~IWorldAccessor();
    
        // NOLINTEND
    
    };
    
    class WorldAccessor : public ::DespawnComponent::IWorldAccessor {
    public:
        // prevent constructor by default
        WorldAccessor& operator=(WorldAccessor const &) = delete;
        WorldAccessor(WorldAccessor const &) = delete;
        WorldAccessor() = delete;
    
    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __unk_vfn_0
        virtual void __unk_vfn_0();
    
        // vIndex: 1, symbol: ?fetchAnyInteractablePlayer@WorldAccessor@DespawnComponent@@UEBAPEAVPlayer@@AEBVVec3@@M@Z
        virtual class Player * fetchAnyInteractablePlayer(class Vec3 const &, float) const;
    
        // vIndex: 2, symbol: ?getChunkTickRange@WorldAccessor@DespawnComponent@@UEBAIXZ
        virtual uint32_t getChunkTickRange() const;
    
        // vIndex: 3, symbol: ?areChunksFullyLoaded@WorldAccessor@DespawnComponent@@UEBA_NAEBVBlockPos@@H@Z
        virtual bool areChunksFullyLoaded(class BlockPos const &, int32_t) const;
    
        // vIndex: 4, symbol: ?hasUntickedNeighborChunk@WorldAccessor@DespawnComponent@@UEBA_NAEBVChunkPos@@H@Z
        virtual bool hasUntickedNeighborChunk(class ChunkPos const &, int32_t) const;
    
        // vIndex: 5, symbol: ?getChanceRandomize@WorldAccessor@DespawnComponent@@UEAAAEAVRandomize@@XZ
        virtual class Randomize & getChanceRandomize();
    
        // vIndex: 6, symbol: ?getActorNoActionTime@WorldAccessor@DespawnComponent@@UEBA?AV?$optional@H@std@@AEBVActor@@@Z
        virtual std::optional<int32_t> getActorNoActionTime(class Actor const &) const;
    
        // vIndex: 7, symbol: ?resetActorNoActionTime@WorldAccessor@DespawnComponent@@UEAAXAEAVActor@@@Z
        virtual void resetActorNoActionTime(class Actor &);
    
        // symbol: ??1WorldAccessor@DespawnComponent@@UEAA@XZ
        MCVAPI ~WorldAccessor();
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    DespawnComponent& operator=(DespawnComponent const &) = delete;
    DespawnComponent(DespawnComponent const &) = delete;
    DespawnComponent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?onDespawn@DespawnComponent@@QEAAXAEAVActor@@@Z
    MCAPI void onDespawn(class Actor &);

    // symbol: ?tick@DespawnComponent@@QEAAXAEAVActor@@@Z
    MCAPI void tick(class Actor &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tryStandardDespawnRules@DespawnComponent@@AEBA_NAEAVActor@@AEBVDespawnDefinition@@AEAVIWorldAccessor@1@@Z
    MCAPI bool _tryStandardDespawnRules(class Actor &, class DespawnDefinition const &, class DespawnComponent::IWorldAccessor &) const;

    // symbol: ?getDefinition@DespawnComponent@@AEBAAEBVDespawnDefinition@@AEAVActor@@@Z
    MCAPI class DespawnDefinition const & getDefinition(class Actor &) const;

    // NOLINTEND

};

