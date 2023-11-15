#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/common/wrapper/WeakRefT.h"
#include "mc/enums/LimboEntitiesVersion.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/block/utils/BlockChangedEventTarget.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Dimension {
public:
    // Dimension inner types declare
    // clang-format off
    struct PlayerReplicationStructures;
    // clang-format on
    
    // Dimension inner types define
    struct PlayerReplicationStructures {
    public:
        // prevent constructor by default
        PlayerReplicationStructures& operator=(PlayerReplicationStructures const &) = delete;
        PlayerReplicationStructures(PlayerReplicationStructures const &) = delete;
        PlayerReplicationStructures() = delete;
    
    public:
        // NOLINTBEGIN
        // symbol: ?processReplicationForPlayers@PlayerReplicationStructures@Dimension@@QEAAXAEBV?$vector@VWeakEntityRef@@V?$allocator@VWeakEntityRef@@@std@@@std@@PEAV2@@Z
        MCAPI void processReplicationForPlayers(std::vector<class WeakEntityRef> const &, class Dimension *);
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    Dimension& operator=(Dimension const &) = delete;
    Dimension(Dimension const &) = delete;
    Dimension() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?_createChunkBuildOrderPolicy@Dimension@@EEAA?AV?$unique_ptr@VChunkBuildOrderPolicyBase@@U?$default_delete@VChunkBuildOrderPolicyBase@@@std@@@std@@XZ
    MCVAPI std::unique_ptr<class ChunkBuildOrderPolicyBase> _createChunkBuildOrderPolicy();

    // symbol: ?deserialize@Dimension@@UEAAXAEBVCompoundTag@@@Z
    MCVAPI void deserialize(class CompoundTag const &);

    // symbol: ?flushLevelChunkGarbageCollector@Dimension@@UEAAXXZ
    MCVAPI void flushLevelChunkGarbageCollector();

    // symbol: ?forceCheckAllNeighChunkSavedStat@Dimension@@UEBA_NXZ
    MCVAPI bool forceCheckAllNeighChunkSavedStat() const;

    // symbol: ?getBrightnessDependentFogColor@Dimension@@UEBA?AVColor@mce@@AEBV23@M@Z
    MCVAPI class mce::Color getBrightnessDependentFogColor(class mce::Color const &, float) const;

    // symbol: ?getBrightnessRamp@Dimension@@UEBAAEBVDimensionBrightnessRamp@@XZ
    MCVAPI class DimensionBrightnessRamp const & getBrightnessRamp() const;

    // symbol: ?getClearColorScale@Dimension@@UEAAMXZ
    MCVAPI float getClearColorScale();

    // symbol: ?getCloudHeight@Dimension@@UEBAFXZ
    MCVAPI int16_t getCloudHeight() const;

    // symbol: ?getDefaultBiome@Dimension@@UEBA?AVHashedString@@XZ
    MCVAPI class HashedString getDefaultBiome() const;

    // symbol: ?getDimensionId@Dimension@@UEBA?AV?$AutomaticID@VDimension@@H@@XZ
    MCVAPI DimensionType getDimensionId() const;

    // symbol: ?getLightTextureImageBuilder@Dimension@@UEBAPEAVBaseLightTextureImageBuilder@@XZ
    MCVAPI class BaseLightTextureImageBuilder * getLightTextureImageBuilder() const;

    // symbol: ?getSpawnPos@Dimension@@UEBA?AVBlockPos@@XZ
    MCVAPI class BlockPos getSpawnPos() const;

    // symbol: ?getSpawnYPosition@Dimension@@UEBAHXZ
    MCVAPI int32_t getSpawnYPosition() const;

    // symbol: ?getSunIntensity@Dimension@@UEBAMMAEBVVec3@@M@Z
    MCVAPI float getSunIntensity(float, class Vec3 const &, float) const;

    // symbol: ?getTimeOfDay@Dimension@@MEBAMHM@Z
    MCVAPI float getTimeOfDay(int32_t, float) const;

    // symbol: ?hasBedrockFog@Dimension@@UEAA_NXZ
    MCVAPI bool hasBedrockFog();

    // symbol: ?hasGround@Dimension@@UEBA_NXZ
    MCVAPI bool hasGround() const;

    // symbol: ?hasPrecipitationFog@Dimension@@UEBA_NXZ
    MCVAPI bool hasPrecipitationFog() const;

    // symbol: ?init@Dimension@@UEAAXXZ
    MCVAPI void init();

    // symbol: ?initializeWithLevelStorageManager@Dimension@@UEAAXAEAVLevelStorageManager@@@Z
    MCVAPI void initializeWithLevelStorageManager(class LevelStorageManager &);

    // symbol: ?is2DPositionRelevantForPlayer@Dimension@@UEBA_NAEBVBlockPos@@AEAVPlayer@@@Z
    MCVAPI bool is2DPositionRelevantForPlayer(class BlockPos const &, class Player &) const;

    // symbol: ?isActorRelevantForPlayer@Dimension@@UEBA_NAEAVPlayer@@AEBVActor@@@Z
    MCVAPI bool isActorRelevantForPlayer(class Player &, class Actor const &) const;

    // symbol: ?isDay@Dimension@@UEBA_NXZ
    MCVAPI bool isDay() const;

    // symbol: ?isFoggyAt@Dimension@@UEBA_NHH@Z
    MCVAPI bool isFoggyAt(int32_t, int32_t) const;

    // symbol: ?isNaturalDimension@Dimension@@UEBA_NXZ
    MCVAPI bool isNaturalDimension() const;

    // symbol: ?isValidSpawn@Dimension@@UEBA_NHH@Z
    MCVAPI bool isValidSpawn(int32_t, int32_t) const;

    // symbol: ?mayRespawnViaBed@Dimension@@UEBA_NXZ
    MCVAPI bool mayRespawnViaBed() const;

    // symbol: ?onBlockChanged@Dimension@@UEAAXAEAVBlockSource@@AEBVBlockPos@@IAEBVBlock@@2HPEBUActorBlockSyncMessage@@W4BlockChangedEventTarget@@PEAVActor@@@Z
    MCVAPI void onBlockChanged(class BlockSource &, class BlockPos const &, uint32_t, class Block const &, class Block const &, int32_t, struct ActorBlockSyncMessage const *, ::BlockChangedEventTarget, class Actor *);

    // symbol: ?onBlockEvent@Dimension@@UEAAXAEAVBlockSource@@HHHHH@Z
    MCVAPI void onBlockEvent(class BlockSource &, int32_t, int32_t, int32_t, int32_t, int32_t);

    // symbol: ?onChunkLoaded@Dimension@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    MCVAPI void onChunkLoaded(class ChunkSource &, class LevelChunk &);

    // symbol: ?onLevelDestruction@Dimension@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void onLevelDestruction(std::string const &);

    // symbol: ?sendBroadcast@Dimension@@UEAAXAEBVPacket@@PEAVPlayer@@@Z
    MCVAPI void sendBroadcast(class Packet const &, class Player *);

    // symbol: ?sendPacketForPosition@Dimension@@UEAAXAEBVBlockPos@@AEBVPacket@@PEBVPlayer@@@Z
    MCVAPI void sendPacketForPosition(class BlockPos const &, class Packet const &, class Player const *);

    // symbol: ?serialize@Dimension@@UEBAXAEAVCompoundTag@@@Z
    MCVAPI void serialize(class CompoundTag &) const;

    // symbol: ?showSky@Dimension@@UEBA_NXZ
    MCVAPI bool showSky() const;

    // symbol: ?startLeaveGame@Dimension@@UEAAXXZ
    MCVAPI void startLeaveGame();

    // symbol: ?tick@Dimension@@UEAAXXZ
    MCVAPI void tick();

    // symbol: ?tickRedstone@Dimension@@UEAAXXZ
    MCVAPI void tickRedstone();

    // symbol: ??1Dimension@@UEAA@XZ
    MCVAPI ~Dimension();

    // symbol: ??0Dimension@@QEAA@AEAVILevel@@V?$AutomaticID@VDimension@@H@@VDimensionHeightRange@@AEAVScheduler@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI Dimension(class ILevel &, DimensionType, class DimensionHeightRange, class Scheduler &, std::string);

    // symbol: ?addActorUnloadedChunkTransferToQueue@Dimension@@QEAAXAEBVChunkPos@@0V?$AutomaticID@VDimension@@H@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@5@@Z
    MCAPI void addActorUnloadedChunkTransferToQueue(class ChunkPos const &, class ChunkPos const &, DimensionType, std::string &, std::unique_ptr<class CompoundTag>);

    // symbol: ?addPlayerToReplication@Dimension@@QEAAXAEBVWeakEntityRef@@@Z
    MCAPI void addPlayerToReplication(class WeakEntityRef const &);

    // symbol: ?addWither@Dimension@@QEAAXAEBUActorUniqueID@@@Z
    MCAPI void addWither(struct ActorUniqueID const &);

    // symbol: ?clearPlayerReplicationList@Dimension@@QEAAXXZ
    MCAPI void clearPlayerReplicationList();

    // symbol: ?distanceToNearestPlayerSqr2D@Dimension@@QEAAMVVec3@@@Z
    MCAPI float distanceToNearestPlayerSqr2D(class Vec3);

    // symbol: ?fetchAnyInteractablePlayer@Dimension@@QEBAPEAVPlayer@@AEBVVec3@@M@Z
    MCAPI class Player * fetchAnyInteractablePlayer(class Vec3 const &, float) const;

    // symbol: ?fetchEntity@Dimension@@QEBAPEAVActor@@UActorUniqueID@@_N@Z
    MCAPI class Actor * fetchEntity(struct ActorUniqueID, bool) const;

    // symbol: ?fetchNearestAttackablePlayer@Dimension@@QEAAPEAVPlayer@@AEAVActor@@M@Z
    MCAPI class Player * fetchNearestAttackablePlayer(class Actor &, float);

    // symbol: ?fetchNearestAttackablePlayer@Dimension@@QEAAPEAVPlayer@@VBlockPos@@MPEAVActor@@@Z
    MCAPI class Player * fetchNearestAttackablePlayer(class BlockPos, float, class Actor *);

    // symbol: ?fetchNearestInteractablePlayer@Dimension@@QEBAPEAVPlayer@@AEAVActor@@M@Z
    MCAPI class Player * fetchNearestInteractablePlayer(class Actor &, float) const;

    // symbol: ?fetchNearestInteractablePlayer@Dimension@@QEBAPEAVPlayer@@AEBVVec3@@M@Z
    MCAPI class Player * fetchNearestInteractablePlayer(class Vec3 const &, float) const;

    // symbol: ?fetchNearestPlayer@Dimension@@QEBAPEAVPlayer@@AEBVVec3@@M_NV?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z
    MCAPI class Player * fetchNearestPlayer(class Vec3 const &, float, bool, std::function<bool (class Player const &)>) const;

    // symbol: ?findPlayer@Dimension@@QEBAPEAVPlayer@@V?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z
    MCAPI class Player * findPlayer(std::function<bool (class Player const &)>) const;

    // symbol: ?flagEntityforChunkMove@Dimension@@QEAAXAEAVActor@@@Z
    MCAPI void flagEntityforChunkMove(class Actor &);

    // symbol: ?flushRunTimeLighting@Dimension@@QEAAXXZ
    MCAPI void flushRunTimeLighting();

    // symbol: ?forEachPlayer@Dimension@@QEBAXV?$function@$$A6A_NAEAVPlayer@@@Z@std@@@Z
    MCAPI void forEachPlayer(std::function<bool (class Player &)>) const;

    // symbol: ?getBlockEventDispatcher@Dimension@@QEAAAEAVBlockEventDispatcher@@XZ
    MCAPI class BlockEventDispatcher & getBlockEventDispatcher();

    // symbol: ?getBlockSourceFromMainChunkSource@Dimension@@QEBAAEAVBlockSource@@XZ
    MCAPI class BlockSource & getBlockSourceFromMainChunkSource() const;

    // symbol: ?getChunkBuildOrderPolicy@Dimension@@QEAAAEAVChunkBuildOrderPolicyBase@@XZ
    MCAPI class ChunkBuildOrderPolicyBase & getChunkBuildOrderPolicy();

    // symbol: ?getChunkLoadActionList@Dimension@@QEAA?AV?$not_null@PEAVChunkLoadActionList@@@gsl@@XZ
    MCAPI class gsl::not_null<class ChunkLoadActionList *> getChunkLoadActionList();

    // symbol: ?getChunkSource@Dimension@@QEBAAEAVChunkSource@@XZ
    MCAPI class ChunkSource & getChunkSource() const;

    // symbol: ?getCircuitSystem@Dimension@@QEAAAEAVCircuitSystem@@XZ
    MCAPI class CircuitSystem & getCircuitSystem();

    // symbol: ?getDelayActionList@Dimension@@QEAA?AV?$not_null@PEAVDelayActionList@@@gsl@@XZ
    MCAPI class gsl::not_null<class DelayActionList *> getDelayActionList();

    // symbol: ?getDisplayEntities@Dimension@@QEAAAEAV?$vector@VWeakEntityRef@@V?$allocator@VWeakEntityRef@@@std@@@std@@XZ
    MCAPI std::vector<class WeakEntityRef> & getDisplayEntities();

    // symbol: ?getEntityIdMap@Dimension@@QEAAAEAV?$unordered_map@UActorUniqueID@@VWeakEntityRef@@U?$hash@UActorUniqueID@@@std@@U?$equal_to@UActorUniqueID@@@4@V?$allocator@U?$pair@$$CBUActorUniqueID@@VWeakEntityRef@@@std@@@4@@std@@XZ
    MCAPI std::unordered_map<struct ActorUniqueID,class WeakEntityRef> & getEntityIdMap();

    // symbol: ?getFeatureTerrainAdjustments@Dimension@@QEAAAEAVFeatureTerrainAdjustments@@XZ
    MCAPI class FeatureTerrainAdjustments & getFeatureTerrainAdjustments();

    // symbol: ?getGameEventDispatcher@Dimension@@QEBAPEAVGameEventDispatcher@@XZ
    MCAPI class GameEventDispatcher * getGameEventDispatcher() const;

    // symbol: ?getHeight@Dimension@@QEBAFXZ
    MCAPI int16_t getHeight() const;

    // symbol: ?getHeightInSubchunks@Dimension@@QEBAGXZ
    MCAPI uint16_t getHeightInSubchunks() const;

    // symbol: ?getHeightRange@Dimension@@QEBAAEBVDimensionHeightRange@@XZ
    MCAPI class DimensionHeightRange const & getHeightRange() const;

    // symbol: ?getLevel@Dimension@@QEBAAEAVLevel@@XZ
    MCAPI class Level & getLevel() const;

    // symbol: ?getLevelConst@Dimension@@QEBAAEBVLevel@@XZ
    MCAPI class Level const & getLevelConst() const;

    // symbol: ?getMinHeight@Dimension@@QEBAFXZ
    MCAPI int16_t getMinHeight() const;

    // symbol: ?getMoonBrightness@Dimension@@QEBAMXZ
    MCAPI float getMoonBrightness() const;

    // symbol: ?getMoonPhase@Dimension@@QEBAHXZ
    MCAPI int32_t getMoonPhase() const;

    // symbol: ?getPopCap@Dimension@@QEBAMH_N@Z
    MCAPI float getPopCap(int32_t, bool) const;

    // symbol: ?getSeasons@Dimension@@QEAAAEAVSeasons@@XZ
    MCAPI class Seasons & getSeasons();

    // symbol: ?getSkyDarken@Dimension@@QEBA?AUBrightness@@XZ
    MCAPI struct Brightness getSkyDarken() const;

    // symbol: ?getSunAngle@Dimension@@QEBAMM@Z
    MCAPI float getSunAngle(float) const;

    // symbol: ?getTickingAreas@Dimension@@QEAAAEAVTickingAreaList@@XZ
    MCAPI class TickingAreaList & getTickingAreas();

    // symbol: ?getTickingAreasConst@Dimension@@QEBAAEBVTickingAreaList@@XZ
    MCAPI class TickingAreaList const & getTickingAreasConst() const;

    // symbol: ?getTimeOfDay@Dimension@@QEBAMM@Z
    MCAPI float getTimeOfDay(float) const;

    // symbol: ?getVillageManager@Dimension@@QEBAAEBV?$unique_ptr@VVillageManager@@U?$default_delete@VVillageManager@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class VillageManager> const & getVillageManager() const;

    // symbol: ?getWeakRef@Dimension@@QEAA?AV?$WeakRefT@U?$SharePtrRefTraits@VDimension@@@@@@XZ
    MCAPI class WeakRefT<struct SharePtrRefTraits<class Dimension>> getWeakRef();

    // symbol: ?getWeather@Dimension@@QEBAAEAVWeather@@XZ
    MCAPI class Weather & getWeather() const;

    // symbol: ?getWorldGenerator@Dimension@@QEBAPEAVWorldGenerator@@XZ
    MCAPI class WorldGenerator * getWorldGenerator() const;

    // symbol: ?hasCeiling@Dimension@@QEBA_NXZ
    MCAPI bool hasCeiling() const;

    // symbol: ?hasSkylight@Dimension@@QEBA_NXZ
    MCAPI bool hasSkylight() const;

    // symbol: ?isChunkKnown@Dimension@@QEBA_NAEBVChunkPos@@@Z
    MCAPI bool isChunkKnown(class ChunkPos const &) const;

    // symbol: ?isClientSideGenerationEnabled@Dimension@@QEBA?B_NXZ
    MCAPI bool const isClientSideGenerationEnabled() const;

    // symbol: ?isHeightWithinRange@Dimension@@QEBA_NAEBF@Z
    MCAPI bool isHeightWithinRange(int16_t const &) const;

    // symbol: ?isLeaveGameDone@Dimension@@QEAA_NXZ
    MCAPI bool isLeaveGameDone();

    // symbol: ?isRedstoneTick@Dimension@@QEAA_NXZ
    MCAPI bool isRedstoneTick();

    // symbol: ?isSubChunkHeightWithinRange@Dimension@@QEBA_NAEBF@Z
    MCAPI bool isSubChunkHeightWithinRange(int16_t const &) const;

    // symbol: ?isUltraWarm@Dimension@@QEBA_NXZ
    MCAPI bool isUltraWarm() const;

    // symbol: ?onStaticTickingAreaAdded@Dimension@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void onStaticTickingAreaAdded(std::string const &);

    // symbol: ?pauseAndFlushTaskGroups@Dimension@@QEAAXXZ
    MCAPI void pauseAndFlushTaskGroups();

    // symbol: ?processPlayerReplication@Dimension@@QEAAXXZ
    MCAPI void processPlayerReplication();

    // symbol: ?registerEntity@Dimension@@QEAAXAEBUActorUniqueID@@V?$WeakRefT@UEntityRefTraits@@@@@Z
    MCAPI void registerEntity(struct ActorUniqueID const &, class WeakRefT<struct EntityRefTraits>);

    // symbol: ?removeActorByID@Dimension@@QEAAXAEBUActorUniqueID@@@Z
    MCAPI void removeActorByID(struct ActorUniqueID const &);

    // symbol: ?removeWither@Dimension@@QEAAXAEBUActorUniqueID@@@Z
    MCAPI void removeWither(struct ActorUniqueID const &);

    // symbol: ?sendPacketForEntity@Dimension@@QEAAXAEBVActor@@AEBVPacket@@PEBVPlayer@@@Z
    MCAPI void sendPacketForEntity(class Actor const &, class Packet const &, class Player const *);

    // symbol: ?sendPacketToClients@Dimension@@QEAAXAEBVPacket@@V?$vector@UNetworkIdentifierWithSubId@@V?$allocator@UNetworkIdentifierWithSubId@@@std@@@std@@@Z
    MCAPI void sendPacketToClients(class Packet const &, std::vector<struct NetworkIdentifierWithSubId>);

    // symbol: ?setCeiling@Dimension@@QEAAX_N@Z
    MCAPI void setCeiling(bool);

    // symbol: ?setSkylight@Dimension@@QEAAX_N@Z
    MCAPI void setSkylight(bool);

    // symbol: ?setUltraWarm@Dimension@@QEAAX_N@Z
    MCAPI void setUltraWarm(bool);

    // symbol: ?transferEntity@Dimension@@QEAAXAEBVChunkPos@@AEBVVec3@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@_N@Z
    MCAPI void transferEntity(class ChunkPos const &, class Vec3 const &, std::unique_ptr<class CompoundTag>, bool);

    // symbol: ?transferEntityToUnloadedChunk@Dimension@@QEAAXAEBVChunkPos@@0V?$AutomaticID@VDimension@@H@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@5@@Z
    MCAPI void transferEntityToUnloadedChunk(class ChunkPos const &, class ChunkPos const &, DimensionType, std::string &, std::unique_ptr<class CompoundTag>);

    // symbol: ?transferEntityToUnloadedChunk@Dimension@@QEAAXAEAVActor@@PEAVLevelChunk@@@Z
    MCAPI void transferEntityToUnloadedChunk(class Actor &, class LevelChunk *);

    // symbol: ?tryGarbageCollectStructures@Dimension@@QEAAXXZ
    MCAPI void tryGarbageCollectStructures();

    // symbol: ?tryLoadLimboEntities@Dimension@@QEAAXAEBVChunkPos@@@Z
    MCAPI void tryLoadLimboEntities(class ChunkPos const &);

    // symbol: ?unregisterDisplayEntity@Dimension@@QEAAXV?$WeakRefT@UEntityRefTraits@@@@@Z
    MCAPI void unregisterDisplayEntity(class WeakRefT<struct EntityRefTraits>);

    // symbol: ?unregisterEntity@Dimension@@QEAAXAEBUActorUniqueID@@@Z
    MCAPI void unregisterEntity(struct ActorUniqueID const &);

    // symbol: ?updateBlockLight@Dimension@@QEAAXAEBVBlockPos@@UBrightness@@111_N@Z
    MCAPI void updateBlockLight(class BlockPos const &, struct Brightness, struct Brightness, struct Brightness, struct Brightness, bool);

    // symbol: ?updateDimensionBlockSourceTick@Dimension@@QEAAXXZ
    MCAPI void updateDimensionBlockSourceTick();

    // symbol: ?CurrentLimboEntitiesVersion@Dimension@@2W4LimboEntitiesVersion@@B
    MCAPI static ::LimboEntitiesVersion const CurrentLimboEntitiesVersion;

    // symbol: ?LOW_CPU_PACKET_BLOCK_LIMIT@Dimension@@2IB
    MCAPI static uint32_t const LOW_CPU_PACKET_BLOCK_LIMIT;

    // symbol: ?MOON_BRIGHTNESS_PER_PHASE@Dimension@@2QBMB
    MCAPI static float const MOON_BRIGHTNESS_PER_PHASE[];

    // symbol: ?STRUCTURE_PRUNE_INTERVAL@Dimension@@2V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@B
    MCAPI static std::chrono::seconds const STRUCTURE_PRUNE_INTERVAL;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_completeEntityTransfer@Dimension@@IEAAXV?$OwnerPtrT@UEntityRefTraits@@@@_N@Z
    MCAPI void _completeEntityTransfer(class OwnerPtrT<struct EntityRefTraits>, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_processEntityChunkTransfers@Dimension@@AEAAXXZ
    MCAPI void _processEntityChunkTransfers();

    // symbol: ?_sendBlockEntityUpdatePacket@Dimension@@AEAAXAEBVNetworkBlockPosition@@@Z
    MCAPI void _sendBlockEntityUpdatePacket(class NetworkBlockPosition const &);

    // symbol: ?_sendBlocksChangedPackets@Dimension@@AEAAXXZ
    MCAPI void _sendBlocksChangedPackets();

    // symbol: ?_tickEntityChunkMoves@Dimension@@AEAAXXZ
    MCAPI void _tickEntityChunkMoves();

    // NOLINTEND

};

