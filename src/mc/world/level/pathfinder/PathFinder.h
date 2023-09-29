#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CanClimbIntoNode.h"
#include "mc/enums/CanJumpIntoNode.h"
#include "mc/enums/NodeType.h"
#include "mc/enums/PathCompletionType.h"
#include "mc/world/level/block/utils/BlockProperty.h"

class PathFinder {
public:
    // PathFinder inner types define
    enum class ExtractionPurpose {};
    
public:
    // prevent constructor by default
    PathFinder& operator=(PathFinder const &) = delete;
    PathFinder(PathFinder const &) = delete;
    PathFinder() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0PathFinder@@QEAA@AEAVBlockSource@@AEBVNavigationComponent@@@Z
    MCAPI PathFinder(class BlockSource &, class NavigationComponent const &);

    // symbol: ?findPath@PathFinder@@QEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVActor@@HHHM@Z
    MCAPI std::unique_ptr<class Path> findPath(class Actor &, int, int, int, float);

    // symbol: ?findPath@PathFinder@@QEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVActor@@0M@Z
    MCAPI std::unique_ptr<class Path> findPath(class Actor &, class Actor &, float);

    // symbol: ?isFree@PathFinder@@QEAA?AW4NodeType@@AEAVActor@@AEBVBlockPos@@11W4CanJumpIntoNode@@W4CanClimbIntoNode@@@Z
    MCAPI ::NodeType isFree(class Actor &, class BlockPos const &, class BlockPos const &, class BlockPos const &, ::CanJumpIntoNode, ::CanClimbIntoNode);

    // symbol: ?isFree@PathFinder@@QEAA?AW4NodeType@@AEBUActorPathingData@@AEBVBlockPos@@11W4CanJumpIntoNode@@W4CanClimbIntoNode@@@Z
    MCAPI ::NodeType isFree(struct ActorPathingData const &, class BlockPos const &, class BlockPos const &, class BlockPos const &, ::CanJumpIntoNode, ::CanClimbIntoNode);

    // symbol: ??1PathFinder@@QEAA@XZ
    MCAPI ~PathFinder();

    // symbol: ?_getStartPositionFlyingActor@PathFinder@@SA?AVBlockPos@@AEBVIPathBlockSource@@V2@_N2M@Z
    MCAPI static class BlockPos _getStartPositionFlyingActor(class IPathBlockSource const &, class BlockPos, bool, bool, float);

    // symbol: ?extractPathingData@PathFinder@@SA?AUActorPathingData@@AEAVActor@@W4ExtractionPurpose@1@@Z
    MCAPI static struct ActorPathingData extractPathingData(class Actor &, ::PathFinder::ExtractionPurpose);

    // symbol: ?DEFAULT_DESC@PathFinder@@2UPreferredPathDescription@@B
    MCAPI static struct PreferredPathDescription const DEFAULT_DESC;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_checkBlockAndNeighborsProperty@PathFinder@@AEAA_NAEBUActorPathingData@@AEBVBlockPos@@AEBVBlock@@W4BlockProperty@@HPEBVBreakBlocksComponent@@V?$function@$$A6A_NAEBVBlock@@AEBVBlockPos@@@Z@std@@@Z
    MCAPI bool _checkBlockAndNeighborsProperty(struct ActorPathingData const &, class BlockPos const &, class Block const &, ::BlockProperty, int, class BreakBlocksComponent const *, std::function<bool (class Block const &, class BlockPos const &)>);

    // symbol: ?_checkForDamagingBlock@PathFinder@@AEAA_NAEBUActorPathingData@@AEBVBlockPos@@AEBVBlock@@HPEBVBreakBlocksComponent@@@Z
    MCAPI bool _checkForDamagingBlock(struct ActorPathingData const &, class BlockPos const &, class Block const &, int, class BreakBlocksComponent const *);

    // symbol: ?_classifyDoorNode@PathFinder@@AEAA?AW4NodeType@@AEBUActorPathingData@@AEBVBlock@@AEBVBlockPos@@2@Z
    MCAPI ::NodeType _classifyDoorNode(struct ActorPathingData const &, class Block const &, class BlockPos const &, class BlockPos const &);

    // symbol: ?_classifyNode@PathFinder@@AEAA?AW4NodeType@@AEBUActorPathingData@@AEBVBlockPos@@AEBVBlock@@1W4CanJumpIntoNode@@W4CanClimbIntoNode@@@Z
    MCAPI ::NodeType _classifyNode(struct ActorPathingData const &, class BlockPos const &, class Block const &, class BlockPos const &, ::CanJumpIntoNode, ::CanClimbIntoNode);

    // symbol: ?_findNearestPathableNeighbor@PathFinder@@AEAA_NAEAVBlockPos@@AEBUActorPathingData@@AEBV2@@Z
    MCAPI bool _findNearestPathableNeighbor(class BlockPos &, struct ActorPathingData const &, class BlockPos const &);

    // symbol: ?_findPath@PathFinder@@AEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEBUActorPathingData@@MMMM@Z
    MCAPI std::unique_ptr<class Path> _findPath(struct ActorPathingData const &, float, float, float, float);

    // symbol: ?_findPath@PathFinder@@AEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEBUActorPathingData@@PEAVPathfinderNode@@1AEBV5@M@Z
    MCAPI std::unique_ptr<class Path> _findPath(struct ActorPathingData const &, class PathfinderNode *, class PathfinderNode *, class PathfinderNode const &, float);

    // symbol: ?_getAABBForPathfinding@PathFinder@@AEBA?AVAABB@@AEBVBlockPos@@AEBVBlock@@@Z
    MCAPI class AABB _getAABBForPathfinding(class BlockPos const &, class Block const &) const;

    // symbol: ?_getHighestReachablePosByJumping@PathFinder@@AEBA?AV?$optional@VBlockPos@@@std@@AEBVBlockPos@@M0@Z
    MCAPI std::optional<class BlockPos> _getHighestReachablePosByJumping(class BlockPos const &, float, class BlockPos const &) const;

    // symbol: ?_getMinAndMaxHeightAroundBlock@PathFinder@@AEBA?AU?$pair@MM@std@@AEBVBlockPos@@M@Z
    MCAPI std::pair<float, float> _getMinAndMaxHeightAroundBlock(class BlockPos const &, float) const;

    // symbol: ?_getNeighbors@PathFinder@@AEAAHAEBUActorPathingData@@AEAVPathfinderNode@@AEBV3@2I@Z
    MCAPI int _getNeighbors(struct ActorPathingData const &, class PathfinderNode &, class PathfinderNode const &, class PathfinderNode const &, uint);

    // symbol: ?_getNode@PathFinder@@AEAAPEAVPathfinderNode@@AEBUActorPathingData@@AEBVBlockPos@@1AEBV2@MW4CanClimbIntoNode@@@Z
    MCAPI class PathfinderNode * _getNode(struct ActorPathingData const &, class BlockPos const &, class BlockPos const &, class PathfinderNode const &, float, ::CanClimbIntoNode);

    // symbol: ?_getNode@PathFinder@@AEAAPEAVPathfinderNode@@AEBVBlockPos@@W4NodeType@@@Z
    MCAPI class PathfinderNode * _getNode(class BlockPos const &, ::NodeType);

    // symbol: ?_getPartialBlockNodeType@PathFinder@@AEAA?AV?$optional@W4NodeType@@@std@@AEBVBlockPos@@0AEBUActorPathingData@@@Z
    MCAPI std::optional<::NodeType> _getPartialBlockNodeType(class BlockPos const &, class BlockPos const &, struct ActorPathingData const &);

    // symbol: ?_getPathfindingMalus@PathFinder@@AEAAMAEBUActorPathingData@@W4NodeType@@AEBVBlockPos@@@Z
    MCAPI float _getPathfindingMalus(struct ActorPathingData const &, ::NodeType, class BlockPos const &);

    // symbol: ?_getUnderneathSupportedNode@PathFinder@@AEAAPEAVPathfinderNode@@PEAV2@AEBUActorPathingData@@AEBVBlockPos@@AEBV2@W4CanClimbIntoNode@@@Z
    MCAPI class PathfinderNode * _getUnderneathSupportedNode(class PathfinderNode *, struct ActorPathingData const &, class BlockPos const &, class PathfinderNode const &, ::CanClimbIntoNode);

    // symbol: ?_getWaterNode@PathFinder@@AEAAPEAVPathfinderNode@@AEBUActorPathingData@@AEBVBlockPos@@1@Z
    MCAPI class PathfinderNode * _getWaterNode(struct ActorPathingData const &, class BlockPos const &, class BlockPos const &);

    // symbol: ?_isFreeStartNode@PathFinder@@AEAA?AW4NodeType@@AEBUActorPathingData@@AEBVAABB@@AEBVBlockPos@@2@Z
    MCAPI ::NodeType _isFreeStartNode(struct ActorPathingData const &, class AABB const &, class BlockPos const &, class BlockPos const &);

    // symbol: ?_isFreeWaterNode@PathFinder@@AEAA?AW4NodeType@@AEBUActorPathingData@@AEBVBlockPos@@1@Z
    MCAPI ::NodeType _isFreeWaterNode(struct ActorPathingData const &, class BlockPos const &, class BlockPos const &);

    // symbol: ?_reconstructPath@PathFinder@@AEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@PEAVPathfinderNode@@W4PathCompletionType@@UActorUniqueID@@@Z
    MCAPI std::unique_ptr<class Path> _reconstructPath(class PathfinderNode *, ::PathCompletionType, struct ActorUniqueID);

    // NOLINTEND

};

