#pragma once
#include "PlayerPosition.h"
#include "StartReplayPlayer.h"
#include "GameSettings.h"

constexpr size_t MAX_REPLAY_NAME_SIZE = 20;

#pragma pack(push, 4)
struct StartReplay
{
  u32 randomSeed = 0;
  u32 otherRandomSeed = 0;
  u32 firstFrame = 0;
  u8 nameSize = 0;
  u8 nameBuffer[MAX_REPLAY_NAME_SIZE];
  u8 numPlayers = 0;
  StartReplayPlayer players[MAX_NUM_PLAYERS];
  u8 stage = 0;
};
#pragma pack(pop)
