#pragma once
#include "BrawlbackPad.h"

#pragma pack(push, 4)
struct PlayerFrameData {
    u32 frame;
    u8 playerIdx;
    BrawlbackPad pad;
};
#pragma pack(pop)