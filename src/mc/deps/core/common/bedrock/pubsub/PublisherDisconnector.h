#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub::Detail {

class PublisherDisconnector {
public:
    // prevent constructor by default
    PublisherDisconnector& operator=(PublisherDisconnector const &) = delete;
    PublisherDisconnector(PublisherDisconnector const &) = delete;
    PublisherDisconnector() = delete;

};

};
