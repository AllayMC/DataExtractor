#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct EncryptionRequest {
public:
    // prevent constructor by default
    EncryptionRequest& operator=(EncryptionRequest const &) = delete;
    EncryptionRequest(EncryptionRequest const &) = delete;
    EncryptionRequest() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1EncryptionRequest@CodeBuilder@@QEAA@XZ
    MCAPI ~EncryptionRequest();

    // NOLINTEND

};

};
