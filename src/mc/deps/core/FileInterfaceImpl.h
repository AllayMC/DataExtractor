#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/IFile.h"

// auto generated forward declare list
// clang-format off
namespace Core { class IFile; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class FileInterfaceImpl : public ::Core::IFile {
public:
    // prevent constructor by default
    FileInterfaceImpl& operator=(FileInterfaceImpl const &) = delete;
    FileInterfaceImpl(FileInterfaceImpl const &) = delete;
    FileInterfaceImpl() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?readExactly@FileInterfaceImpl@Core@@UEAA?AVResult@2@PEAX_K@Z
    virtual class Core::Result readExactly(void *, uint64_t);

    // vIndex: 2, symbol: ?readAtPosition@FileInterfaceImpl@Core@@UEAA?AVResult@2@_KPEAX0PEA_K@Z
    virtual class Core::Result readAtPosition(uint64_t, void *, uint64_t, uint64_t *);

    // vIndex: 3, symbol: ?getSize@FileInterfaceImpl@Core@@UEAA?AVResult@2@PEA_K@Z
    virtual class Core::Result getSize(uint64_t *);

    // NOLINTEND

};

};
