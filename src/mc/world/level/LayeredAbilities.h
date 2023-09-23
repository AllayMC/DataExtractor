#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AbilitiesIndex.h"
#include "mc/enums/AbilitiesLayer.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/player/Ability.h"
#include "mc/world/actor/player/PlayerPermissionLevel.h"

class LayeredAbilities {
public:
    // NOLINTBEGIN
    // symbol: ??0LayeredAbilities@@QEAA@XZ
    MCAPI LayeredAbilities();

    // symbol: ??0LayeredAbilities@@QEAA@AEBV0@@Z
    MCAPI LayeredAbilities(class LayeredAbilities const &);

    // symbol: ?addSaveData@LayeredAbilities@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addSaveData(class CompoundTag &) const;

    // symbol: ?forEachAbility@LayeredAbilities@@QEBAXAEBV?$function@$$A6AXAEBVAbility@@PEBD@Z@std@@W4Options@Ability@@@Z
    MCAPI void forEachAbility(std::function<void (class Ability const &, char const *)> const &, ::Ability::Options) const;

    // symbol: ?forEachAbility@LayeredAbilities@@QEBAXAEBV?$function@$$A6AXAEBVAbility@@W4AbilitiesIndex@@@Z@std@@W4Options@Ability@@@Z
    MCAPI void forEachAbility(std::function<void (class Ability const &, ::AbilitiesIndex)> const &, ::Ability::Options) const;

    // symbol: ?forEachLayer@LayeredAbilities@@QEAAXAEBV?$function@$$A6AXW4AbilitiesLayer@@AEAVAbilities@@@Z@std@@@Z
    MCAPI void forEachLayer(std::function<void (::AbilitiesLayer, class Abilities &)> const &);

    // symbol: ?forEachLayer@LayeredAbilities@@QEBAXAEBV?$function@$$A6AXW4AbilitiesLayer@@AEBVAbilities@@@Z@std@@@Z
    MCAPI void forEachLayer(std::function<void (::AbilitiesLayer, class Abilities const &)> const &) const;

    // symbol: ?getAbility@LayeredAbilities@@QEAAAEAVAbility@@W4AbilitiesLayer@@W4AbilitiesIndex@@@Z
    MCAPI class Ability & getAbility(::AbilitiesLayer, ::AbilitiesIndex);

    // symbol: ?getAbility@LayeredAbilities@@QEBAAEBVAbility@@W4AbilitiesIndex@@@Z
    MCAPI class Ability const & getAbility(::AbilitiesIndex) const;

    // symbol: ?getBool@LayeredAbilities@@QEBA_NW4AbilitiesIndex@@@Z
    MCAPI bool getBool(::AbilitiesIndex) const;

    // symbol: ?getCommandPermissions@LayeredAbilities@@QEBA?AW4CommandPermissionLevel@@XZ
    MCAPI ::CommandPermissionLevel getCommandPermissions() const;

    // symbol: ?getFloat@LayeredAbilities@@QEBAMW4AbilitiesIndex@@@Z
    MCAPI float getFloat(::AbilitiesIndex) const;

    // symbol: ?getLayer@LayeredAbilities@@QEAAAEAVAbilities@@W4AbilitiesLayer@@@Z
    MCAPI class Abilities & getLayer(::AbilitiesLayer);

    // symbol: ?getPermissionsHandler@LayeredAbilities@@QEAAAEAVPermissionsHandler@@XZ
    MCAPI class PermissionsHandler & getPermissionsHandler();

    // symbol: ?getPlayerPermissions@LayeredAbilities@@QEBA?AW4PlayerPermissionLevel@@XZ
    MCAPI ::PlayerPermissionLevel getPlayerPermissions() const;

    // symbol: ?loadSaveData@LayeredAbilities@@QEAA_NAEBVCompoundTag@@@Z
    MCAPI bool loadSaveData(class CompoundTag const &);

    // symbol: ??4LayeredAbilities@@QEAAAEAV0@AEBV0@@Z
    MCAPI class LayeredAbilities & operator=(class LayeredAbilities const &);

    // symbol: ?setAbility@LayeredAbilities@@QEAAXW4AbilitiesIndex@@M@Z
    MCAPI void setAbility(::AbilitiesIndex, float);

    // symbol: ?setAbility@LayeredAbilities@@QEAAXW4AbilitiesIndex@@_N@Z
    MCAPI void setAbility(::AbilitiesIndex, bool);

    // symbol: ?setCommandPermissions@LayeredAbilities@@QEAAXW4CommandPermissionLevel@@@Z
    MCAPI void setCommandPermissions(::CommandPermissionLevel);

    // symbol: ?setPermissions@LayeredAbilities@@QEAAXAEBVPermissionsHandler@@@Z
    MCAPI void setPermissions(class PermissionsHandler const &);

    // symbol: ?setPlayerPermissions@LayeredAbilities@@QEAAXW4PlayerPermissionLevel@@@Z
    MCAPI void setPlayerPermissions(::PlayerPermissionLevel);

    // symbol: ?DIFF_LAYER_AT@LayeredAbilities@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const DIFF_LAYER_AT;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_handlePlayerPermissionsChange@LayeredAbilities@@AEAAXW4PlayerPermissionLevel@@0@Z
    MCAPI void _handlePlayerPermissionsChange(::PlayerPermissionLevel, ::PlayerPermissionLevel);

    // NOLINTEND

};

