#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Ability {
public:
    // Ability inner types define
    enum class Options {};
    
    enum class Type {};
    
public:
    // prevent constructor by default
    Ability& operator=(Ability const &) = delete;
    Ability(Ability const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0Ability@@QEAA@_NW4Options@0@@Z
    MCAPI Ability(bool, ::Ability::Options);

    // symbol: ??0Ability@@QEAA@XZ
    MCAPI Ability();

    // symbol: ?getBool@Ability@@QEBA_NXZ
    MCAPI bool getBool() const;

    // symbol: ?getFloat@Ability@@QEBAMXZ
    MCAPI float getFloat() const;

    // symbol: ?getType@Ability@@QEBA?AW4Type@1@XZ
    MCAPI ::Ability::Type getType() const;

    // symbol: ?hasOption@Ability@@QEBA_NW4Options@1@@Z
    MCAPI bool hasOption(::Ability::Options) const;

    // symbol: ?isSet@Ability@@QEBA_NXZ
    MCAPI bool isSet() const;

    // symbol: ??9Ability@@QEBA_NAEBV0@@Z
    MCAPI bool operator!=(class Ability const &) const;

    // symbol: ?setBool@Ability@@QEAAX_N@Z
    MCAPI void setBool(bool);

    // symbol: ?setFloat@Ability@@QEAAXM@Z
    MCAPI void setFloat(float);

    // symbol: ?unSet@Ability@@QEAAXXZ
    MCAPI void unSet();

    // NOLINTEND

};

