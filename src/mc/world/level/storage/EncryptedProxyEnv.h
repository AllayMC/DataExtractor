#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/EncryptedProxyReadMode.h"

class EncryptedProxyEnv {
public:
    // prevent constructor by default
    EncryptedProxyEnv& operator=(EncryptedProxyEnv const &) = delete;
    EncryptedProxyEnv(EncryptedProxyEnv const &) = delete;
    EncryptedProxyEnv() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?NewSequentialFile@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVSequentialFile@3@@Z
    virtual class leveldb::Status NewSequentialFile(std::string const &, class leveldb::SequentialFile **);

    // vIndex: 2, symbol: ?NewRandomAccessFile@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVRandomAccessFile@3@@Z
    virtual class leveldb::Status NewRandomAccessFile(std::string const &, class leveldb::RandomAccessFile **);

    // vIndex: 3, symbol: ?NewWritableFile@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
    virtual class leveldb::Status NewWritableFile(std::string const &, class leveldb::WritableFile **);

    // vIndex: 4, symbol: ?NewAppendableFile@Env@leveldb@@UEAA?AVStatus@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@2@@Z
    virtual class leveldb::Status NewAppendableFile(std::string const &, class leveldb::WritableFile **);

    // vIndex: 5, symbol: ?FileExists@EnvWrapper@leveldb@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool FileExists(std::string const &);

    // vIndex: 6, symbol: ?GetChildren@EnvWrapper@leveldb@@UEAA?AVStatus@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@@Z
    virtual class leveldb::Status GetChildren(std::string const &, std::vector<std::string> *);

    // vIndex: 7, symbol: ?DeleteFileA@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual class leveldb::Status DeleteFileA(std::string const &);

    // vIndex: 8, symbol: ?CreateDir@EnvWrapper@leveldb@@UEAA?AVStatus@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual class leveldb::Status CreateDir(std::string const &);

    // vIndex: 9, symbol: ?DeleteDir@EnvWrapper@leveldb@@UEAA?AVStatus@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual class leveldb::Status DeleteDir(std::string const &);

    // vIndex: 10, symbol: ?GetFileSize@EnvWrapper@leveldb@@UEAA?AVStatus@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEA_K@Z
    virtual class leveldb::Status GetFileSize(std::string const &, uint64_t *);

    // vIndex: 11, symbol: ?RenameFile@EncryptedProxyEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    virtual class leveldb::Status RenameFile(std::string const &, std::string const &);

    // vIndex: 12, symbol: ?LockFile@EnvWrapper@leveldb@@UEAA?AVStatus@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVFileLock@2@@Z
    virtual class leveldb::Status LockFile(std::string const &, class leveldb::FileLock **);

    // vIndex: 13, symbol: ?UnlockFile@EnvWrapper@leveldb@@UEAA?AVStatus@2@PEAVFileLock@2@@Z
    virtual class leveldb::Status UnlockFile(class leveldb::FileLock *);

    // vIndex: 14, symbol: ?Schedule@EnvWrapper@leveldb@@UEAAXP6AXPEAX@Z0@Z
    virtual void Schedule(void (__cdecl *)(void *), void *);

    // vIndex: 15, symbol: ?StartThread@EnvWrapper@leveldb@@UEAAXP6AXPEAX@Z0@Z
    virtual void StartThread(void (__cdecl *)(void *), void *);

    // vIndex: 16, symbol: ?GetTestDirectory@EnvWrapper@leveldb@@UEAA?AVStatus@2@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual class leveldb::Status GetTestDirectory(std::string *);

    // vIndex: 17, symbol: ?NewLogger@EnvWrapper@leveldb@@UEAA?AVStatus@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVLogger@2@@Z
    virtual class leveldb::Status NewLogger(std::string const &, class leveldb::Logger **);

    // vIndex: 18, symbol: ?NowMicros@EnvWrapper@leveldb@@UEAA_KXZ
    virtual uint64_t NowMicros();

    // vIndex: 19, symbol: ?SleepForMicroseconds@EnvWrapper@leveldb@@UEAAXH@Z
    virtual void SleepForMicroseconds(int32_t);

    // symbol: ??0EncryptedProxyEnv@@QEAA@PEAVEnv@leveldb@@AEBVContentIdentity@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4EncryptedProxyReadMode@@@Z
    MCAPI EncryptedProxyEnv(class leveldb::Env *, class ContentIdentity const &, std::string const &, ::EncryptedProxyReadMode);

    // NOLINTEND

};

