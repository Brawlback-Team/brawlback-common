#pragma once
#include "BrawlbackPad.h"
#include "SyncData.h"
#include "BrawlbackTypes.h"
#include "BrawlbackControls.h"
#include "BrawlbackConstants.h"
#pragma pack(push, 4)
struct PlayerFrameData {
    #if __cplusplus == 199711L
    bu32 frame;
    BrawlbackPad pad[MAX_ROLLBACK_FRAMES];
    BrawlbackPad sysPad[MAX_ROLLBACK_FRAMES];
    SyncData syncData[MAX_ROLLBACK_FRAMES];
    bu8 playerIdx;

    PlayerFrameData();
    PlayerFrameData(const PlayerFrameData &D);
    PlayerFrameData& operator=(const PlayerFrameData &D );
    #else
    bu32 frame = 0;
    BrawlbackPad pad[MAX_ROLLBACK_FRAMES];
    BrawlbackPad sysPad[MAX_ROLLBACK_FRAMES];
    SyncData syncData[MAX_ROLLBACK_FRAMES];
    bu8 playerIdx = 0;
    #endif
};
#pragma pack(pop)
