#pragma once
#pragma pack(push, 4)
struct InputsReplay
{
  u32 tapJump;
  u32 dTaunt;
  u32 sTaunt;
  u32 uTaunt;
  u32 cStick;
  u32 shield;
  u32 jump;
  u32 special;
  u32 attack;
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
  void operator = (const InputsReplay &D ) { 
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
};
#pragma pack(pop)
