#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/MinecraftPacketIds.h"

class ClassroomModeNetworkHandler {
public:
    // prevent constructor by default
    ClassroomModeNetworkHandler& operator=(ClassroomModeNetworkHandler const &) = delete;
    ClassroomModeNetworkHandler(ClassroomModeNetworkHandler const &) = delete;
    ClassroomModeNetworkHandler() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?allowIncomingPacketId@ClassroomModeNetworkHandler@@UEAA_NAEBVNetworkIdentifier@@W4MinecraftPacketIds@@@Z
    MCVAPI bool allowIncomingPacketId(class NetworkIdentifier const &, ::MinecraftPacketIds);

    // symbol: ?onWebsocketRequest@ClassroomModeNetworkHandler@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0V?$function@$$A6AXXZ@3@@Z
    MCVAPI void onWebsocketRequest(std::string const &, std::string const &, std::function<void (void)>);

    // symbol: ??0ClassroomModeNetworkHandler@@QEAA@_N@Z
    MCAPI ClassroomModeNetworkHandler(bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_connect@ClassroomModeNetworkHandler@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _connect(std::string const &);

    // NOLINTEND

};

