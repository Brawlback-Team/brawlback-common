#pragma once

#pragma pack(push, 4)
struct SyncData {
    float percent;
    float locX;
    float locY;
    u32 anim;
    u8 stocks;
    s8 facingDir;
};
#pragma pack(pop)