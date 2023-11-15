#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class CraftingContext {
public:
    // CraftingContext inner types declare
    // clang-format off
    class Impl;
    // clang-format on
    
    // CraftingContext inner types define
    class Impl {
    public:
        // prevent constructor by default
        Impl& operator=(Impl const &) = delete;
        Impl(Impl const &) = delete;
        Impl() = delete;
    
    public:
        // NOLINTBEGIN
        // symbol: ??0Impl@CraftingContext@@QEAA@V?$not_null@V?$NonOwnerPointer@VILevel@@@Bedrock@@@gsl@@@Z
        MCAPI Impl(class gsl::not_null<class Bedrock::NonOwnerPointer<class ILevel>>);
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    CraftingContext& operator=(CraftingContext const &) = delete;
    CraftingContext(CraftingContext const &) = delete;
    CraftingContext() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0CraftingContext@@QEAA@V?$not_null@V?$NonOwnerPointer@VILevel@@@Bedrock@@@gsl@@@Z
    MCAPI CraftingContext(class gsl::not_null<class Bedrock::NonOwnerPointer<class ILevel>>);

    // symbol: ?getBaseGameVersion@CraftingContext@@QEBA?AVBaseGameVersion@@XZ
    MCAPI class BaseGameVersion getBaseGameVersion() const;

    // symbol: ?getTrimMaterialRegistry@CraftingContext@@QEBA?BV?$weak_ptr@$$CBVTrimMaterialRegistry@@@std@@XZ
    MCAPI std::weak_ptr<class TrimMaterialRegistry const> const getTrimMaterialRegistry() const;

    // symbol: ?getTrimPatternRegistry@CraftingContext@@QEAA?BV?$weak_ptr@VTrimPatternRegistry@@@std@@XZ
    MCAPI std::weak_ptr<class TrimPatternRegistry> const getTrimPatternRegistry();

    // symbol: ?getTrimPatternRegistry@CraftingContext@@QEBA?BV?$weak_ptr@$$CBVTrimPatternRegistry@@@std@@XZ
    MCAPI std::weak_ptr<class TrimPatternRegistry const> const getTrimPatternRegistry() const;

    // symbol: ??1CraftingContext@@QEAA@XZ
    MCAPI ~CraftingContext();

    // NOLINTEND

};

