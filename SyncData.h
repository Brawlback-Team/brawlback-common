#pragma once

#pragma pack(push, 4)
struct SyncData {
    float percent = 0.0;
    float locX = 0.0;
    float locY = 0.0;
    u32 anim = 0;
    u8 stocks = 0;
    s8 facingDir = 0;
};
#pragma pack(pop)