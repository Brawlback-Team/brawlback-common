#pragma once
#include "BrawlbackPad.h"

#pragma pack(push, 4)
struct PlayerFrameData {
    u32 frame = 0;
    u8 playerIdx = 0;
    BrawlbackPad pad;
};
#pragma pack(pop)