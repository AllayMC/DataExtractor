#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraPresetsInternals {

struct CameraPresetFile {
public:
    // prevent constructor by default
    CameraPresetFile& operator=(CameraPresetFile const &) = delete;
    CameraPresetFile(CameraPresetFile const &) = delete;
    CameraPresetFile() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1CameraPresetFile@CameraPresetsInternals@@QEAA@XZ
    MCAPI ~CameraPresetFile();

    // symbol: ?bindType@CameraPresetFile@CameraPresetsInternals@@SAXXZ
    MCAPI static void bindType();

    // NOLINTEND

};

};
