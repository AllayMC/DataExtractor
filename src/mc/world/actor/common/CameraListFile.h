#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraPresetsInternals {

struct CameraListFile {
public:
    // prevent constructor by default
    CameraListFile& operator=(CameraListFile const &) = delete;
    CameraListFile(CameraListFile const &) = delete;
    CameraListFile() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1CameraListFile@CameraPresetsInternals@@QEAA@XZ
    MCAPI ~CameraListFile();

    // symbol: ?bindType@CameraListFile@CameraPresetsInternals@@SAXXZ
    MCAPI static void bindType();

    // NOLINTEND

};

};
