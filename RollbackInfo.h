#include "FrameData.h"

#pragma pack(push, 4)
struct RollbackInfo {
    bool isUsingPredictedInputs;
    u32 beginFrame; // frame we realized we have no remote inputs
    u32 endFrame; // frame we received new remote inputs, and should now resim with those
    FrameData predictedInputs;

    bool pastFrameDataPopulated;
    FrameData pastFrameDatas[MAX_ROLLBACK_FRAMES];

    bool hasPreserveBlocks;
};
#pragma pack(pop)