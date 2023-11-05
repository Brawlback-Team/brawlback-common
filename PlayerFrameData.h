#pragma once
#include "BrawlbackPad.h"
#include "SyncData.h"
#include "BrawlbackTypes.h"
#pragma pack(push, 4)
struct PlayerFrameData {
    #if __cplusplus == 199711L
    bu32 frame;
    bu32 finalizedFrame;
    BrawlbackPad pad;
    BrawlbackPad sysPad;
    SyncData syncData;
    bu8 playerIdx;

    PlayerFrameData();
    PlayerFrameData(const PlayerFrameData &D);
    PlayerFrameData& operator=(const PlayerFrameData &D );
    #else
    bu32 frame = 0;
    bu32 finalizedFrame = 0;
    BrawlbackPad pad;
    BrawlbackPad sysPad;
    SyncData syncData;
    bu8 playerIdx = 0;
    #endif
};
#pragma pack(pop)
