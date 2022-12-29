#pragma once
#pragma pack(push, 4)
struct BrawlbackPad {
    u32 buttons = 0;
    u32 holdButtons = 0;
    u32 rapidFireButtons = 0;
    u32 releasedButtons = 0;
    u32 newPressedButtons = 0;
    u8 LAnalogue = 0;
    u8 RAnalogue = 0;
    u8 stickX = 0;
    u8 stickY = 0;
    u8 cStickX = 0;
    u8 cStickY = 0;
    u8 LTrigger = 0;
    u8 RTrigger = 0;
};
#pragma pack(pop)