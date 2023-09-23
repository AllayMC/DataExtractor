#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class Vec3;
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlock {
public:
    // prevent constructor by default
    ScriptBlock& operator=(ScriptBlock const &) = delete;
    ScriptBlock(ScriptBlock const &) = delete;
    ScriptBlock() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?canPlace@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@_NUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@UError@Scripting@@@Scripting@@AEBV?$variant@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$StrongTypedObjectHandle@VScriptBlockType@ScriptModuleMinecraft@@@Scripting@@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@4@@std@@V?$optional@W4ScriptFacing@ScriptModuleMinecraft@@@6@@Z
    MCAPI class Scripting::Result<bool, struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError, struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError, struct Scripting::Error> canPlace(std::variant<std::string, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>> const &, std::optional<::ScriptModuleMinecraft::ScriptFacing>) const;

    // symbol: ?getBlock@ScriptBlock@ScriptModuleMinecraft@@QEBAAEBVBlock@@XZ
    MCAPI class Block const & getBlock() const;

    // symbol: ?getComponent@ScriptBlock@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VBaseScriptBlockComponent@ScriptModuleMinecraft@@@Scripting@@@std@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::BaseScriptBlockComponent>>, struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError, struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError> getComponent(std::string const &);

    // symbol: ?getComponent_010@ScriptBlock@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VBaseScriptBlockComponent@ScriptModuleMinecraft@@@Scripting@@@std@@$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::BaseScriptBlockComponent>>> getComponent_010(std::string const &);

    // symbol: ?getDimension@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$StrongTypedObjectHandle@VScriptDimension@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension> getDimension() const;

    // symbol: ?getId_010@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getId_010() const;

    // symbol: ?getItemStack@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptItemStack@ScriptModuleMinecraft@@@Scripting@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@H_N@Z
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>, struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError, struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError> getItemStack(int, bool) const;

    // symbol: ?getLocation@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@VVec3@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<class Vec3> getLocation() const;

    // symbol: ?getLocation_010@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$StrongTypedObjectHandle@VBlockPos@@@Scripting@@XZ
    MCAPI class Scripting::StrongTypedObjectHandle<class BlockPos> getLocation_010() const;

    // symbol: ?getPermutation@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@Scripting@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@XZ
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>, struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError, struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError> getPermutation() const;

    // symbol: ?getPermutation_010@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation> getPermutation_010() const;

    // symbol: ?getRedstonePower@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$optional@H@std@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@XZ
    MCAPI class Scripting::Result<std::optional<int>, struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError, struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError> getRedstonePower() const;

    // symbol: ?getTags@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@XZ
    MCAPI class Scripting::Result<std::vector<std::string>, struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError, struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError> getTags() const;

    // symbol: ?getTags_010@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> getTags_010() const;

    // symbol: ?getType@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$StrongTypedObjectHandle@VScriptBlockType@ScriptModuleMinecraft@@@Scripting@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@XZ
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>, struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError, struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError> getType() const;

    // symbol: ?getTypeId@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@4@@Scripting@@XZ
    MCAPI class Scripting::Result<std::string, struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError, struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError> getTypeId() const;

    // symbol: ?getType_010@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$StrongTypedObjectHandle@VScriptBlockType@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType> getType_010() const;

    // symbol: ?getWaterlogged@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@_NUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@@Scripting@@XZ
    MCAPI class Scripting::Result<bool, struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError, struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError> getWaterlogged() const;

    // symbol: ?hasTag@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@_NUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<bool, struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError, struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError> hasTag(std::string const &) const;

    // symbol: ?hasTag_010@ScriptBlock@ScriptModuleMinecraft@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool hasTag_010(std::string const &) const;

    // symbol: ?isAir@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@_NUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@@Scripting@@XZ
    MCAPI class Scripting::Result<bool, struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError, struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError> isAir() const;

    // symbol: ?isLiquid@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@_NUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@@Scripting@@XZ
    MCAPI class Scripting::Result<bool, struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError, struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError> isLiquid() const;

    // symbol: ?isSolid@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@_NUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@@Scripting@@XZ
    MCAPI class Scripting::Result<bool, struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError, struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError> isSolid() const;

    // symbol: ?setPermutation@ScriptBlock@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@@Scripting@@AEBVScriptBlockPermutation@2@@Z
    MCAPI class Scripting::Result<void, struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError, struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError> setPermutation(class ScriptModuleMinecraft::ScriptBlockPermutation const &);

    // symbol: ?setPermutation_010@ScriptBlock@ScriptModuleMinecraft@@QEAAXAEBVScriptBlockPermutation@2@@Z
    MCAPI void setPermutation_010(class ScriptModuleMinecraft::ScriptBlockPermutation const &);

    // symbol: ?setType@ScriptBlock@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@UError@Scripting@@@Scripting@@AEBV?$variant@V?$StrongTypedObjectHandle@VScriptBlockType@ScriptModuleMinecraft@@@Scripting@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI class Scripting::Result<void, struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError, struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError, struct Scripting::Error> setType(std::variant<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>, std::string> const &);

    // symbol: ?setType_010@ScriptBlock@ScriptModuleMinecraft@@QEAAXAEBVScriptBlockType@2@@Z
    MCAPI void setType_010(class ScriptModuleMinecraft::ScriptBlockType const &);

    // symbol: ?setWaterlogged@ScriptBlock@ScriptModuleMinecraft@@QEAA?AV?$Result@XUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@UError@Scripting@@@Scripting@@_N@Z
    MCAPI class Scripting::Result<void, struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError, struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError, struct Scripting::Error> setWaterlogged(bool);

    // symbol: ?setWaterlogged_010@ScriptBlock@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@_N@Z
    MCAPI class Scripting::Result<void> setWaterlogged_010(bool);

    // symbol: ?trySetPermutation@ScriptBlock@ScriptModuleMinecraft@@QEBA?AV?$Result@_NUScriptLocationInUnloadedChunkError@ScriptModuleMinecraft@@UScriptLocationOutOfWorldBoundsError@2@@Scripting@@AEBVScriptBlockPermutation@2@@Z
    MCAPI class Scripting::Result<bool, struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError, struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError> trySetPermutation(class ScriptModuleMinecraft::ScriptBlockPermutation const &) const;

    // symbol: ??1ScriptBlock@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptBlock();

    // symbol: ?bind@ScriptBlock@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlock@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlock> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_collectTags@ScriptBlock@ScriptModuleMinecraft@@AEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVBlock@@@Z
    MCAPI std::vector<std::string> _collectTags(class Block const &) const;

    // symbol: ?_isValid@ScriptBlock@ScriptModuleMinecraft@@AEBA_NXZ
    MCAPI bool _isValid() const;

    // NOLINTEND

};

};
