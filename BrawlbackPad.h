#pragma once
#pragma pack(push, 2)
struct BrawlbackPad {
    u16 buttons = 0;
    u8 stickX = 0;
    u8 stickY = 0;
    u8 cStickX = 0;
    u8 cStickY = 0;
    u8 LTrigger = 0;
    u8 RTrigger = 0;
};
#pragma pack(pop)