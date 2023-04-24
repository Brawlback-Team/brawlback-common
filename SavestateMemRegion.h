#pragma once

const size_t MAX_HEAPNAME_SIZE = 30;

#pragma pack(push, 4)
struct SavestateMemRegionInfo {
    u8 nameBuffer[MAX_HEAPNAME_SIZE];
    u8 nameSize;
    u32 address;
    u32 size;
    SavestateMemRegionInfo() 
    {
        nameSize = 0;
        address = 0;
        size = 0;
    }
    SavestateMemRegionInfo& operator = (const SavestateMemRegionInfo &D ) {
        for(int i = 0; i < MAX_HEAPNAME_SIZE; i++)
        {
            nameBuffer[i] = D.nameBuffer[i];
        }
        nameSize = D.nameSize;
        address = D.address;
        size = D.size;
    }
};
#pragma pack(pop)
