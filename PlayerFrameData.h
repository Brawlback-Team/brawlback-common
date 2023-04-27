#pragma once
#include "BrawlbackPad.h"
#include "SyncData.h"
#include "BrawlbackTypes.h"
#pragma pack(push, 4)
struct PlayerFrameData {
    #if __cplusplus == 199711L
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
    #else
    bu32 randomSeed = 0;
    bu32 frame = 0;
    BrawlbackPad pad;
    BrawlbackPad sysPad;
    SyncData syncData;
    bu8 playerIdx = 0;
    #endif
};
#pragma pack(pop)