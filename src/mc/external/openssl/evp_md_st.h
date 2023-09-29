#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct evp_md_st {
public:
    // prevent constructor by default
    evp_md_st& operator=(evp_md_st const &) = delete;
    evp_md_st(evp_md_st const &) = delete;
    evp_md_st() = delete;

};

