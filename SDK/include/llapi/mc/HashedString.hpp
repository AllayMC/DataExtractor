/**
 * @file  HashedString.hpp
 *
 */
#pragma once

#include "llapi/Global.h"
#include <string>
#include <string_view>

/**
 * @brief A class representing a hashed string with its corresponding hash value.
 * The HashedString class provides a wrapper around a std::string that also stores
 * its corresponding hash value. This is useful for efficient comparison between
 * strings in scenarios such as hash table lookups.
 *
 */
class HashedString {
#if _MSVC_LANG > 201703L
#define HASHEDSTR_CONSTEXPR20 constexpr
#else
#define HASHEDSTR_CONSTEXPR20 inline
#endif
public:
    uint64_t hash;
    std::string str;
    class HashedString* lastMatch;

    HASHEDSTR_CONSTEXPR20 static unsigned long long computeHash(std::string_view str){
        unsigned long long hash = 0xCBF29CE484222325ULL;
        for(char s : str){
            hash = s ^ (0x100000001B3ULL * hash);
        }
        return hash;
    }
    
    // Constructors
    HASHEDSTR_CONSTEXPR20 HashedString(std::nullptr_t = nullptr) noexcept : 
        hash(0), lastMatch(nullptr) {}
    
    HASHEDSTR_CONSTEXPR20 HashedString(uint64_t h, const char* str) noexcept : 
        hash(h), str(str), lastMatch(nullptr) {}
    
    HASHEDSTR_CONSTEXPR20 HashedString(const char* str) noexcept : 
        hash(computeHash(str)), str(str), lastMatch(nullptr) {}
    
    HASHEDSTR_CONSTEXPR20 HashedString(const std::string& str) noexcept : 
        hash(computeHash(str)), str(str), lastMatch(nullptr) {}
    
    HASHEDSTR_CONSTEXPR20 HashedString(const HashedString& other) noexcept : 
        hash(other.hash), str(other.str), lastMatch(nullptr) {}
    
    HASHEDSTR_CONSTEXPR20 HashedString(HashedString&& other) noexcept : 
        hash(other.hash), str(std::move(other.str)), lastMatch(other.lastMatch) {
        other.hash = 0;
        other.lastMatch = nullptr;
    }
    
    HASHEDSTR_CONSTEXPR20 [[nodiscard]] HashedString& operator=(const HashedString& other) noexcept {
        hash = other.hash;
        str = other.str;
        lastMatch = nullptr;
        return *this;
    }

    HASHEDSTR_CONSTEXPR20 [[nodiscard]] HashedString& operator=(HashedString&& other) noexcept {
        hash = other.hash;
        str = std::move(other.str);
        lastMatch = other.lastMatch;
        other.hash = 0;
        other.lastMatch = nullptr;
        return *this;
    }
    
    // Accessors
    inline [[nodiscard]] const char* c_str() const noexcept {
        return str.c_str();
    }
    HASHEDSTR_CONSTEXPR20 [[nodiscard]] const std::string& getString() const noexcept {
        return str;
    }
    HASHEDSTR_CONSTEXPR20 [[nodiscard]] uint64_t getHash() const noexcept { 
        return hash;
    }
    HASHEDSTR_CONSTEXPR20 [[nodiscard]] bool isEmpty() const noexcept { 
        return str.empty(); 
    }

    // Mutators
    HASHEDSTR_CONSTEXPR20 void clear() noexcept { hash = 0; str.clear(); lastMatch = nullptr; }
    
    // Operators
    template<typename StringType>
    HASHEDSTR_CONSTEXPR20 [[nodiscard]] bool operator==(StringType const& rhs) const noexcept {
        return str == rhs;
    }
    HASHEDSTR_CONSTEXPR20 [[nodiscard]] bool operator==(const HashedString& other) const noexcept { 
        return hash == other.hash;
    }

    template<typename StringType>
    HASHEDSTR_CONSTEXPR20 [[nodiscard]] bool operator!=(StringType const& rhs) const noexcept {
        return str != rhs;
    }
    HASHEDSTR_CONSTEXPR20 [[nodiscard]] bool operator!=(const HashedString& other) const noexcept { 
        return hash != other.hash;
    }

#if _MSVC_LANG > 201703L
    template<typename StringType>
    HASHEDSTR_CONSTEXPR20 std::strong_ordering operator<=>(const StringType& other) const noexcept {
        return str <=> other.str;
    }
    HASHEDSTR_CONSTEXPR20 std::strong_ordering operator<=>(const HashedString& other) const noexcept {
        return str <=> other.str;
    }
#endif

    //Convertors
    inline operator std::string() const {
        return str;
    }
    inline operator std::string_view() const {
        return std::string_view(str);
    }
    /**
     * @symbol  ??BHashedString\@\@QEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    MCAPI operator class gsl::basic_string_span<char const, -1>() const;
    /**
     * @symbol  ?bindType\@HashedString\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol  ?defaultErrorValue\@HashedString\@\@2V1\@A
     */
    MCAPI static class HashedString defaultErrorValue;
    /**
     * @symbol  ?getEmptyString\@HashedString\@\@SAAEBV1\@XZ
     */
    MCAPI static class HashedString const & getEmptyString();
    
#undef HASHEDSTR_CONSTEXPR20
};

namespace std {

    template <>
    struct hash<HashedString> {
        std::size_t operator()(HashedString const& str) const noexcept { return str.getHash(); }
    };

}  // namespace std