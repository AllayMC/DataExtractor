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

class ScriptBoolBlockProperty : public ::ScriptModuleMinecraft::IScriptBlockProperty {
public:
    // prevent constructor by default
    ScriptBoolBlockProperty& operator=(ScriptBoolBlockProperty const &) = delete;
    ScriptBoolBlockProperty(ScriptBoolBlockProperty const &) = delete;
    ScriptBoolBlockProperty() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1ScriptBoolBlockProperty@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptBoolBlockProperty();

    // symbol: ??0ScriptBoolBlockProperty@ScriptModuleMinecraft@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockState@@V?$vector@_NV?$allocator@_N@std@@@3@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@Scripting@@@Z
    MCAPI ScriptBoolBlockProperty(std::string, class BlockState const &, std::vector<bool>, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>);

    // symbol: ??0ScriptBoolBlockProperty@ScriptModuleMinecraft@@QEAA@$$QEAV01@@Z
    MCAPI ScriptBoolBlockProperty(class ScriptModuleMinecraft::ScriptBoolBlockProperty &&);

    // symbol: ?getState@ScriptBoolBlockProperty@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getState() const;

    // symbol: ??4ScriptBoolBlockProperty@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptBoolBlockProperty & operator=(class ScriptModuleMinecraft::ScriptBoolBlockProperty &&);

    // symbol: ?setState@ScriptBoolBlockProperty@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@_N@Z
    MCAPI class Scripting::Result<void> setState(bool);

    // symbol: ?bind@ScriptBoolBlockProperty@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBoolBlockProperty@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBoolBlockProperty> bind();

    // NOLINTEND

};

};
