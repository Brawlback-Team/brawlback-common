#pragma once
#include "PlayerPosition.h"
#include "InputsReplay.h"

#pragma pack(push, 4)
struct PlayerReplay
{
  u32 actionState = 0;
  u8 stockCount = 0;
  double damage = 0.0;
  PlayerPosition pos;
  BrawlbackPad inputs;
};
#pragma pack(pop)