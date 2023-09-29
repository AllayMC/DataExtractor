#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Social::Events { class Event; }
namespace Social::Events { class SummaryEvent; }
// clang-format on

namespace Social::Events {

class IEventListener {
public:
    // prevent constructor by default
    IEventListener& operator=(IEventListener const &) = delete;
    IEventListener(IEventListener const &) = delete;
    IEventListener() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?recordEvent@AggregationEventListener@Events@Social@@UEAAXAEBVEvent@23@AEBV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@@Z
    virtual void recordEvent(class Social::Events::Event const &, class Bedrock::NonOwnerPointer<class AppPlatform> const &) = 0;

    // vIndex: 2, symbol: ?recordSummaryEvent@IEventListener@Events@Social@@UEAAXAEBVSummaryEvent@23@AEBV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@@Z
    virtual void recordSummaryEvent(class Social::Events::SummaryEvent const &, class Bedrock::NonOwnerPointer<class AppPlatform> const &);

    // vIndex: 3, symbol: ?sendEvents@AggregationEventListener@Events@Social@@UEAAX_N@Z
    virtual void sendEvents(bool) = 0;

    // vIndex: 4, symbol: ?getEventTagsFilter@OneDSEventListener@Events@Social@@UEBAHXZ
    virtual int getEventTagsFilter() const = 0;

    // vIndex: 5, symbol: ?stopDebugEventLogging@AggregationEventListener@Events@Social@@UEAAXXZ
    virtual void stopDebugEventLogging() = 0;

    // symbol: ??1IEventListener@Events@Social@@UEAA@XZ
    MCVAPI ~IEventListener();

    // NOLINTEND

};

};
