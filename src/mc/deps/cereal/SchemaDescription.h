#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

struct SchemaDescription {
public:
    // SchemaDescription inner types declare
    // clang-format off
    struct Member;
    // clang-format on
    
    // SchemaDescription inner types define
    struct Member {
    public:
        // prevent constructor by default
        Member& operator=(Member const &) = delete;
        Member(Member const &) = delete;
        Member() = delete;
    
    public:
        // NOLINTBEGIN
        // symbol: ??1Member@SchemaDescription@cereal@@QEAA@XZ
        MCAPI ~Member();
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    SchemaDescription& operator=(SchemaDescription const &) = delete;
    SchemaDescription(SchemaDescription const &) = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0SchemaDescription@cereal@@QEAA@$$QEAU01@@Z
    MCAPI SchemaDescription(struct cereal::SchemaDescription &&);

    // symbol: ??0SchemaDescription@cereal@@QEAA@XZ
    MCAPI SchemaDescription();

    // symbol: ??1SchemaDescription@cereal@@QEAA@XZ
    MCAPI ~SchemaDescription();

    // NOLINTEND

};

};
