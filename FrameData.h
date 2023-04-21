#pragma once
#include "BrawlbackConstants.h"
#include "PlayerFrameData.h"

#pragma pack(push, 4)
struct FrameData {
    u32 randomSeed;
    PlayerFrameData playerFrameDatas[MAX_NUM_PLAYERS];
    FrameData()
    {
        randomSeed = 0;
    }
};
#pragma pack(pop)