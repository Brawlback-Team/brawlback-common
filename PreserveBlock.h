#pragma once
#include "BrawlbackTypes.h"
#pragma pack(push, 4)
struct PreserveBlock {
    bu32 address;
    bu32 length;
    PreserveBlock()
    {
        address = 0;
        length = 0;
    }
    #if __cplusplus == 199711L
    PreserveBlock(const PreserveBlock &D)
    {
        address = D.address;
        length = D.length;
    }
    PreserveBlock& operator = (const PreserveBlock &D ) {
        address = D.address;
        length = D.length;
        return *this;
    }
    #endif
};
#pragma pack(pop)
