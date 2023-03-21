#pragma once

constexpr size_t MAX_HEAPNAME_SIZE = 30;

#pragma pack(push, 4)
struct SavestateMemRegionInfo {
    u8 nameBuffer[MAX_HEAPNAME_SIZE];
    u8 nameSize = 0;
    u32 address;
    u32 size;
    bool firstDump;
};
#pragma pack(pop)
