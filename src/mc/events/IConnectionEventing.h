#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IConnectionEventing {
public:
    // IConnectionEventing inner types define
    enum class ConnectionFailureReason {};
    
    enum class PlayerJoinWorldAttemptState {};
    
    enum class ServerConnectionOutcome {};
    
    enum class SignalServiceConnectState {};
    
public:
    // prevent constructor by default
    IConnectionEventing& operator=(IConnectionEventing const &) = delete;
    IConnectionEventing(IConnectionEventing const &) = delete;
    IConnectionEventing() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1IConnectionEventing@@UEAA@XZ
    MCVAPI ~IConnectionEventing();

    // NOLINTEND

};

