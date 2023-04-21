#pragma once
#include "GameSettings.h"
#include "PlayerPosition.h"
#include "StartReplayPlayer.h"

const size_t MAX_REPLAY_NAME_SIZE = 17;

#pragma pack(push, 4)
struct StartReplay
{
  u32 randomSeed;
  u32 otherRandomSeed;
  u32 firstFrame;
  u8 nameSize;
  u8 nameBuffer[MAX_REPLAY_NAME_SIZE];
  u8 numPlayers;
  StartReplayPlayer players[MAX_NUM_PLAYERS];
  u8 stage;
  char gameData[0x320];

  StartReplay() 
  {
    randomSeed = 0;
    otherRandomSeed = 0;
    firstFrame = 0;
    nameSize = 0;
    numPlayers = 0;
    stage = 0;
  }
};
#pragma pack(pop)
