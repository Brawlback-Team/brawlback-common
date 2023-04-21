#pragma once

#pragma pack(push, 4)
struct SyncData {
    float percent;
    float locX;
    float locY;
    u32 anim;
    u8 stocks;
    s8 facingDir;

    SyncData()
    {
        percent = 0.0;
        locX = 0.0;
        locY = 0.0;
        anim = 0;
        stocks = 0;
        facingDir = 0;
    }
};
#pragma pack(pop)
