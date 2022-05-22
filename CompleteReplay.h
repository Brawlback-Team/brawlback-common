#pragma once
#include "StartReplay.h"
#include "Replay.h"
#pragma pack(push, 4)
struct CompleteReplay
{
  StartReplay startReplay;
  Replay replay;
};
#pragma pack(pop)
