#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangEvalStackState {
public:
    // prevent constructor by default
    MolangEvalStackState& operator=(MolangEvalStackState const &) = delete;
    MolangEvalStackState(MolangEvalStackState const &) = delete;
    MolangEvalStackState() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0MolangEvalStackState@@QEAA@AEAUMolangEvalParams@@@Z
    MCAPI MolangEvalStackState(struct MolangEvalParams &);

    // NOLINTEND

};

