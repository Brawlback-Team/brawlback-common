#pragma once
#include "BBConst.h"
#include "PlayerSettings.h"

#pragma pack(push, 2)
struct GameSettings
{
    u8 localPlayerIdx;
    u8 localPlayerPort;
    u8 numPlayers;
    u16 stageID;
    u32 randomSeed;
    PlayerSettings playerSettings[MAX_NUM_PLAYERS];
};
#pragma pack(pop)
