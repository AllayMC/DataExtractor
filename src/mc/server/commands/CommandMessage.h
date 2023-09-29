#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandSelector.h"

class CommandMessage {
public:
    // CommandMessage inner types declare
    // clang-format off
    struct MessageComponent;
    // clang-format on
    
    // CommandMessage inner types define
    struct MessageComponent {
    public:
        // prevent constructor by default
        MessageComponent& operator=(MessageComponent const &) = delete;
        MessageComponent(MessageComponent const &) = delete;
        MessageComponent() = delete;
    
    public:
        // NOLINTBEGIN
        // symbol: ??0MessageComponent@CommandMessage@@QEAA@$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI MessageComponent(std::string &&);
    
        // symbol: ??0MessageComponent@CommandMessage@@QEAA@$$QEAV?$unique_ptr@V?$CommandSelector@VActor@@@@U?$default_delete@V?$CommandSelector@VActor@@@@@std@@@std@@@Z
        MCAPI MessageComponent(std::unique_ptr<class CommandSelector<class Actor>> &&);
    
        // symbol: ??0MessageComponent@CommandMessage@@QEAA@$$QEAU01@@Z
        MCAPI MessageComponent(struct CommandMessage::MessageComponent &&);
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    CommandMessage& operator=(CommandMessage const &) = delete;
    CommandMessage(CommandMessage const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0CommandMessage@@QEAA@XZ
    MCAPI CommandMessage();

    // symbol: ?getMessage@CommandMessage@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCommandOrigin@@@Z
    MCAPI std::string getMessage(class CommandOrigin const &) const;

    // symbol: ??1CommandMessage@@QEAA@XZ
    MCAPI ~CommandMessage();

    // NOLINTEND

};

