#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Command {
public:
    // prevent constructor by default
    Command& operator=(Command const &) = delete;
    Command(Command const &) = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?collectOptionalArguments@Command@@MEAA_NXZ
    virtual bool collectOptionalArguments();

    // vIndex: 2, symbol: ?execute@TakePictureCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const = 0;

    // symbol: ??1Command@@UEAA@XZ
    MCVAPI ~Command();

    // symbol: ??0Command@@QEAA@XZ
    MCAPI Command();

    // symbol: ?getCommandName@Command@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getCommandName() const;

    // symbol: ?getVersion@Command@@QEBAHXZ
    MCAPI int32_t getVersion() const;

    // symbol: ?hasFlag@Command@@QEBA_NUCommandFlag@@@Z
    MCAPI bool hasFlag(struct CommandFlag) const;

    // symbol: ?run@Command@@QEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void run(class CommandOrigin const &, class CommandOutput &) const;

    // symbol: ?shouldUseCommandOriginRotation@Command@@SA_NAEBVCommandOrigin@@H@Z
    MCAPI static bool shouldUseCommandOriginRotation(class CommandOrigin const &, int32_t);

    // symbol: ?validRange@Command@@SA_NMMMAEAVCommandOutput@@@Z
    MCAPI static bool validRange(float, float, float, class CommandOutput &);

    // symbol: ?validRange@Command@@SA_NHHHAEAVCommandOutput@@@Z
    MCAPI static bool validRange(int32_t, int32_t, int32_t, class CommandOutput &);

    // symbol: ?WILDCARD_TOKEN@Command@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const WILDCARD_TOKEN;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?getRegistry@Command@@IEBAAEBVCommandRegistry@@XZ
    MCAPI class CommandRegistry const & getRegistry() const;

    // symbol: ?sendTelemetry@Command@@IEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void sendTelemetry(class CommandOrigin const &, class CommandOutput &) const;

    // symbol: ?shouldSendTelemetry@Command@@IEBA_NAEBVCommandOrigin@@@Z
    MCAPI bool shouldSendTelemetry(class CommandOrigin const &) const;

    // symbol: ?getPlayerFromOrigin@Command@@KAPEAVPlayer@@AEBVCommandOrigin@@@Z
    MCAPI static class Player * getPlayerFromOrigin(class CommandOrigin const &);

    // symbol: ?isTemplateLockedAction@Command@@KA_NAEBVCommandOrigin@@@Z
    MCAPI static bool isTemplateLockedAction(class CommandOrigin const &);

    // symbol: ?isWildcard@Command@@KA_NAEBVCommandSelectorBase@@@Z
    MCAPI static bool isWildcard(class CommandSelectorBase const &);

    // symbol: ?validData@Command@@KA_NHAEAGAEAVCommandOutput@@@Z
    MCAPI static bool validData(int32_t, uint16_t &, class CommandOutput &);

    // NOLINTEND

};

