#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/CounterFlags.h"
#include "mc/deps/core/CounterFormat.h"

// auto generated forward declare list
// clang-format off
namespace Core::Profile { class CounterTokenMarker; }
// clang-format on

namespace Core::Profile {
    // NOLINTBEGIN
    // symbol: ?counterSet@Profile@Core@@YAXVCounterTokenMarker@12@_J@Z
    MCAPI void counterSet(class Core::Profile::CounterTokenMarker, int64);

    // symbol: ?generateCounterTokenWithConfig@Profile@Core@@YA?AVCounterTokenMarker@12@PEBDW4CounterFormat@12@_JW4CounterFlags@12@@Z
    MCAPI class Core::Profile::CounterTokenMarker generateCounterTokenWithConfig(char const *, ::Core::Profile::CounterFormat, int64, ::Core::Profile::CounterFlags);

    // symbol: ?initializeProfile@Profile@Core@@YAXXZ
    MCAPI void initializeProfile();

    // symbol: ?onFileOpenFailed@Profile@Core@@YAX_N@Z
    MCAPI void onFileOpenFailed(bool);

    // symbol: ?onFileOpenRequest@Profile@Core@@YAX_N@Z
    MCAPI void onFileOpenRequest(bool);

    // symbol: ?onFileOpenRetry@Profile@Core@@YAX_N@Z
    MCAPI void onFileOpenRetry(bool);

    // symbol: ?onFileOpenRetrySuccess@Profile@Core@@YAX_N@Z
    MCAPI void onFileOpenRetrySuccess(bool);

    // symbol: ?onMainThreadCreate@Profile@Core@@YAXXZ
    MCAPI void onMainThreadCreate();

    // symbol: ?onThreadDestroy@Profile@Core@@YAXXZ
    MCAPI void onThreadDestroy();

    // symbol: ?profileFlip@Profile@Core@@YAXXZ
    MCAPI void profileFlip();

    // symbol: ?shutdownProfile@Profile@Core@@YAXXZ
    MCAPI void shutdownProfile();
    // NOLINTEND

};
