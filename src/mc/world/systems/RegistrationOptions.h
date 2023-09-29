#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaSystemsRegistration {

struct RegistrationOptions {
public:
    // prevent constructor by default
    RegistrationOptions& operator=(RegistrationOptions const &) = delete;
    RegistrationOptions(RegistrationOptions const &) = delete;
    RegistrationOptions() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1RegistrationOptions@VanillaSystemsRegistration@@QEAA@XZ
    MCAPI ~RegistrationOptions();

    // NOLINTEND

};

};
