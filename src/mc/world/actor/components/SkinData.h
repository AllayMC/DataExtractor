#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct SkinData {
public:
    // prevent constructor by default
    SkinData& operator=(SkinData const &) = delete;
    SkinData(SkinData const &) = delete;
    SkinData() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0SkinData@@QEAA@AEBVActor@@@Z
    MCAPI SkinData(class Actor const &);

    // symbol: ??0SkinData@@QEAA@AEBVValue@Json@@@Z
    MCAPI SkinData(class Json::Value const &);

    // symbol: ?applyToActor@SkinData@@QEBAXAEAVActor@@@Z
    MCAPI void applyToActor(class Actor &) const;

    // symbol: ?softMatch@SkinData@@QEBA_NAEBU1@AEA_N@Z
    MCAPI bool softMatch(struct SkinData const &, bool &) const;

    // NOLINTEND

};

