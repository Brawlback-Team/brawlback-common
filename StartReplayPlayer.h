#pragma once
#include "PlayerPosition.h"

#pragma pack(push, 2)
struct StartReplayPlayer
{
  // Fighter kind = Fighter ID; ID that points to attributes about the Fighter
  // TODO: Consider refactoring to not requiring the fighter ID
  u8 fighterKind;
  // Actual ID that "points" to the Fighter object
  u8 slotID;
  PlayerPosition startPlayer;

  StartReplayPlayer() 
  {
    fighterKind = 0;
    slotID = 0;
  }
};
#pragma pack(pop)
