#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/LocklessQueue.h"
#include "mc/enums/ApiId.h"
#include "mc/enums/XTaskQueueDispatchMode.h"

// auto generated forward declare list
// clang-format off
namespace OS { struct ThreadPoolActionStatus; }
// clang-format on

class TaskQueuePortImpl {
public:
    // TaskQueuePortImpl inner types declare
    // clang-format off
    struct QueueEntry;
    struct TerminationEntry;
    struct WaitRegistration;
    // clang-format on
    
    // TaskQueuePortImpl inner types define
    struct QueueEntry {
    public:
        // prevent constructor by default
        QueueEntry& operator=(QueueEntry const &) = delete;
        QueueEntry(QueueEntry const &) = delete;
        QueueEntry() = delete;
    
    };
    
    struct TerminationEntry {
    public:
        // prevent constructor by default
        TerminationEntry& operator=(TerminationEntry const &) = delete;
        TerminationEntry(TerminationEntry const &) = delete;
        TerminationEntry() = delete;
    
    };
    
    struct WaitRegistration {
    public:
        // prevent constructor by default
        WaitRegistration& operator=(WaitRegistration const &) = delete;
        WaitRegistration(WaitRegistration const &) = delete;
        WaitRegistration() = delete;
    
    };
    
public:
    // prevent constructor by default
    TaskQueuePortImpl& operator=(TaskQueuePortImpl const &) = delete;
    TaskQueuePortImpl(TaskQueuePortImpl const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?Release@?$Api@$00UITaskQueuePort@@@@UEAAIXZ
    virtual uint32_t Release();

    // vIndex: 2, symbol: ?QueryApi@?$Api@$00UITaskQueuePort@@@@UEAAJW4ApiId@@PEAPEAX@Z
    virtual long QueryApi(::ApiId, void **);

    // vIndex: 3, symbol: ?GetHandle@TaskQueuePortImpl@@UEAAPEAUXTaskQueuePortObject@@XZ
    virtual struct XTaskQueuePortObject * GetHandle();

    // vIndex: 4, symbol: ?QueueItem@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@IPEAXP6AX1_N@Z@Z
    virtual long QueueItem(struct ITaskQueuePortContext *, uint32_t, void *, void (__cdecl *)(void *, bool));

    // vIndex: 5, symbol: ?RegisterWaitHandle@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@PEAX1P6AX1_N@ZPEAUXTaskQueueRegistrationToken@@@Z
    virtual long RegisterWaitHandle(struct ITaskQueuePortContext *, void *, void *, void (__cdecl *)(void *, bool), struct XTaskQueueRegistrationToken *);

    // vIndex: 6, symbol: ?UnregisterWaitHandle@TaskQueuePortImpl@@UEAAXUXTaskQueueRegistrationToken@@@Z
    virtual void UnregisterWaitHandle(struct XTaskQueueRegistrationToken);

    // vIndex: 7, symbol: ?PrepareTerminate@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@PEAXP6AX1@ZPEAPEAX@Z
    virtual long PrepareTerminate(struct ITaskQueuePortContext *, void *, void (__cdecl *)(void *), void **);

    // vIndex: 8, symbol: ?CancelTermination@TaskQueuePortImpl@@UEAAXPEAX@Z
    virtual void CancelTermination(void *);

    // vIndex: 9, symbol: ?Terminate@TaskQueuePortImpl@@UEAAXPEAX@Z
    virtual void Terminate(void *);

    // vIndex: 10, symbol: ?Attach@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@@Z
    virtual long Attach(struct ITaskQueuePortContext *);

    // vIndex: 11, symbol: ?Detach@TaskQueuePortImpl@@UEAAXPEAUITaskQueuePortContext@@@Z
    virtual void Detach(struct ITaskQueuePortContext *);

    // vIndex: 12, symbol: ?Dispatch@TaskQueuePortImpl@@UEAA_NPEAUITaskQueuePortContext@@I@Z
    virtual bool Dispatch(struct ITaskQueuePortContext *, uint32_t);

    // vIndex: 13, symbol: ?IsEmpty@TaskQueuePortImpl@@UEAA_NXZ
    virtual bool IsEmpty();

    // vIndex: 14, symbol: ?SuspendTermination@TaskQueuePortImpl@@UEAAJPEAUITaskQueuePortContext@@@Z
    virtual long SuspendTermination(struct ITaskQueuePortContext *);

    // vIndex: 15, symbol: ?ResumeTermination@TaskQueuePortImpl@@UEAAXPEAUITaskQueuePortContext@@@Z
    virtual void ResumeTermination(struct ITaskQueuePortContext *);

    // vIndex: 16, symbol: ?SuspendPort@TaskQueuePortImpl@@UEAAXXZ
    virtual void SuspendPort();

    // vIndex: 17, symbol: ?ResumePort@TaskQueuePortImpl@@UEAAXXZ
    virtual void ResumePort();

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18();

    // vIndex: 19, symbol: ?QueryApiImpl@?$Api@$00UITaskQueuePort@@@@MEAAPEAXW4ApiId@@@Z
    virtual void * QueryApiImpl(::ApiId);

    // symbol: ??1TaskQueuePortImpl@@UEAA@XZ
    MCVAPI ~TaskQueuePortImpl();

    // symbol: ?Initialize@TaskQueuePortImpl@@QEAAJW4XTaskQueueDispatchMode@@@Z
    MCAPI long Initialize(::XTaskQueueDispatchMode);

    // symbol: ??0TaskQueuePortImpl@@QEAA@XZ
    MCAPI TaskQueuePortImpl();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?AppendEntry@TaskQueuePortImpl@@AEAA_NAEBUQueueEntry@1@_K@Z
    MCAPI bool AppendEntry(struct TaskQueuePortImpl::QueueEntry const &, uint64_t);

    // symbol: ?AppendWaitRegistrationEntry@TaskQueuePortImpl@@AEAA_NPEAUWaitRegistration@1@@Z
    MCAPI bool AppendWaitRegistrationEntry(struct TaskQueuePortImpl::WaitRegistration *);

    // symbol: ?CancelPendingEntries@TaskQueuePortImpl@@AEAAXPEAUITaskQueuePortContext@@_N@Z
    MCAPI void CancelPendingEntries(struct ITaskQueuePortContext *, bool);

    // symbol: ?DrainOneItem@TaskQueuePortImpl@@AEAA_NAEAUThreadPoolActionStatus@OS@@@Z
    MCAPI bool DrainOneItem(struct OS::ThreadPoolActionStatus &);

    // symbol: ?InitializeWaitRegistration@TaskQueuePortImpl@@AEAAJPEAUWaitRegistration@1@@Z
    MCAPI long InitializeWaitRegistration(struct TaskQueuePortImpl::WaitRegistration *);

    // symbol: ?NotifyItemQueued@TaskQueuePortImpl@@AEAAXXZ
    MCAPI void NotifyItemQueued();

    // symbol: ?ProcessThreadPoolCallback@TaskQueuePortImpl@@AEAAXAEAUThreadPoolActionStatus@OS@@@Z
    MCAPI void ProcessThreadPoolCallback(struct OS::ThreadPoolActionStatus &);

    // symbol: ?ScheduleTermination@TaskQueuePortImpl@@AEAAXPEAUTerminationEntry@1@@Z
    MCAPI void ScheduleTermination(struct TaskQueuePortImpl::TerminationEntry *);

    // symbol: ?SubmitPendingCallback@TaskQueuePortImpl@@AEAAXXZ
    MCAPI void SubmitPendingCallback();

    // symbol: ?Wait@TaskQueuePortImpl@@AEAA_NPEAUITaskQueuePortContext@@I@Z
    MCAPI bool Wait(struct ITaskQueuePortContext *, uint32_t);

    // symbol: ?EraseQueue@TaskQueuePortImpl@@CAXPEAV?$LocklessQueue@UQueueEntry@TaskQueuePortImpl@@@@@Z
    MCAPI static void EraseQueue(class LocklessQueue<struct TaskQueuePortImpl::QueueEntry> *);

    // symbol: ?WaitCallback@TaskQueuePortImpl@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@K@Z
    MCAPI static void WaitCallback(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, unsigned long);

    // NOLINTEND

};

