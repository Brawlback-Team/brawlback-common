#include "PlayerPosition.h"
#include "StartReplayPlayer.h"
#pragma once
#pragma pack(push, 4)
struct StartReplay
{
  u32 randomSeed;
  u32 otherRandomSeed;
  StartReplayPlayer* players;
  u8 stage;
};
#pragma pack(pop)
