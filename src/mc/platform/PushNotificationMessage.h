#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PushNotificationMessage {
public:
    // prevent constructor by default
    PushNotificationMessage& operator=(PushNotificationMessage const &) = delete;
    PushNotificationMessage(PushNotificationMessage const &) = delete;
    PushNotificationMessage() = delete;

};

