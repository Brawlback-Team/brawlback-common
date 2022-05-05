#pragma once
#include "PlayerPosition.h"
#include "InputsReplay.h"

#pragma pack(push, 4)
struct PlayerReplay
{
  u32 actionState;
  double damage;
  int stockCount;
  PlayerPosition pos;
  InputsReplay inputs;
};
#pragma pack(pop)
