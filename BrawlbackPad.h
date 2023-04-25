#pragma once
#include "BrawlbackTypes.h"

#pragma pack(push, 4)
struct BrawlbackPad {
    bu32 _buttons;
    bu32 buttons;
    bu32 holdButtons;
    bu32 rapidFireButtons;
    bu32 releasedButtons;
    bu32 newPressedButtons;
    bu8 LAnalogue;
    bu8 RAnalogue;
    bu8 stickX;
    bu8 stickY;
    bu8 cStickX;
    bu8 cStickY;
    bu8 LTrigger;
    bu8 RTrigger;
    
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
    #if __cplusplus == 199711L
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
        return *this;
    }
    BrawlbackPad(const BrawlbackPad& D)
    {
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
    #endif
};
#pragma pack(pop)
