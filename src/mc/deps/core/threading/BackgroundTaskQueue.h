#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BackgroundTaskQueue {
public:
    // prevent constructor by default
    BackgroundTaskQueue& operator=(BackgroundTaskQueue const &) = delete;
    BackgroundTaskQueue(BackgroundTaskQueue const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0BackgroundTaskQueue@@QEAA@XZ
    MCAPI BackgroundTaskQueue();

    // symbol: ?flush@BackgroundTaskQueue@@QEAAXXZ
    MCAPI void flush();

    // symbol: ?queue@BackgroundTaskQueue@@QEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@_N@Z
    MCAPI void queue(std::shared_ptr<class BackgroundTaskBase>, bool);

    // symbol: ?tryPop@BackgroundTaskQueue@@QEAA?AV?$shared_ptr@VBackgroundTaskBase@@@std@@H@Z
    MCAPI std::shared_ptr<class BackgroundTaskBase> tryPop(int32_t);

    // symbol: ??1BackgroundTaskQueue@@QEAA@XZ
    MCAPI ~BackgroundTaskQueue();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_fetchAllAvailableTasks@BackgroundTaskQueue@@AEAA_NXZ
    MCAPI bool _fetchAllAvailableTasks();

    // NOLINTEND

};

