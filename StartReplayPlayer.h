#pragma once
#include "PlayerPosition.h"

#pragma pack(push, 1)
struct StartReplayPlayer
{
  int fighterKind;
  PlayerPosition startPlayer;
};
#pragma pack(pop)
