#pragma once
#pragma pack(push, 2)
struct BrawlbackPad {
    u16 buttons;
    u8 stickX;
    u8 stickY;
    u8 cStickX;
    u8 cStickY;
    u8 LTrigger;
    u8 RTrigger;
};
#pragma pack(pop)