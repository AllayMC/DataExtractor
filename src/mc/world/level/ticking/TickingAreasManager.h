#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AddTickingAreaStatus.h"
#include "mc/enums/TickingAreaLoadMode.h"
#include "mc/world/AutomaticID.h"

class TickingAreasManager {
public:
    // TickingAreasManager inner types define
    enum class AreaLimitCheck {};
    
public:
    // prevent constructor by default
    TickingAreasManager& operator=(TickingAreasManager const &) = delete;
    TickingAreasManager(TickingAreasManager const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0TickingAreasManager@@QEAA@XZ
    MCAPI TickingAreasManager();

    // symbol: ?addArea@TickingAreasManager@@QEAA?AW4AddTickingAreaStatus@@V?$AutomaticID@VDimension@@H@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@HW4AreaLimitCheck@1@_NW4TickingAreaLoadMode@@AEAVLevelStorage@@@Z
    MCAPI ::AddTickingAreaStatus addArea(DimensionType, std::string const &, class BlockPos const &, int, ::TickingAreasManager::AreaLimitCheck, bool, ::TickingAreaLoadMode, class LevelStorage &);

    // symbol: ?addArea@TickingAreasManager@@QEAA?AW4AddTickingAreaStatus@@V?$AutomaticID@VDimension@@H@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@2W4AreaLimitCheck@1@_NW4TickingAreaLoadMode@@AEAVLevelStorage@@@Z
    MCAPI ::AddTickingAreaStatus addArea(DimensionType, std::string const &, class BlockPos const &, class BlockPos const &, ::TickingAreasManager::AreaLimitCheck, bool, ::TickingAreaLoadMode, class LevelStorage &);

    // symbol: ?addEntityArea@TickingAreasManager@@QEAAXV?$AutomaticID@VDimension@@H@@AEBVActor@@AEAVLevelStorage@@@Z
    MCAPI void addEntityArea(DimensionType, class Actor const &, class LevelStorage &);

    // symbol: ?addEntityArea@TickingAreasManager@@QEAAXV?$AutomaticID@VDimension@@H@@AEBUActorUniqueID@@AEBUBounds@@_NMAEAVLevelStorage@@@Z
    MCAPI void addEntityArea(DimensionType, struct ActorUniqueID const &, struct Bounds const &, bool, float, class LevelStorage &);

    // symbol: ?addTickingAreaListForDimension@TickingAreasManager@@QEAAXV?$AutomaticID@VDimension@@H@@AEBV?$shared_ptr@VTickingAreaList@@@std@@@Z
    MCAPI void addTickingAreaListForDimension(DimensionType, std::shared_ptr<class TickingAreaList> const &);

    // symbol: ?countActiveStandaloneTickingAreas@TickingAreasManager@@QEBAIXZ
    MCAPI uint countActiveStandaloneTickingAreas() const;

    // symbol: ?countStandaloneTickingAreas@TickingAreasManager@@QEBAIXZ
    MCAPI uint countStandaloneTickingAreas() const;

    // symbol: ?getPendingStandaloneAreaDescriptions@TickingAreasManager@@QEBA?AV?$vector@UTickingAreaDescription@@V?$allocator@UTickingAreaDescription@@@std@@@std@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI std::vector<struct TickingAreaDescription> getPendingStandaloneAreaDescriptions(DimensionType) const;

    // symbol: ?getPendingStandaloneAreaDescriptionsByName@TickingAreasManager@@QEBA?AV?$vector@UTickingAreaDescription@@V?$allocator@UTickingAreaDescription@@@std@@@std@@V?$AutomaticID@VDimension@@H@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI std::vector<struct TickingAreaDescription> getPendingStandaloneAreaDescriptionsByName(DimensionType, std::string const &) const;

    // symbol: ?getPendingStandaloneAreaDescriptionsByPosition@TickingAreasManager@@QEBA?AV?$vector@UTickingAreaDescription@@V?$allocator@UTickingAreaDescription@@@std@@@std@@V?$AutomaticID@VDimension@@H@@AEBVBlockPos@@@Z
    MCAPI std::vector<struct TickingAreaDescription> getPendingStandaloneAreaDescriptionsByPosition(DimensionType, class BlockPos const &) const;

    // symbol: ?hasActiveAreas@TickingAreasManager@@QEBA_NXZ
    MCAPI bool hasActiveAreas() const;

    // symbol: ?isPreloadDone@TickingAreasManager@@QEBA_NXZ
    MCAPI bool isPreloadDone() const;

    // symbol: ?loadArea@TickingAreasManager@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVCompoundTag@@@Z
    MCAPI void loadArea(std::string const &, class CompoundTag const *);

    // symbol: ?loadAreasFromSaveData@TickingAreasManager@@QEAAXAEAVLevelStorage@@@Z
    MCAPI void loadAreasFromSaveData(class LevelStorage &);

    // symbol: ?onTickingEntityAdded@TickingAreasManager@@QEAAXV?$AutomaticID@VDimension@@H@@AEAVActor@@AEAVLevelStorage@@@Z
    MCAPI void onTickingEntityAdded(DimensionType, class Actor &, class LevelStorage &);

    // symbol: ?removePendingAreaByName@TickingAreasManager@@QEAA?AV?$vector@UTickingAreaDescription@@V?$allocator@UTickingAreaDescription@@@std@@@std@@V?$AutomaticID@VDimension@@H@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEAVLevelStorage@@@Z
    MCAPI std::vector<struct TickingAreaDescription> removePendingAreaByName(DimensionType, std::string const &, class LevelStorage &);

    // symbol: ?removePendingAreaByPosition@TickingAreasManager@@QEAA?AV?$vector@UTickingAreaDescription@@V?$allocator@UTickingAreaDescription@@@std@@@std@@V?$AutomaticID@VDimension@@H@@AEBVBlockPos@@AEAVLevelStorage@@@Z
    MCAPI std::vector<struct TickingAreaDescription> removePendingAreaByPosition(DimensionType, class BlockPos const &, class LevelStorage &);

    // symbol: ?setPendingAreaLoadModeByName@TickingAreasManager@@QEAA?AV?$vector@UTickingAreaDescription@@V?$allocator@UTickingAreaDescription@@@std@@@std@@V?$AutomaticID@VDimension@@H@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@W4TickingAreaLoadMode@@AEAVLevelStorage@@@Z
    MCAPI std::vector<struct TickingAreaDescription> setPendingAreaLoadModeByName(DimensionType, std::string const &, ::TickingAreaLoadMode, class LevelStorage &);

    // symbol: ?setPendingAreaLoadModeByPosition@TickingAreasManager@@QEAA?AV?$vector@UTickingAreaDescription@@V?$allocator@UTickingAreaDescription@@@std@@@std@@V?$AutomaticID@VDimension@@H@@AEBVBlockPos@@W4TickingAreaLoadMode@@AEAVLevelStorage@@@Z
    MCAPI std::vector<struct TickingAreaDescription> setPendingAreaLoadModeByPosition(DimensionType, class BlockPos const &, ::TickingAreaLoadMode, class LevelStorage &);

    // symbol: ?tick@TickingAreasManager@@QEAAXAEBUTick@@@Z
    MCAPI void tick(struct Tick const &);

    // symbol: ?update@TickingAreasManager@@QEAAXAEAVLevel@@AEAVLevelStorage@@@Z
    MCAPI void update(class Level &, class LevelStorage &);

    // symbol: ?getLimitCheck@TickingAreasManager@@SA?AW4AreaLimitCheck@1@AEBVLevel@@_N@Z
    MCAPI static ::TickingAreasManager::AreaLimitCheck getLimitCheck(class Level const &, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addArea@TickingAreasManager@@AEAA?AW4AddTickingAreaStatus@@V?$AutomaticID@VDimension@@H@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUBounds@@_NW4AreaLimitCheck@1@3W4TickingAreaLoadMode@@AEAVLevelStorage@@@Z
    MCAPI ::AddTickingAreaStatus _addArea(DimensionType, std::string const &, struct Bounds const &, bool, ::TickingAreasManager::AreaLimitCheck, bool, ::TickingAreaLoadMode, class LevelStorage &);

    // symbol: ?_deletePendingArea@TickingAreasManager@@AEAAXAEAVLevelStorage@@AEBUPendingArea@@@Z
    MCAPI void _deletePendingArea(class LevelStorage &, struct PendingArea const &);

    // symbol: ?_findUsableDefaultName@TickingAreasManager@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVTickingAreaList@@AEBV?$vector@UPendingArea@@V?$allocator@UPendingArea@@@std@@@3@@Z
    MCAPI std::string _findUsableDefaultName(class TickingAreaList const &, std::vector<struct PendingArea> const &) const;

    // symbol: ?_getPendingAreaDescriptionsFiltered@TickingAreasManager@@AEBA?AV?$vector@UTickingAreaDescription@@V?$allocator@UTickingAreaDescription@@@std@@@std@@V?$AutomaticID@VDimension@@H@@V?$function@$$A6A_NAEBUPendingArea@@@Z@3@@Z
    MCAPI std::vector<struct TickingAreaDescription> _getPendingAreaDescriptionsFiltered(DimensionType, std::function<bool (struct PendingArea const &)>) const;

    // symbol: ?_hasPendingTickingAreaNamed@TickingAreasManager@@AEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@UPendingArea@@V?$allocator@UPendingArea@@@std@@@3@@Z
    MCAPI bool _hasPendingTickingAreaNamed(std::string const &, std::vector<struct PendingArea> const &) const;

    // symbol: ?_processAdds@TickingAreasManager@@AEAAXAEAVLevel@@@Z
    MCAPI void _processAdds(class Level &);

    // symbol: ?_processRemoves@TickingAreasManager@@AEAAXV?$AutomaticID@VDimension@@H@@AEAVTickingAreaList@@AEAVLevel@@AEAVLevelStorage@@@Z
    MCAPI void _processRemoves(DimensionType, class TickingAreaList &, class Level &, class LevelStorage &);

    // symbol: ?_savePendingArea@TickingAreasManager@@AEAAXAEAVLevelStorage@@V?$AutomaticID@VDimension@@H@@AEBUPendingArea@@@Z
    MCAPI void _savePendingArea(class LevelStorage &, DimensionType, struct PendingArea const &);

    // NOLINTEND

};

