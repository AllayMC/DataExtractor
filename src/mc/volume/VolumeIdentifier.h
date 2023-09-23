#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct VolumeIdentifier {
public:
    // VolumeIdentifier inner types declare
    // clang-format off
    struct ConstrainedString;
    // clang-format on
    
    // VolumeIdentifier inner types define
    struct ConstrainedString {
    public:
        // prevent constructor by default
        ConstrainedString& operator=(ConstrainedString const &) = delete;
        ConstrainedString(ConstrainedString const &) = delete;
        ConstrainedString() = delete;
    
    public:
        // NOLINTBEGIN
        // symbol: ?bindType@ConstrainedString@VolumeIdentifier@@SAXAEAUReflectionCtx@cereal@@@Z
        MCAPI static void bindType(struct cereal::ReflectionCtx &);
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    VolumeIdentifier& operator=(VolumeIdentifier const &) = delete;
    VolumeIdentifier(VolumeIdentifier const &) = delete;
    VolumeIdentifier() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??8VolumeIdentifier@@QEBA_NAEBU0@@Z
    MCAPI bool operator==(struct VolumeIdentifier const &) const;

    // symbol: ?bindType@VolumeIdentifier@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx &);

    // NOLINTEND

};

