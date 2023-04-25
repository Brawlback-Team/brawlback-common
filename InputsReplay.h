#pragma once
#include "BrawlbackTypes.h"
#pragma pack(push, 4)
struct InputsReplay
{
  bu32 tapJump;
  bu32 dTaunt;
  bu32 sTaunt;
  bu32 uTaunt;
  bu32 cStick;
  bu32 shield;
  bu32 jump;
  bu32 special;
  bu32 attack;
  float leftStickX;
  float leftStickY;
  
  InputsReplay()
  {
    tapJump = 1;
    dTaunt = 1;
    sTaunt = 1;
    uTaunt = 1;
    cStick = 1;
    shield = 1;
    jump = 1;
    special = 1;
    attack = 1;
    leftStickX = 0.0;
    leftStickY = 0.0;
  }
  #if __cplusplus == 199711L
  InputsReplay(const InputsReplay &D)
  {
    tapJump = D.tapJump;
    dTaunt = D.dTaunt;
    sTaunt = D.sTaunt;
    uTaunt = D.uTaunt;
    cStick = D.cStick;
    shield = D.shield;
    jump = D.jump;
    special = D.special;
    attack = D.attack;
    leftStickX = D.leftStickX;
    leftStickY = D.leftStickY;
  }
  InputsReplay& operator = (const InputsReplay &D ) 
  { 
    tapJump = D.tapJump;
    dTaunt = D.dTaunt;
    sTaunt = D.sTaunt;
    uTaunt = D.uTaunt;
    cStick = D.cStick;
    shield = D.shield;
    jump = D.jump;
    special = D.special;
    attack = D.attack;
    leftStickX = D.leftStickX;
    leftStickY = D.leftStickY;
    return *this;
  }
  #endif
};
#pragma pack(pop)
