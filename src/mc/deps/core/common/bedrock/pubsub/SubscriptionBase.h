#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub {

class SubscriptionBase {
public:
    // prevent constructor by default
    SubscriptionBase& operator=(SubscriptionBase const &) = delete;
    SubscriptionBase(SubscriptionBase const &) = delete;
    SubscriptionBase() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?disconnect@SubscriptionBase@PubSub@Bedrock@@QEAAXXZ
    MCAPI void disconnect();

    // symbol: ??8SubscriptionBase@PubSub@Bedrock@@QEBA_NAEBV012@@Z
    MCAPI bool operator==(class Bedrock::PubSub::SubscriptionBase const &) const;

    // NOLINTEND

};

};
