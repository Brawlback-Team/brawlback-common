#pragma once
#include "ItemReplay.h"
#include "InputsReplay.h"
#include "PlayerPosition.h"
#pragma pack(push, 4)
struct Replay
{
  u32 frameCounter;
  u32 persistentFrameCounter;
  u32 actionState;
  double damage;
  int stockCount;
  PlayerPosition pos;
  ItemReplay items;
  InputsReplay inputs;
};
#pragma pack(pop)
