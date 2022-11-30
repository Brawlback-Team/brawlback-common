#pragma once
#include "GameSettings.h"
#include "PlayerFrameData.h"

#pragma pack(push, 4)
struct FrameData {
    u32 randomSeed = 0;
    PlayerFrameData playerFrameDatas[MAX_NUM_PLAYERS]; 
};
#pragma pack(pop)