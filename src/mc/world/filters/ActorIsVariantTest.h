#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleIntFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorIsVariantTest : public ::SimpleIntFilterTest {
public:
    // prevent constructor by default
    ActorIsVariantTest& operator=(ActorIsVariantTest const &) = delete;
    ActorIsVariantTest(ActorIsVariantTest const &) = delete;
    ActorIsVariantTest() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?setup@ActorBoolPropertyTest@@UEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
    virtual bool setup(struct FilterTest::Definition const &, struct FilterInputs const &);

    // vIndex: 2, symbol: ?evaluate@ActorIsVariantTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const &) const;

    // vIndex: 3, symbol: ?finalizeParsedValue@FilterTest@@UEAAXAEAVIWorldRegistriesProvider@@@Z
    virtual void finalizeParsedValue(class IWorldRegistriesProvider &);

    // vIndex: 4, symbol: ?getName@ActorIsVariantTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // vIndex: 5, symbol: ?_serializeDomain@ActorBoolPropertyTest@@MEBA?AVValue@Json@@XZ
    virtual class Json::Value _serializeDomain() const;

    // vIndex: 6, symbol: ?_serializeValue@ActorHasAllSlotsEmptyTest@@MEBA?AVValue@Json@@XZ
    virtual class Json::Value _serializeValue() const;

    // symbol: ??1ActorIsVariantTest@@UEAA@XZ
    MCVAPI ~ActorIsVariantTest();

    // NOLINTEND

};

