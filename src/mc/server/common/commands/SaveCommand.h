#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

class SaveCommand : public ::ServerCommand {
public:
    // SaveCommand inner types define
    enum class State {};
    
public:
    // prevent constructor by default
    SaveCommand& operator=(SaveCommand const &) = delete;
    SaveCommand(SaveCommand const &) = delete;
    SaveCommand() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?collectOptionalArguments@Command@@MEAA_NXZ
    virtual bool collectOptionalArguments();

    // vIndex: 2, symbol: ?execute@SaveCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;

    // symbol: ?setup@SaveCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?saveHold@SaveCommand@@CAXAEAVCommandOutput@@@Z
    MCAPI static void saveHold(class CommandOutput &);

    // symbol: ?saveResume@SaveCommand@@CAXAEAVCommandOutput@@@Z
    MCAPI static void saveResume(class CommandOutput &);

    // symbol: ?saveState@SaveCommand@@CAXAEAVCommandOutput@@@Z
    MCAPI static void saveState(class CommandOutput &);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mSaveAllFileList@SaveCommand@@0V?$vector@USnapshotFilenameAndLength@@V?$allocator@USnapshotFilenameAndLength@@@std@@@std@@A
    MCAPI static std::vector<struct SnapshotFilenameAndLength> mSaveAllFileList;

    // symbol: ?mSaveAllMutex@SaveCommand@@0Vmutex@std@@A
    MCAPI static std::mutex mSaveAllMutex;

    // symbol: ?mState@SaveCommand@@0W4State@1@A
    MCAPI static ::SaveCommand::State mState;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $mSaveAllFileList() { return mSaveAllFileList; }

    inline auto& $mSaveAllMutex() { return mSaveAllMutex; }

    inline auto& $mState() { return mState; }

    // NOLINTEND

};

