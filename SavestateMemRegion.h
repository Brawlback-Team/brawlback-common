#pragma once

#pragma pack(push, 4)
struct SavestateMemRegionInfo {
    u32 address;
    u32 size;
    bool TAddFRemove;
};
#pragma pack(pop)
