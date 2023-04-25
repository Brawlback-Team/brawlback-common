#pragma once
#include "BrawlbackConstants.h"
#include "PlayerFrameData.h"
#include "BrawlbackTypes.h"
#pragma pack(push, 4)
struct FrameData {
    #if __cplusplus == 199711L
    bu32 randomSeed;
    PlayerFrameData playerFrameDatas[MAX_NUM_PLAYERS];
    FrameData()
    {
        randomSeed = 0;
    }
    FrameData(const FrameData& D)
    {
        randomSeed = D.randomSeed;
        for(int i = 0; i < MAX_NUM_PLAYERS; i++)
        {
           playerFrameDatas[i] = D.playerFrameDatas[i]; 
        }
    }
    FrameData& operator = (const FrameData &D ) { 
        randomSeed = D.randomSeed;
        for(int i = 0; i < MAX_NUM_PLAYERS; i++)
        {
           playerFrameDatas[i] = D.playerFrameDatas[i]; 
        }
        return *this;
    }
    #else
    bu32 randomSeed = 0;
    PlayerFrameData playerFrameDatas[MAX_NUM_PLAYERS];
    #endif
};
#pragma pack(pop)
