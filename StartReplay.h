#include "PlayerPosition.h"
#include "StartReplayPlayer.h"
#pragma once
#pragma pack(push, 4)
struct StartReplay
{
  u32 randomSeed = 0;
  u32 otherRandomSeed = 0;
  u8 numPlayers = 0;
  StartReplayPlayer players[4];
  u8 stage = 0;
};
#pragma pack(pop)
