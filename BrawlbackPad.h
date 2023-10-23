#pragma once
#include "BrawlbackTypes.h"

#pragma pack(push, 4)
struct BrawlbackPad {
    #if __cplusplus == 199711L
    bu32 _buttons;
    bu32 buttons;
    bu32 holdButtons;
    bu32 rapidFireButtons;
    bu32 releasedButtons;
    bu32 newPressedButtons;
    char LAnalogue;
    char RAnalogue;
    char LTrigger;
    char RTrigger;
    char stickX;
    char stickY;
    char cStickX;
    char cStickY;
    
    BrawlbackPad();
    BrawlbackPad& operator=(const BrawlbackPad &D );
    BrawlbackPad(const BrawlbackPad& D);
    #else
    bu32 _buttons = 0;
    bu32 buttons = 0;
    bu32 holdButtons = 0;
    bu32 rapidFireButtons = 0;
    bu32 releasedButtons = 0;
    bu32 newPressedButtons = 0;
    char LAnalogue = 0;
    char RAnalogue = 0;
    char LTrigger = 0;
    char RTrigger = 0;
    char stickX = 0;
    char stickY = 0;
    char cStickX = 0;
    char cStickY = 0;
    #endif
};
#pragma pack(pop)
