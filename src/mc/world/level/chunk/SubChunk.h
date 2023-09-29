#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/LockGuard.h"
#include "mc/world/level/block/utils/BlockDataFetchResult.h"
#include "mc/world/level/chunk/PruneType.h"
#include "mc/world/level/chunk/SubChunkBrightnessStorage.h"
#include "mc/world/level/chunk/SubChunkStorage.h"

struct SubChunk {
public:
    // SubChunk inner types define
    enum class SubChunkState {};
    
public:
    // prevent constructor by default
    SubChunk& operator=(SubChunk const &) = delete;
    SubChunk(SubChunk const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0SubChunk@@QEAA@$$QEAU0@@Z
    MCAPI SubChunk(struct SubChunk &&);

    // symbol: ??0SubChunk@@QEAA@XZ
    MCAPI SubChunk();

    // symbol: ??0SubChunk@@QEAA@PEBVBlock@@_N1AEAVSpinLock@@C@Z
    MCAPI SubChunk(class Block const *, bool, bool, class SpinLock &, schar);

    // symbol: ?deserialize@SubChunk@@QEAAXAEAVIDataInput@@AEBVBlockPalette@@AEBVSubChunkPos@@V?$optional@PEAUDeserializationChanges@@@std@@@Z
    MCAPI void deserialize(class IDataInput &, class BlockPalette const &, class SubChunkPos const &, std::optional<struct DeserializationChanges *>);

    // symbol: ?fetchBlocks@SubChunk@@QEBAXAEBVBlockPos@@0FAEAVBlockVolume@@@Z
    MCAPI void fetchBlocks(class BlockPos const &, class BlockPos const &, short, class BlockVolume &) const;

    // symbol: ?fetchBlocksInBox@SubChunk@@QEBAXAEBVBlockPos@@AEBVBoundingBox@@AEBV?$function@$$A6A_NAEBVBlock@@@Z@std@@AEAV?$vector@V?$BlockDataFetchResult@VBlock@@@@V?$allocator@V?$BlockDataFetchResult@VBlock@@@@@std@@@5@@Z
    MCAPI void fetchBlocksInBox(class BlockPos const &, class BoundingBox const &, std::function<bool (class Block const &)> const &, std::vector<class BlockDataFetchResult<class Block>> &) const;

    // symbol: ?fetchBlocksInCylinder@SubChunk@@QEBAXAEBVBlockPos@@0IIAEBV?$function@$$A6A_NAEBVBlock@@@Z@std@@AEAV?$vector@V?$BlockDataFetchResult@VBlock@@@@V?$allocator@V?$BlockDataFetchResult@VBlock@@@@@std@@@4@@Z
    MCAPI void fetchBlocksInCylinder(class BlockPos const &, class BlockPos const &, uint, uint, std::function<bool (class Block const &)> const &, std::vector<class BlockDataFetchResult<class Block>> &) const;

    // symbol: ?getLight@SubChunk@@QEBA?AULightPair@SubChunkBrightnessStorage@@G@Z
    MCAPI struct SubChunkBrightnessStorage::LightPair getLight(ushort) const;

    // symbol: ?getSubChunkState@SubChunk@@QEBA?AW4SubChunkState@1@XZ
    MCAPI ::SubChunk::SubChunkState getSubChunkState() const;

    // symbol: ?initialize@SubChunk@@QEAAXPEBVBlock@@_N1AEAVSpinLock@@C@Z
    MCAPI void initialize(class Block const *, bool, bool, class SpinLock &, schar);

    // symbol: ?isPaletteUniform@SubChunk@@QEBA_NAEBVBlock@@@Z
    MCAPI bool isPaletteUniform(class Block const &) const;

    // symbol: ?isUniform@SubChunk@@QEBA_NAEBVBlock@@@Z
    MCAPI bool isUniform(class Block const &) const;

    // symbol: ?likelyHasNonUniformBlockLight@SubChunk@@QEBA_NXZ
    MCAPI bool likelyHasNonUniformBlockLight() const;

    // symbol: ?needsInitLighting@SubChunk@@QEBA_NXZ
    MCAPI bool needsInitLighting() const;

    // symbol: ??4SubChunk@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct SubChunk & operator=(struct SubChunk &&);

    // symbol: ?prune@SubChunk@@QEAAXW4PruneType@SubChunkStorageUnit@@@Z
    MCAPI void prune(::SubChunkStorageUnit::PruneType);

    // symbol: ?recalculateHash@SubChunk@@QEAAX_N@Z
    MCAPI void recalculateHash(bool);

    // symbol: ?recalculateHashAndSerialize@SubChunk@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI std::string recalculateHashAndSerialize(bool);

    // symbol: ?reset@SubChunk@@QEAAXPEBVBlock@@_N1@Z
    MCAPI void reset(class Block const *, bool, bool);

    // symbol: ?safeToModify@SubChunk@@QEBA_NXZ
    MCAPI bool safeToModify() const;

    // symbol: ?serialize@SubChunk@@QEBAXAEAVIDataOutput@@_N@Z
    MCAPI void serialize(class IDataOutput &, bool) const;

    // symbol: ?setAllIsMaxSkyLight@SubChunk@@QEAAXXZ
    MCAPI void setAllIsMaxSkyLight();

    // symbol: ?setAllIsNoSkyLight@SubChunk@@QEAAXXZ
    MCAPI void setAllIsNoSkyLight();

    // symbol: ?setBlockLight@SubChunk@@QEAAXGE@Z
    MCAPI void setBlockLight(ushort, uchar);

    // symbol: ?setFromBlockVolume@SubChunk@@QEAAXAEBVBlockVolume@@F@Z
    MCAPI void setFromBlockVolume(class BlockVolume const &, short);

    // symbol: ?setNeedsClientLighting@SubChunk@@QEAAX_N@Z
    MCAPI void setNeedsClientLighting(bool);

    // symbol: ?setNeedsInitLighting@SubChunk@@QEAAX_N@Z
    MCAPI void setNeedsInitLighting(bool);

    // symbol: ?setSkyLight@SubChunk@@QEAAXGE@Z
    MCAPI void setSkyLight(ushort, uchar);

    // symbol: ??1SubChunk@@QEAA@XZ
    MCAPI ~SubChunk();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_createBlockLightStorage@SubChunk@@IEAAXXZ
    MCAPI void _createBlockLightStorage();

    // symbol: ?_replaceBlocks@SubChunk@@IEAAXEV?$unique_ptr@V?$SubChunkStorage@VBlock@@@@U?$default_delete@V?$SubChunkStorage@VBlock@@@@@std@@@std@@AEAV?$LockGuard@VSpinLock@@@Threading@Bedrock@@@Z
    MCAPI void _replaceBlocks(uchar, std::unique_ptr<class SubChunkStorage<class Block>>, class Bedrock::Threading::LockGuard<class SpinLock> &);

    // symbol: ?_resetLight@SubChunk@@IEAAX_N0@Z
    MCAPI void _resetLight(bool, bool);

    // symbol: ?_setBlock@SubChunk@@IEAAXEGAEBVBlock@@@Z
    MCAPI void _setBlock(uchar, ushort, class Block const &);

    // NOLINTEND

};

