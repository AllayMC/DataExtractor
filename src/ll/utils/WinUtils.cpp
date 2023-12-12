#include "ll/utils/WinUtils.h"

#include <string>

#include "ll/utils/StringUtils.h"

#include "windows.h"

#include "psapi.h"

using namespace ll::utils::string_utils;
namespace ll::utils::win_utils {

std::span<uchar> getImageRangeSpan() {
    static const uintptr_t rangeStart = [] {
        DWORD_PTR baseAddress   = 0;
        HANDLE    processHandle = OpenProcess(PROCESS_ALL_ACCESS, false, GetCurrentProcessId());
        HMODULE*  moduleArray;
        DWORD     bytesRequired = 0;

        if (!processHandle) return baseAddress;

        if (!EnumProcessModules(processHandle, nullptr, 0, &bytesRequired) || !bytesRequired) {
            CloseHandle(processHandle);
            return baseAddress;
        }

        std::string tmp(bytesRequired, ' ');

        moduleArray = (HMODULE*)tmp.data();
        if (EnumProcessModules(processHandle, moduleArray, bytesRequired, &bytesRequired)) {
            baseAddress = (DWORD_PTR)moduleArray[0];
        }

        CloseHandle(processHandle);
        return baseAddress;
    }();

    static MODULEINFO miModInfo;
    static bool       init = [&] {
        GetModuleInformation(GetCurrentProcess(), (HMODULE)rangeStart, &miModInfo, sizeof(MODULEINFO));
        return true;
    }();
    static const uintptr_t rangeEnd = rangeStart + miModInfo.SizeOfImage;

    return {(uchar*)rangeStart, (uchar*)rangeEnd};
}

} // namespace ll::utils::win_utils
