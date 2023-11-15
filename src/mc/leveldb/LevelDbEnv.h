#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbEnv {
public:
    // prevent constructor by default
    LevelDbEnv& operator=(LevelDbEnv const &) = delete;
    LevelDbEnv(LevelDbEnv const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ?CreateDir@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI class leveldb::Status CreateDir(std::string const &);

    // symbol: ?DeleteDir@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI class leveldb::Status DeleteDir(std::string const &);

    // symbol: ?DeleteFileA@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI class leveldb::Status DeleteFileA(std::string const &);

    // symbol: ?FileExists@LevelDbEnv@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI bool FileExists(std::string const &);

    // symbol: ?GetChildren@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@@Z
    MCVAPI class leveldb::Status GetChildren(std::string const &, std::vector<std::string> *);

    // symbol: ?GetFileSize@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEA_K@Z
    MCVAPI class leveldb::Status GetFileSize(std::string const &, uint64_t *);

    // symbol: ?GetTestDirectory@LevelDbEnv@@UEAA?AVStatus@leveldb@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI class leveldb::Status GetTestDirectory(std::string *);

    // symbol: ?LockFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVFileLock@3@@Z
    MCVAPI class leveldb::Status LockFile(std::string const &, class leveldb::FileLock **);

    // symbol: ?NewAppendableFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
    MCVAPI class leveldb::Status NewAppendableFile(std::string const &, class leveldb::WritableFile **);

    // symbol: ?NewLogger@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVLogger@3@@Z
    MCVAPI class leveldb::Status NewLogger(std::string const &, class leveldb::Logger **);

    // symbol: ?NewRandomAccessFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVRandomAccessFile@3@@Z
    MCVAPI class leveldb::Status NewRandomAccessFile(std::string const &, class leveldb::RandomAccessFile **);

    // symbol: ?NewSequentialFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVSequentialFile@3@@Z
    MCVAPI class leveldb::Status NewSequentialFile(std::string const &, class leveldb::SequentialFile **);

    // symbol: ?NewWritableFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
    MCVAPI class leveldb::Status NewWritableFile(std::string const &, class leveldb::WritableFile **);

    // symbol: ?NowMicros@LevelDbEnv@@UEAA_KXZ
    MCVAPI uint64_t NowMicros();

    // symbol: ?RenameFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCVAPI class leveldb::Status RenameFile(std::string const &, std::string const &);

    // symbol: ?Schedule@LevelDbEnv@@UEAAXP6AXPEAX@Z0@Z
    MCVAPI void Schedule(void (__cdecl *)(void *), void *);

    // symbol: ?SleepForMicroseconds@LevelDbEnv@@UEAAXH@Z
    MCVAPI void SleepForMicroseconds(int32_t);

    // symbol: ?StartThread@LevelDbEnv@@UEAAXP6AXPEAX@Z0@Z
    MCVAPI void StartThread(void (__cdecl *)(void *), void *);

    // symbol: ?UnlockFile@LevelDbEnv@@UEAA?AVStatus@leveldb@@PEAVFileLock@3@@Z
    MCVAPI class leveldb::Status UnlockFile(class leveldb::FileLock *);

    // symbol: ??1LevelDbEnv@@UEAA@XZ
    MCVAPI ~LevelDbEnv();

    // symbol: ?IsComplete@LevelDbEnv@@QEBA_NXZ
    MCAPI bool IsComplete() const;

    // symbol: ??0LevelDbEnv@@QEAA@XZ
    MCAPI LevelDbEnv();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?sSingleton@LevelDbEnv@@0PEAV1@EA
    MCAPI static class LevelDbEnv * sSingleton;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $sSingleton() { return sSingleton; }

    // NOLINTEND

};

