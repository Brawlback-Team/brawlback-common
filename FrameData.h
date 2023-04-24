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
    FrameData& operator = (const FrameData &D ) { 
        randomSeed = D.randomSeed;
        for(int i = 0; i < MAX_NUM_PLAYERS; i++)
        {
           playerFrameDatas[i] = D.playerFrameDatas[i]; 
        }
    }
};
#pragma pack(pop)