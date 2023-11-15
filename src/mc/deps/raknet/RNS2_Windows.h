#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/RNS2BindResult.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class SocketLayerOverride; }
namespace RakNet { struct RNS2_BerkleyBindParameters; }
namespace RakNet { struct RNS2_SendParameters; }
// clang-format on

namespace RakNet {

class RNS2_Windows {
public:
    // prevent constructor by default
    RNS2_Windows& operator=(RNS2_Windows const &) = delete;
    RNS2_Windows(RNS2_Windows const &) = delete;
    RNS2_Windows() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?Send@RNS2_Windows@RakNet@@UEAAHPEAURNS2_SendParameters@2@PEBDI@Z
    virtual int32_t Send(struct RakNet::RNS2_SendParameters *, char const *, uint32_t);

    // vIndex: 2, symbol: ?SetMulticastInterface@RNS2_Berkley@RakNet@@UEAAXH@Z
    virtual void SetMulticastInterface(int32_t);

    // vIndex: 3, symbol: ?Bind@RNS2_Windows@RakNet@@UEAA?AW4RNS2BindResult@2@PEAURNS2_BerkleyBindParameters@2@PEBDI@Z
    virtual ::RakNet::RNS2BindResult Bind(struct RakNet::RNS2_BerkleyBindParameters *, char const *, uint32_t);

    // symbol: ?GetSocketLayerOverride@RNS2_Windows@RakNet@@QEAAPEAVSocketLayerOverride@2@XZ
    MCAPI class RakNet::SocketLayerOverride * GetSocketLayerOverride();

    // NOLINTEND

};

};
