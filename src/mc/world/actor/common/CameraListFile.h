#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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

    // symbol: ?bindType@CameraListFile@CameraPresetsInternals@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx &);

    // NOLINTEND

};

};
