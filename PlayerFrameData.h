#pragma once
#include "BrawlbackPad.h"
#include "SyncData.h"
#include "BrawlbackTypes.h"
#pragma pack(push, 4)
struct PlayerFrameData {
    bu32 randomSeed;
    bu32 frame;
    BrawlbackPad pad;
    BrawlbackPad sysPad;
    SyncData syncData;
    bu8 playerIdx;

    PlayerFrameData()
    {
        randomSeed = 0;
        frame = 0;
        playerIdx = 0;
    }
    #if __cplusplus == 199711L
    PlayerFrameData(const PlayerFrameData &D)
    {
        randomSeed = D.randomSeed;
        frame = D.frame;
        pad = D.pad;
        sysPad = D.sysPad;
        syncData = D.syncData;
        playerIdx = D.playerIdx;
    }
    PlayerFrameData& operator = (const PlayerFrameData &D ) { 
        randomSeed = D.randomSeed;
        frame = D.frame;
        pad = D.pad;
        sysPad = D.sysPad;
        syncData = D.syncData;
        playerIdx = D.playerIdx;
        return *this;
    }
    #endif
};
#pragma pack(pop)