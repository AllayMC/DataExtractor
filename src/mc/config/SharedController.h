#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/ISharedController.h"

// auto generated forward declare list
// clang-format off
namespace PlayerCapabilities { struct IPlayerData; }
namespace PlayerCapabilities { struct ISharedController; }
// clang-format on

namespace PlayerCapabilities {

class SharedController : public ::PlayerCapabilities::ISharedController {
public:
    // prevent constructor by default
    SharedController& operator=(SharedController const &) = delete;
    SharedController(SharedController const &) = delete;
    SharedController() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?canChat@SharedController@PlayerCapabilities@@UEBA_NAEBUIPlayerData@2@@Z
    virtual bool canChat(struct PlayerCapabilities::IPlayerData const &) const;

    // vIndex: 2, symbol: ?canTell@SharedController@PlayerCapabilities@@UEBA_NAEBUIPlayerData@2@@Z
    virtual bool canTell(struct PlayerCapabilities::IPlayerData const &) const;

    // vIndex: 3, symbol: ?canOpenChat@SharedController@PlayerCapabilities@@UEBA_NAEBUIPlayerData@2@@Z
    virtual bool canOpenChat(struct PlayerCapabilities::IPlayerData const &) const;

    // NOLINTEND

};

};
