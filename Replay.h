#pragma once
#include "ItemReplay.h"
#include "InputsReplay.h"
#include "PlayerPosition.h"
#include "PlayerReplay.h"

#pragma pack(push, 4)
struct Replay
{
  u32 frameCounter;
  u32 persistentFrameCounter;
  u8 numPlayers;
  u8 numItems;
  PlayerReplay* players;
  ItemReplay* items;
};
#pragma pack(pop)
