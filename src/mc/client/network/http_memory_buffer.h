#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

class http_memory_buffer {
public:
    // prevent constructor by default
    http_memory_buffer& operator=(http_memory_buffer const &) = delete;
    http_memory_buffer(http_memory_buffer const &) = delete;
    http_memory_buffer() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1http_memory_buffer@httpclient@xbox@@QEAA@XZ
    MCAPI ~http_memory_buffer();

    // NOLINTEND

};

};
