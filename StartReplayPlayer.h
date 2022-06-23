#pragma once
#include "PlayerPosition.h"

#pragma pack(push, 2)
struct StartReplayPlayer
{
  u8 fighterKind = 0;
  u8 slotID = 0;
  PlayerPosition startPlayer;
};
#pragma pack(pop)
