#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct hc_websocket_impl {
public:
    // prevent constructor by default
    hc_websocket_impl& operator=(hc_websocket_impl const &) = delete;
    hc_websocket_impl(hc_websocket_impl const &) = delete;
    hc_websocket_impl() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1hc_websocket_impl@httpclient@xbox@@UEAA@XZ
    MCVAPI ~hc_websocket_impl();

    // NOLINTEND

};

};
