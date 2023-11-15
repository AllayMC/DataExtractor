#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OS { struct ThreadPoolActionStatus; }
// clang-format on

namespace OS {

class ThreadPool {
public:
    // prevent constructor by default
    ThreadPool& operator=(ThreadPool const &) = delete;
    ThreadPool(ThreadPool const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ?Initialize@ThreadPool@OS@@QEAAJPEAXP6AX0AEAUThreadPoolActionStatus@2@@Z@Z
    MCAPI long Initialize(void *, void (__cdecl *)(void *, struct OS::ThreadPoolActionStatus &));

    // symbol: ?Submit@ThreadPool@OS@@QEAAXXZ
    MCAPI void Submit();

    // symbol: ?Terminate@ThreadPool@OS@@QEAAXXZ
    MCAPI void Terminate();

    // symbol: ??0ThreadPool@OS@@QEAA@XZ
    MCAPI ThreadPool();

    // symbol: ??1ThreadPool@OS@@QEAA@XZ
    MCAPI ~ThreadPool();

    // NOLINTEND

};

};
