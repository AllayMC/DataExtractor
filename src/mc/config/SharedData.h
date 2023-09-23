#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ChatRestrictionLevel.h"

// auto generated forward declare list
// clang-format off
struct GameRuleId;
// clang-format on

namespace PlayerCapabilities {

struct SharedData {
public:
    // prevent constructor by default
    SharedData& operator=(SharedData const &) = delete;
    SharedData(SharedData const &) = delete;
    SharedData() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isGameRuleEnabled@SharedData@PlayerCapabilities@@UEBA?AV?$optional@_N@std@@UGameRuleId@@@Z
    virtual std::optional<bool> isGameRuleEnabled(struct GameRuleId) const;

    // vIndex: 2, symbol: ?getChatRestrictionLevel@SharedData@PlayerCapabilities@@UEBA?AW4ChatRestrictionLevel@@XZ
    virtual ::ChatRestrictionLevel getChatRestrictionLevel() const;

    // NOLINTEND

};

};
