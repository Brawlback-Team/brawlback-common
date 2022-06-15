#include "FrameData.h"

#pragma pack(push, 4)
#pragma once

constexpr s32 MAX_ROLLBACK_FRAMES = 5;

struct RollbackInfo {
    bool isPredicting;
    u32 beginFrame; // frame we realized we have no remote inputs
    u32 endFrame; // frame we received new remote inputs, and should now resim with those
    FrameData predictedInputs;

    bool shouldRollbackThisFrame;
    FrameData pastFrameDatas[MAX_ROLLBACK_FRAMES];

    bool hasPreserveBlocks;
};
#pragma pack(pop)