#pragma once
#pragma pack(push, 4)
struct BrawlbackPad {
    u32 _buttons;
    u32 buttons;
    u32 holdButtons;
    u32 rapidFireButtons;
    u32 releasedButtons;
    u32 newPressedButtons;
    u8 LAnalogue;
    u8 RAnalogue;
    u8 stickX;
    u8 stickY;
    u8 cStickX;
    u8 cStickY;
    u8 LTrigger;
    u8 RTrigger;
    BrawlbackPad()
    {
        _buttons = 0;
        buttons = 0;
        holdButtons = 0;
        rapidFireButtons = 0;
        releasedButtons = 0;
        newPressedButtons = 0;
        LAnalogue = 0;
        RAnalogue = 0;
        stickX = 0;
        stickY = 0;
        cStickX = 0;
        cStickY = 0;
        LTrigger = 0;
        RTrigger = 0;
    }
    BrawlbackPad& operator = (const BrawlbackPad &D ) { 
        _buttons = D._buttons;
        buttons = D.buttons;
        holdButtons = D.holdButtons;
        rapidFireButtons = D.rapidFireButtons;
        releasedButtons = D.releasedButtons;
        newPressedButtons = D.newPressedButtons;
        LAnalogue = D.LAnalogue;
        RAnalogue = D.RAnalogue;
        stickX = D.stickX;
        stickY = D.stickY;
        cStickX = D.cStickX;
        cStickY = D.cStickY;
        LTrigger = D.LTrigger;
        RTrigger = D.RTrigger;
    }
};
#pragma pack(pop)
