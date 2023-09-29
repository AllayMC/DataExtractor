#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ItemRegistryRef;
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItems {
public:
    // prevent constructor by default
    ScriptItems& operator=(ScriptItems const &) = delete;
    ScriptItems(ScriptItems const &) = delete;
    ScriptItems() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?add@ScriptItems@ScriptModuleMinecraft@@QEAA?AV?$StrongTypedObjectHandle@VScriptItemType@ScriptModuleMinecraft@@@Scripting@@AEAVWeakLifetimeScope@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType> add(class Scripting::WeakLifetimeScope &, std::string const &, bool);

    // symbol: ?get@ScriptItems@ScriptModuleMinecraft@@QEAA?AV?$StrongTypedObjectHandle@VScriptItemType@ScriptModuleMinecraft@@@Scripting@@AEAVWeakLifetimeScope@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType> get(class Scripting::WeakLifetimeScope &, std::string const &);

    // symbol: ?getBetaItem@ScriptItems@ScriptModuleMinecraft@@QEAA?AV?$StrongTypedObjectHandle@VScriptItemType@ScriptModuleMinecraft@@@Scripting@@AEAVWeakLifetimeScope@4@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType> getBetaItem(class Scripting::WeakLifetimeScope &, std::string const &);

    // symbol: ?_getPropertyToItemNameMap@ScriptItems@ScriptModuleMinecraft@@SA?AV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$tuple@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$tuple@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@2@@std@@@2@@std@@VItemRegistryRef@@@Z
    MCAPI static std::unordered_map<std::string,std::tuple<std::string, bool>> _getPropertyToItemNameMap(class ItemRegistryRef);

    // symbol: ?bind@ScriptItems@ScriptModuleMinecraft@@SAXAEAVModuleBindingBuilder@Scripting@@VItemRegistryRef@@@Z
    MCAPI static void bind(class Scripting::ModuleBindingBuilder &, class ItemRegistryRef);

    // symbol: ?getItemTypeHandle@ScriptItems@ScriptModuleMinecraft@@SA?AV?$optional@V?$StrongTypedObjectHandle@VScriptItemType@ScriptModuleMinecraft@@@Scripting@@@std@@VWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI static std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemType>> getItemTypeHandle(class Scripting::WeakLifetimeScope, std::string const &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?registerItems@ScriptItems@ScriptModuleMinecraft@@AEAAXAEAVWeakLifetimeScope@Scripting@@@Z
    MCAPI void registerItems(class Scripting::WeakLifetimeScope &);

    // NOLINTEND

};

};
