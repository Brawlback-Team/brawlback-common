#pragma once
#include "InputsReplay.h"
#include "ItemReplay.h"
#include "PlayerPosition.h"
#include "PlayerReplay.h"

constexpr size_t MAX_NUM_ITEMS = 40;

#pragma pack(push, 4)
struct Replay
{
  u32 frameCounter = 0;
  u8 numPlayers = 0;
  u8 numItems = 0;
  PlayerReplay players[MAX_NUM_PLAYERS];
  ItemReplay items[MAX_NUM_ITEMS];
};
#pragma pack(pop)
