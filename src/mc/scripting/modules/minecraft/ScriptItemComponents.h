#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptItemComponentFactory; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemComponents {
public:
    // prevent constructor by default
    ScriptItemComponents& operator=(ScriptItemComponents const &) = delete;
    ScriptItemComponents(ScriptItemComponents const &) = delete;
    ScriptItemComponents() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?bind@ScriptItemComponents@ScriptModuleMinecraft@@SAXAEAVModuleBindingBuilder@Scripting@@@Z
    MCAPI static void bind(class Scripting::ModuleBindingBuilder &);

    // symbol: ?getSupportedItemComponents@ScriptItemComponents@ScriptModuleMinecraft@@SAAEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VIScriptItemComponentFactory@ScriptModuleMinecraft@@U?$default_delete@VIScriptItemComponentFactory@ScriptModuleMinecraft@@@std@@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VIScriptItemComponentFactory@ScriptModuleMinecraft@@U?$default_delete@VIScriptItemComponentFactory@ScriptModuleMinecraft@@@std@@@2@@std@@@2@@std@@XZ
    MCAPI static std::unordered_map<std::string,std::unique_ptr<class ScriptModuleMinecraft::IScriptItemComponentFactory>> const & getSupportedItemComponents();

    // NOLINTEND

};

};
