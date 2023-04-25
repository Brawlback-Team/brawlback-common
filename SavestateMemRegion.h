#pragma once
#include "BrawlbackTypes.h"
const size_t MAX_HEAPNAME_SIZE = 30;

#pragma pack(push, 4)
struct SavestateMemRegionInfo {
    bu8 nameBuffer[MAX_HEAPNAME_SIZE];
    bu8 nameSize;
    bu32 address;
    bu32 size;
    SavestateMemRegionInfo() 
    {
        nameSize = 0;
        address = 0;
        size = 0;
    }
    #if __cplusplus == 199711L
    SavestateMemRegionInfo(const SavestateMemRegionInfo &D )
    {
        for(int i = 0; i < MAX_HEAPNAME_SIZE; i++)
        {
            nameBuffer[i] = D.nameBuffer[i];
        }
        nameSize = D.nameSize;
        address = D.address;
        size = D.size;
    }
    SavestateMemRegionInfo& operator = (const SavestateMemRegionInfo &D ) {
        for(int i = 0; i < MAX_HEAPNAME_SIZE; i++)
        {
            nameBuffer[i] = D.nameBuffer[i];
        }
        nameSize = D.nameSize;
        address = D.address;
        size = D.size;
        return *this;
    }
    #endif
};
#pragma pack(pop)
