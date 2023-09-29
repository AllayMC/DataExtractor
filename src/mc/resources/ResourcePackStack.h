#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class ResourcePackStack {
public:
    // prevent constructor by default
    ResourcePackStack& operator=(ResourcePackStack const &) = delete;
    ResourcePackStack(ResourcePackStack const &) = delete;
    ResourcePackStack() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?loadAllVersionsOf@ResourcePackStack@@UEBA?AV?$vector@VLoadedResourceData@@V?$allocator@VLoadedResourceData@@@std@@@std@@AEBVResourceLocation@@@Z
    virtual std::vector<class LoadedResourceData> loadAllVersionsOf(class ResourceLocation const &) const;

    // vIndex: 2, symbol: ?loadAllVersionsOf@ResourcePackStack@@UEBA_NAEBVResourceLocation@@AEAVResourcePackMergeStrategy@@@Z
    virtual bool loadAllVersionsOf(class ResourceLocation const &, class ResourcePackMergeStrategy &) const;

    // vIndex: 3, symbol: ?loadAllVersionsOf@ResourcePackStack@@UEBA_NAEBVResourceLocation@@AEBV?$function@$$A6A_NAEBVPackInstance@@@Z@std@@AEAVResourcePackMergeStrategy@@@Z
    virtual bool loadAllVersionsOf(class ResourceLocation const &, std::function<bool (class PackInstance const &)> const &, class ResourcePackMergeStrategy &) const;

    // symbol: ??1ResourcePackStack@@UEAA@XZ
    MCVAPI ~ResourcePackStack();

    // symbol: ?add@ResourcePackStack@@QEAAXVPackInstance@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIResourcePackRepository@@@Bedrock@@@gsl@@_N@Z
    MCAPI void add(class PackInstance, gsl::not_null<class Bedrock::NonOwnerPointer<class IResourcePackRepository const>> const &, bool);

    // symbol: ?getSplitStacks@ResourcePackStack@@QEBAXAEAV1@0@Z
    MCAPI void getSplitStacks(class ResourcePackStack &, class ResourcePackStack &) const;

    // symbol: ?hasCapabilityInStack@ResourcePackStack@@QEBA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI bool hasCapabilityInStack(std::string_view) const;

    // symbol: ?hasPlatformLockedContent@ResourcePackStack@@QEBA_NXZ
    MCAPI bool hasPlatformLockedContent() const;

    // symbol: ?removeDuplicates@ResourcePackStack@@QEAAXXZ
    MCAPI void removeDuplicates();

    // symbol: ?removeIf@ResourcePackStack@@QEAAXAEBV?$function@$$A6A_NAEBVPackInstance@@@Z@std@@@Z
    MCAPI void removeIf(std::function<bool (class PackInstance const &)> const &);

    // symbol: ?removeInvalidPacks@ResourcePackStack@@QEAAXXZ
    MCAPI void removeInvalidPacks();

    // symbol: ?deserialize@ResourcePackStack@@SA?AV?$unique_ptr@VResourcePackStack@@U?$default_delete@VResourcePackStack@@@std@@@std@@AEAV?$basic_istream@DU?$char_traits@D@std@@@3@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIResourcePackRepository@@@Bedrock@@@gsl@@@Z
    MCAPI static std::unique_ptr<class ResourcePackStack> deserialize(std::istream &, gsl::not_null<class Bedrock::NonOwnerPointer<class IResourcePackRepository const>> const &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_populateDependencies@ResourcePackStack@@CAXAEAV?$vector@VPackInstance@@V?$allocator@VPackInstance@@@std@@@std@@AEAVPackInstance@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIResourcePackRepository@@@Bedrock@@@gsl@@_N@Z
    MCAPI static void _populateDependencies(std::vector<class PackInstance> &, class PackInstance &, gsl::not_null<class Bedrock::NonOwnerPointer<class IResourcePackRepository const>> const &, bool);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mUpgradePathMap@ResourcePackStack@@0V?$map@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V12@U?$less@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@V?$allocator@U?$pair@$$CBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V12@@std@@@4@@std@@A
    MCAPI static std::map<class Core::PathBuffer<std::string>,class Core::PathBuffer<std::string>> mUpgradePathMap;

    // NOLINTEND

// member accessor
public:
    // NOLINTBEGIN
    inline auto& $mUpgradePathMap() { return mUpgradePathMap; }

    // NOLINTEND

};

