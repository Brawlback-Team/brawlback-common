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
    bu8 LAnalogue;
    bu8 RAnalogue;
    bu8 LTrigger;
    bu8 RTrigger;
    bs8 stickX;
    bs8 stickY;
    bs8 cStickX;
    bs8 cStickY;
    
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
    bu8 LAnalogue = 0;
    bu8 RAnalogue = 0;
    bu8 LTrigger = 0;
    bu8 RTrigger = 0;
    bs8 stickX = 0;
    bs8 stickY = 0;
    bs8 cStickX = 0;
    bs8 cStickY = 0;
    #endif
};
#pragma pack(pop)
