#pragma once
#include "InputsReplay.h"
#include "ItemReplay.h"
#include "PlayerPosition.h"
#include "PlayerReplay.h"

const size_t MAX_NUM_ITEMS = 40;

#pragma pack(push, 4)
struct Replay
{
  u32 frameCounter;
  u8 numPlayers;
  u8 numItems;
  PlayerReplay players[MAX_NUM_PLAYERS];
  ItemReplay items[MAX_NUM_ITEMS];
  Replay()
  {
    frameCounter = 0;
    numPlayers = 0;
    numItems = 0;
  }
};
#pragma pack(pop)
