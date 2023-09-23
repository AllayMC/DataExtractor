#include "WinHelper.h"
#include "Windows.h"
#include "Psapi.h"

#define IN_RANGE(x, a, b) ((x) >= (a) && (x) <= (b))
#define GET_BYTE(x)       (GET_BITS((x)[0]) << 4 | GET_BITS((x)[1]))
#define GET_BITS(x)                                                                                                    \
    (IN_RANGE(((x) & (~0x20)), 'A', 'F') ? (((x) & (~0x20)) - 'A' + 0xa) : (IN_RANGE(x, '0', '9') ? (x) - '0' : 0))

inline DWORD_PTR GetProcessBaseAddress(DWORD processId) {
    DWORD_PTR baseAddress   = 0;
    HANDLE    processHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, processId);
    HMODULE*  moduleArray;
    LPBYTE    moduleArrayBytes;
    DWORD     bytesRequired = 0;

    if (!processHandle)
        return baseAddress;

    if (!EnumProcessModules(processHandle, nullptr, 0, &bytesRequired) || !bytesRequired)
        goto Ret;

    moduleArrayBytes = (LPBYTE)LocalAlloc(LPTR, bytesRequired);
    if (!moduleArrayBytes) {
        goto Ret;
    }

    moduleArray = (HMODULE*)moduleArrayBytes;
    if (EnumProcessModules(processHandle, moduleArray, bytesRequired, &bytesRequired)) {
        baseAddress = (DWORD_PTR)moduleArray[0];
    }
    LocalFree(moduleArrayBytes);

    Ret:
    CloseHandle(processHandle);
    return baseAddress;
}

uintptr_t FindSig(const char* szSignature) {
    const char*            pattern    = szSignature;
    uintptr_t              firstMatch = 0;
    DWORD                  processId  = GetCurrentProcessId();
    static const uintptr_t rangeStart = GetProcessBaseAddress(processId);
    static MODULEINFO      miModInfo;
    static bool            init = false;

    if (!init) {
        init = true;
        GetModuleInformation(GetCurrentProcess(), (HMODULE)rangeStart, &miModInfo, sizeof(MODULEINFO));
    }

    static const uintptr_t rangeEnd = rangeStart + miModInfo.SizeOfImage;
    BYTE                   patByte  = GET_BYTE(pattern);
    const char*            oldPat   = pattern;

    for (uintptr_t pCur = rangeStart; pCur < rangeEnd; pCur++) {
        if (!*pattern)
            return firstMatch;

        while (*(PBYTE)pattern == ' ')
            pattern++;

        if (!*pattern)
            return firstMatch;

        if (oldPat != pattern) {
            oldPat = pattern;
            if (*(PBYTE)pattern != '\?')
                patByte = GET_BYTE(pattern);
        }
        if (*(PBYTE)pattern == '\?' || *(BYTE*)pCur == patByte) {
            if (!firstMatch)
                firstMatch = pCur;

            if (!pattern[2] || !pattern[1])
                return firstMatch;
            pattern += 2;
        } else {
            pattern    = szSignature;
            firstMatch = 0;
        }
    }
    return 0;
}

#undef IN_RANGE
#undef GET_BYTE
#undef GET_BITS
