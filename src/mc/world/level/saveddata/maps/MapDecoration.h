#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class MapDecoration {
public:
    // MapDecoration inner types define
    enum class Type {};
    
public:
    // prevent constructor by default
    MapDecoration& operator=(MapDecoration const &) = delete;
    MapDecoration(MapDecoration const &) = delete;
    MapDecoration() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0MapDecoration@@QEAA@W4Type@0@CCCAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVColor@mce@@@Z
    MCAPI MapDecoration(::MapDecoration::Type, int8_t, int8_t, int8_t, std::string const &, class mce::Color const &);

    // symbol: ?getColor@MapDecoration@@QEBAAEBVColor@mce@@XZ
    MCAPI class mce::Color const & getColor() const;

    // symbol: ?getImg@MapDecoration@@QEBA?AW4Type@1@XZ
    MCAPI ::MapDecoration::Type getImg() const;

    // symbol: ?getLabel@MapDecoration@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const & getLabel() const;

    // symbol: ?getRot@MapDecoration@@QEBACXZ
    MCAPI int8_t getRot() const;

    // symbol: ?getX@MapDecoration@@QEBACXZ
    MCAPI int8_t getX() const;

    // symbol: ?getY@MapDecoration@@QEBACXZ
    MCAPI int8_t getY() const;

    // symbol: ??1MapDecoration@@QEAA@XZ
    MCAPI ~MapDecoration();

    // NOLINTEND

};

