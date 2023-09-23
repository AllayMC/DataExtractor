#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/LevelSoundEvent.h"

class AngerLevelComponent {
public:
    // AngerLevelComponent inner types declare
    // clang-format off
    struct ConditionalSound;
    // clang-format on
    
    // AngerLevelComponent inner types define
    struct ConditionalSound {
    public:
        // prevent constructor by default
        ConditionalSound& operator=(ConditionalSound const &) = delete;
        ConditionalSound(ConditionalSound const &) = delete;
        ConditionalSound() = delete;
    
    public:
        // NOLINTBEGIN
        // symbol: ??1ConditionalSound@AngerLevelComponent@@QEAA@XZ
        MCAPI ~ConditionalSound();
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    AngerLevelComponent& operator=(AngerLevelComponent const &) = delete;
    AngerLevelComponent() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0AngerLevelComponent@@QEAA@$$QEAV0@@Z
    MCAPI AngerLevelComponent(class AngerLevelComponent &&);

    // symbol: ??0AngerLevelComponent@@QEAA@AEBV0@@Z
    MCAPI AngerLevelComponent(class AngerLevelComponent const &);

    // symbol: ?addAdditionalSaveData@AngerLevelComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;

    // symbol: ?belowAngryThreshold@AngerLevelComponent@@QEBA_NUActorUniqueID@@@Z
    MCAPI bool belowAngryThreshold(struct ActorUniqueID) const;

    // symbol: ?canBeNuisance@AngerLevelComponent@@QEBA_NPEAVActor@@0@Z
    MCAPI bool canBeNuisance(class Actor *, class Actor *) const;

    // symbol: ?getAngerForAnimations@AngerLevelComponent@@QEBAHAEAVActor@@@Z
    MCAPI int getAngerForAnimations(class Actor &) const;

    // symbol: ?getTopActiveNuisance@AngerLevelComponent@@QEBA?AV?$optional@U?$pair@PEAVActor@@H@std@@@std@@PEAVActor@@AEBVILevel@@@Z
    MCAPI std::optional<std::pair<class Actor *, int>> getTopActiveNuisance(class Actor *, class ILevel const &) const;

    // symbol: ?isAngry@AngerLevelComponent@@QEBA_NXZ
    MCAPI bool isAngry() const;

    // symbol: ??4AngerLevelComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class AngerLevelComponent & operator=(class AngerLevelComponent &&);

    // symbol: ?readAdditionalSaveData@AngerLevelComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);

    // symbol: ?tick@AngerLevelComponent@@QEAAXPEAVActor@@AEBVILevel@@@Z
    MCAPI void tick(class Actor *, class ILevel const &);

    // symbol: ?tryIncreaseAngerAt@AngerLevelComponent@@QEAAXAEAVActor@@0H_N@Z
    MCAPI void tryIncreaseAngerAt(class Actor &, class Actor &, int, bool);

    // symbol: ??1AngerLevelComponent@@QEAA@XZ
    MCAPI ~AngerLevelComponent();

    // symbol: ?DEFAULT_ANGER_DECREMENT_INTERVAL_SECONDS@AngerLevelComponent@@2MB
    MCAPI static float const DEFAULT_ANGER_DECREMENT_INTERVAL_SECONDS;

    // symbol: ?DEFAULT_ANGRY_BOOST@AngerLevelComponent@@2HB
    MCAPI static int const DEFAULT_ANGRY_BOOST;

    // symbol: ?DEFAULT_ANGRY_THRESHOLD@AngerLevelComponent@@2HB
    MCAPI static int const DEFAULT_ANGRY_THRESHOLD;

    // symbol: ?DEFAULT_MAX_ANGER_LEVEL@AngerLevelComponent@@2HB
    MCAPI static int const DEFAULT_MAX_ANGER_LEVEL;

    // symbol: ?DEFAULT_SHOULD_REMOVE_TARGET@AngerLevelComponent@@2_NB
    MCAPI static bool const DEFAULT_SHOULD_REMOVE_TARGET;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_createOrModifyAngerLevel@AngerLevelComponent@@AEAAXAEBVActor@@AEBV?$function@$$A6AHH@Z@std@@@Z
    MCAPI void _createOrModifyAngerLevel(class Actor const &, std::function<int (int)> const &);

    // symbol: ?_getListeningSoundEvent@AngerLevelComponent@@AEBA?AV?$optional@W4LevelSoundEvent@@@std@@AEAVActor@@@Z
    MCAPI std::optional<::LevelSoundEvent> _getListeningSoundEvent(class Actor &) const;

    // NOLINTEND

};

