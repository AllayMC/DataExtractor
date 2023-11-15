#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class CrashDumpLog {
public:
    // prevent constructor by default
    CrashDumpLog& operator=(CrashDumpLog const &) = delete;
    CrashDumpLog(CrashDumpLog const &) = delete;
    CrashDumpLog() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?logEvent@CrashDumpLog@@SAXAEBUCrashDumpEventData@@@Z
    MCAPI static void logEvent(struct CrashDumpEventData const &);

    // symbol: ?logFrame@CrashDumpLog@@SAXAEBUCrashDumpFrameData@@@Z
    MCAPI static void logFrame(struct CrashDumpFrameData const &);

    // symbol: ?logKeyValue@CrashDumpLog@@SAXAEBUCrashDumpKeyValueData@@@Z
    MCAPI static void logKeyValue(struct CrashDumpKeyValueData const &);

    // symbol: ?setAssertMessage@CrashDumpLog@@SAXPEBDH00@Z
    MCAPI static void setAssertMessage(char const *, int32_t, char const *, char const *);

    // symbol: ?setDeviceSessionID@CrashDumpLog@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static bool setDeviceSessionID(std::string const &);

    // symbol: ?setGameVersion@CrashDumpLog@@SAXPEBD@Z
    MCAPI static void setGameVersion(char const *);

    // symbol: ?setPlatform@CrashDumpLog@@SAXPEBD@Z
    MCAPI static void setPlatform(char const *);

    // symbol: ?setTotalMemory@CrashDumpLog@@SAX_K@Z
    MCAPI static void setTotalMemory(uint64_t);

    // symbol: ?startCrashDumpLogThread@CrashDumpLog@@SA_NXZ
    MCAPI static bool startCrashDumpLogThread();

    // symbol: ?stopCrashDumpLogThread@CrashDumpLog@@SAXXZ
    MCAPI static void stopCrashDumpLogThread();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?crashDumpLogThreadRoutine@CrashDumpLog@@CAXXZ
    MCAPI static void crashDumpLogThreadRoutine();

    // NOLINTEND

protected:
    // NOLINTBEGIN
    // symbol: ?mAllData@CrashDumpLog@@1PEAUCrashDump_AllData@@EA
    MCAPI static struct CrashDump_AllData * mAllData;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mAssertDataMutex@CrashDumpLog@@0VMutex@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::Mutex mAssertDataMutex;

    // symbol: ?mCrashDumpLog_logThread@CrashDumpLog@@0V?$unique_ptr@Vthread@std@@U?$default_delete@Vthread@std@@@2@@std@@A
    MCAPI static std::unique_ptr<std::thread> mCrashDumpLog_logThread;

    // symbol: ?mCrashDumpThreadMutex@CrashDumpLog@@0VMutex@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::Mutex mCrashDumpThreadMutex;

    // symbol: ?mCrashDumpThreadMutexCV@CrashDumpLog@@0Vcondition_variable@std@@A
    MCAPI static std::condition_variable mCrashDumpThreadMutexCV;

    // symbol: ?mEventDataMutex@CrashDumpLog@@0VMutex@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::Mutex mEventDataMutex;

    // symbol: ?mFrameDataMutex@CrashDumpLog@@0VMutex@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::Mutex mFrameDataMutex;

    // symbol: ?mGameplayDataMutex@CrashDumpLog@@0VMutex@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::Mutex mGameplayDataMutex;

    // symbol: ?mGlobalDataMutex@CrashDumpLog@@0VMutex@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::Mutex mGlobalDataMutex;

    // symbol: ?mIsThreadRunning@CrashDumpLog@@0_NA
    MCAPI static bool mIsThreadRunning;

    // symbol: ?mKeyValueDataMutex@CrashDumpLog@@0VMutex@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::Mutex mKeyValueDataMutex;

    // symbol: ?mPlayerDataMutex@CrashDumpLog@@0VMutex@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::Mutex mPlayerDataMutex;

    // symbol: ?mRenderDataMutex@CrashDumpLog@@0VMutex@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::Mutex mRenderDataMutex;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $mAssertDataMutex() { return mAssertDataMutex; }

    inline auto& $mCrashDumpLog_logThread() { return mCrashDumpLog_logThread; }

    inline auto& $mCrashDumpThreadMutex() { return mCrashDumpThreadMutex; }

    inline auto& $mCrashDumpThreadMutexCV() { return mCrashDumpThreadMutexCV; }

    inline auto& $mEventDataMutex() { return mEventDataMutex; }

    inline auto& $mFrameDataMutex() { return mFrameDataMutex; }

    inline auto& $mGameplayDataMutex() { return mGameplayDataMutex; }

    inline auto& $mGlobalDataMutex() { return mGlobalDataMutex; }

    inline auto& $mIsThreadRunning() { return mIsThreadRunning; }

    inline auto& $mKeyValueDataMutex() { return mKeyValueDataMutex; }

    inline auto& $mPlayerDataMutex() { return mPlayerDataMutex; }

    inline auto& $mRenderDataMutex() { return mRenderDataMutex; }

    // NOLINTEND

};

