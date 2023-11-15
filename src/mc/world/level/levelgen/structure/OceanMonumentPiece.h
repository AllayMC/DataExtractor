#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class OceanMonumentPiece : public ::StructurePiece {
public:
    // prevent constructor by default
    OceanMonumentPiece& operator=(OceanMonumentPiece const &) = delete;
    OceanMonumentPiece(OceanMonumentPiece const &) = delete;
    OceanMonumentPiece() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 5, symbol: ?postProcessMobsAt@OceanMonumentPiece@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);

    // vIndex: 7, symbol: ?getWorldX@OceanMonumentPiece@@UEAAHHH@Z
    virtual int32_t getWorldX(int32_t, int32_t);

    // vIndex: 8, symbol: ?getWorldZ@OceanMonumentPiece@@UEAAHHH@Z
    virtual int32_t getWorldZ(int32_t, int32_t);

    // vIndex: 12, symbol: ?addHardcodedSpawnAreas@OceanMonumentPiece@@UEBAXAEAVLevelChunk@@@Z
    virtual void addHardcodedSpawnAreas(class LevelChunk &) const;

    // symbol: ??1OceanMonumentPiece@@UEAA@XZ
    MCVAPI ~OceanMonumentPiece();

    // symbol: ??0OceanMonumentPiece@@QEAA@AEAHAEAVBoundingBox@@@Z
    MCAPI OceanMonumentPiece(int32_t &, class BoundingBox &);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0OceanMonumentPiece@@IEAA@HAEAHV?$shared_ptr@VRoomDefinition@@@std@@HHH@Z
    MCAPI OceanMonumentPiece(int32_t, int32_t &, std::shared_ptr<class RoomDefinition>, int32_t, int32_t, int32_t);

    // symbol: ?chunkIntersects@OceanMonumentPiece@@IEAA_NAEBVBoundingBox@@HHHH@Z
    MCAPI bool chunkIntersects(class BoundingBox const &, int32_t, int32_t, int32_t, int32_t);

    // symbol: ?generateDefaultFloor@OceanMonumentPiece@@IEAAXAEAVBlockSource@@AEBVBoundingBox@@HH_N@Z
    MCAPI void generateDefaultFloor(class BlockSource &, class BoundingBox const &, int32_t, int32_t, bool);

    // symbol: ?spawnElder@OceanMonumentPiece@@IEAAXAEAVBlockSource@@AEBVBoundingBox@@HHH@Z
    MCAPI void spawnElder(class BlockSource &, class BoundingBox const &, int32_t, int32_t, int32_t);

    // NOLINTEND

protected:
    // NOLINTBEGIN
    // symbol: ?mGridroomLeftWingConnectIndex@OceanMonumentPiece@@1HA
    MCAPI static int32_t mGridroomLeftWingConnectIndex;

    // symbol: ?mGridroomRightWingConnectIndex@OceanMonumentPiece@@1HA
    MCAPI static int32_t mGridroomRightWingConnectIndex;

    // symbol: ?mGridroomSourceIndex@OceanMonumentPiece@@1HA
    MCAPI static int32_t mGridroomSourceIndex;

    // symbol: ?mGridroomTopConnectIndex@OceanMonumentPiece@@1HA
    MCAPI static int32_t mGridroomTopConnectIndex;

    // symbol: ?mLeftWingIndex@OceanMonumentPiece@@1HB
    MCAPI static int32_t const mLeftWingIndex;

    // symbol: ?mPenthouseIndex@OceanMonumentPiece@@1HB
    MCAPI static int32_t const mPenthouseIndex;

    // symbol: ?mRightWingIndex@OceanMonumentPiece@@1HB
    MCAPI static int32_t const mRightWingIndex;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    // NOLINTEND

};

