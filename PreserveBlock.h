#pragma once
#include "BrawlbackTypes.h"
#pragma pack(push, 4)
struct PreserveBlock {
    #if __cplusplus == 199711L
    bu32 address;
    bu32 length;
    PreserveBlock()
    {
        address = 0;
        length = 0;
    }
    PreserveBlock(const PreserveBlock &D)
    {
        address = D.address;
        length = D.length;
    }
    PreserveBlock& operator = (const PreserveBlock &D ) {
        if( this != &D ) {
            address = D.address;
            length = D.length;
        }
        return *this;
    }
    #else
    bu32 address = 0;
    bu32 length = 0;
    #endif
};
#pragma pack(pop)
