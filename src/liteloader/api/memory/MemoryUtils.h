#pragma once

#include "vcruntime.h"
#include <string>
#include <type_traits>

#include "FixedString.h"

namespace ll::memory {

using FuncPtr = void*;

template <typename T>
    requires(sizeof(T) == sizeof(FuncPtr))
constexpr FuncPtr toFuncPtr(T t) {
    union {
        FuncPtr fp;
        T       t;
    } u{};
    u.t = t;
    return u.fp;
}


template <typename T>
    requires(std::is_member_function_pointer_v<T> && sizeof(T) == sizeof(FuncPtr) + sizeof(ptrdiff_t))
constexpr FuncPtr toFuncPtr(T t) {
    union {
        struct {
            FuncPtr   fp;
            ptrdiff_t offset;
        };
        T t;
    } u{};
    u.t = t;
    return u.fp;
}

template <typename T>
inline void memcpy_t(void* dst, const void* src, size_t count) {
    memcpy(dst, src, count * sizeof(T));
}

template <typename T>
inline void memcpy_t(void* dst, const void* src) {
    memcpy(dst, src, sizeof(T));
}

/**
 * @brief resolve symbol to function pointer
 * @param symbol Symbol
 * @return function pointer
 */
FuncPtr resolveSymbol(const char* symbol);

/**
 * @brief resolve signature to function pointer
 * @param t Signature
 * @return function pointer
 */
FuncPtr resolveSignature(const char* signature);

template <uintptr_t off, typename RTN = void, typename... Args>
auto constexpr virtualCall(void const* _this, Args&&... args) -> RTN {
    return (*(RTN(**)(void const*, Args&&...))(*(uintptr_t*)_this + off))(_this, std::forward<Args>(args)...);
}

template <typename T, uintptr_t off>
constexpr T& dAccess(void* ptr) {
    return *(T*)(reinterpret_cast<uintptr_t>(ptr) + off);
}

template <typename T, uintptr_t off>
constexpr T const& dAccess(void const* ptr) {
    return *(T*)(((uintptr_t)ptr) + off);
}

template <typename T>
constexpr T& dAccess(void* ptr, uintptr_t off) {
    return *(T*)(((uintptr_t)ptr) + off);
}

template <typename T>
constexpr const T& dAccess(void const* ptr, uintptr_t off) {
    return *(T*)(((uintptr_t)ptr) + off);
}

template <FixedString symbol>
inline FuncPtr symbolCache = resolveSymbol(symbol);

template <FixedString signature>
inline FuncPtr signatureCache = resolveSignature(signature);

} // namespace ll::memory

#define LL_VA_EXPAND(...) __VA_ARGS__

#define LL_SYMBOL_CALL(symbol, Ret, ...) ((Ret(*)(__VA_ARGS__))(ll::memory::symbolCache<symbol>))

#define LL_ADDRESS_CALL(address, Ret, ...) ((Ret(*)(__VA_ARGS__))(address))

#define LL_SIGNATURE_CALL(...) LL_SYMBOL_CALL(__VA_ARGS__)

#define LL_RESOLVE_SYMBOL(symbol) ll::memory::symbolCache<symbol>

#define LL_RESOLVE_SIGNATURE(signature) ll::memory::signatureCache<signature>
