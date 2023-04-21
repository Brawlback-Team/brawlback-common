#pragma once
#include "BrawlbackPad.h"
#include "SyncData.h"

#pragma pack(push, 4)
struct PlayerFrameData {
    u32 randomSeed;
    u32 frame;
    BrawlbackPad pad;
    BrawlbackPad sysPad;
    SyncData syncData;
    u8 playerIdx;

    PlayerFrameData()
    {
        randomSeed = 0;
        frame = 0;
        playerIdx = 0;
    }
};
#pragma pack(pop)