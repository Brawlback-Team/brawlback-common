#pragma once
#pragma pack(push, 4)
struct PreserveBlock {
    u32 address;
    u32 length;
    PreserveBlock()
    {
        address = 0;
        length = 0;
    }
    PreserveBlock& operator = (const PreserveBlock &D ) {
        address = D.address;
        length = D.length;
        return *this;
    }
};
#pragma pack(pop)
