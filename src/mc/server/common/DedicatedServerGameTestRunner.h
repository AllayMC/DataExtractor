#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class DedicatedServerGameTestRunner {
public:
    // prevent constructor by default
    DedicatedServerGameTestRunner& operator=(DedicatedServerGameTestRunner const &) = delete;
    DedicatedServerGameTestRunner(DedicatedServerGameTestRunner const &) = delete;
    DedicatedServerGameTestRunner() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0DedicatedServerGameTestRunner@@QEAA@AEBVTestConfig@@AEAVMinecraftGameTest@@AEAVServerInstance@@AEAVLevel@@@Z
    MCAPI DedicatedServerGameTestRunner(class TestConfig const &, class MinecraftGameTest &, class ServerInstance &, class Level &);

    // symbol: ?isDone@DedicatedServerGameTestRunner@@QEBA_NXZ
    MCAPI bool isDone() const;

    // symbol: ?tick@DedicatedServerGameTestRunner@@QEAAXXZ
    MCAPI void tick();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_ensureDimension@DedicatedServerGameTestRunner@@AEAAPEAVDimension@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI class Dimension * _ensureDimension(DimensionType);

    // symbol: ?_runTestGroup@DedicatedServerGameTestRunner@@AEAAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI void _runTestGroup(std::vector<std::string> const &);

    // symbol: ?_saveReport@DedicatedServerGameTestRunner@@AEAA_NXZ
    MCAPI bool _saveReport();

    // symbol: ?_writeFile@DedicatedServerGameTestRunner@@AEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI bool _writeFile(std::string const &, std::string const &);

    // NOLINTEND

};

