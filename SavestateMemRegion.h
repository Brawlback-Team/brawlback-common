#pragma once

constexpr size_t MAX_HEAPNAME_SIZE = 30;

#pragma pack(push, 4)
struct SavestateMemRegionInfo {
    u32 address;
    u32 size;
    bool TAddFRemove;
};
#pragma pack(pop)
