#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/IScriptBlockProperty.h"

// auto generated forward declare list
// clang-format off
class BlockState;
namespace ScriptModuleMinecraft { class IScriptBlockProperty; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptIntBlockProperty : public ::ScriptModuleMinecraft::IScriptBlockProperty {
public:
    // prevent constructor by default
    ScriptIntBlockProperty& operator=(ScriptIntBlockProperty const &) = delete;
    ScriptIntBlockProperty(ScriptIntBlockProperty const &) = delete;
    ScriptIntBlockProperty() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptIntBlockProperty@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptIntBlockProperty();

    // symbol: ??0ScriptIntBlockProperty@ScriptModuleMinecraft@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockState@@V?$vector@HV?$allocator@H@std@@@3@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@Scripting@@@Z
    MCAPI ScriptIntBlockProperty(std::string, class BlockState const &, std::vector<int32_t>, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>);

    // symbol: ??0ScriptIntBlockProperty@ScriptModuleMinecraft@@QEAA@$$QEAV01@@Z
    MCAPI ScriptIntBlockProperty(class ScriptModuleMinecraft::ScriptIntBlockProperty &&);

    // symbol: ?getState@ScriptIntBlockProperty@ScriptModuleMinecraft@@QEBA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int32_t> getState() const;

    // symbol: ??4ScriptIntBlockProperty@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptIntBlockProperty & operator=(class ScriptModuleMinecraft::ScriptIntBlockProperty &&);

    // symbol: ?setState@ScriptIntBlockProperty@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@H@Z
    MCAPI class Scripting::Result<void> setState(int32_t);

    // symbol: ?bind@ScriptIntBlockProperty@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptIntBlockProperty@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptIntBlockProperty> bind();

    // NOLINTEND

};

};
