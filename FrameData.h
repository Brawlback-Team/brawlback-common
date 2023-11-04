#pragma once
#include "BrawlbackConstants.h"
#include "PlayerFrameData.h"
#include "BrawlbackTypes.h"
#pragma pack(push, 4)
struct FrameData {
    #if __cplusplus == 199711L
    bu32 randomSeed;
    PlayerFrameData playerFrameDatas[MAX_ROLLBACK_FRAMES][MAX_NUM_PLAYERS];
    bu8 frameResult;
    bu8 numInputs;
    FrameData();
    FrameData(const FrameData& D);
    FrameData& operator=(const FrameData &D );
    #else
    bu32 randomSeed = 0;
    PlayerFrameData playerFrameDatas[MAX_NUM_PLAYERS][MAX_ROLLBACK_FRAMES];
    bu8 frameResult = 1;
    bu8 numInputs = 0;
    #endif
};
#pragma pack(pop)
