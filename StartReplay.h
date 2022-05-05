#include "PlayerPosition.h"
#pragma once
#pragma pack(push, 4)
struct StartReplay
{
  u32 randomSeed;
  u32 otherRandomSeed;
  int fighterKind;
  PlayerPosition* startPlayer;
  u8 stage;
};
#pragma pack(pop)
