#pragma once
#include "BrawlbackPad.h"
#include "SyncData.h"

#pragma pack(push, 4)
struct PlayerFrameData {
    u32 randomSeed = 0;
    u32 frame = 0;
    BrawlbackPad pad;
    BrawlbackPad sysPad;
    SyncData syncData;
    u8 playerIdx = 0;
};
#pragma pack(pop)