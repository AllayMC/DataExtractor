﻿#pragma once

#include <string_view>

#include "liteloader/api/base/StdInt.h"

typedef uint64 CHash;

constexpr uint64 do_hash(const char* x);
constexpr uint64 do_hash(const char* x, size_t len);
constexpr uint64 do_hash2(std::string_view x);

constexpr uint64 do_hash(const char* x) {
    // ap hash
    uint64 rval = 0;
    for (size_t i = 0; x[i]; ++i) {
        if (i & 1) {
            rval ^= (~((rval << 11) ^ x[i] ^ (rval >> 5)));
        } else {
            rval ^= (~((rval << 7) ^ x[i] ^ (rval >> 3)));
        }
    }
    return rval;
}
constexpr uint64 do_hash(const char* x, size_t len) {
    // ap hash
    uint64 rval = 0;
    for (size_t i = 0; i < len; ++i) {
        if (i & 1) {
            rval ^= (~((rval << 11) ^ x[i] ^ (rval >> 5)));
        } else {
            rval ^= (~((rval << 7) ^ x[i] ^ (rval >> 3)));
        }
    }
    return rval;
}

constexpr uint64 do_hash2(std::string_view x) {
    // ap hash
    uint64 rval = 0;
    for (char i : x) {
        rval *= 128;
        rval += i;
        rval += 4;
    }
    return rval;
}
