#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace RakNet { class BitStream; }
// clang-format on

class LevelData {
public:
    // prevent constructor by default
    LevelData& operator=(LevelData const&);
    LevelData(LevelData const&);
    LevelData();

public:
    // symbol: ?getExperiments@LevelData@@QEAAAEAVExperiments@@XZ
    MCAPI class Experiments& getExperiments();

    // symbol: ?getExperiments@LevelData@@QEBAAEBVExperiments@@XZ
    MCAPI class Experiments const& getExperiments() const;
};
