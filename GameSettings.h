#pragma once
#include "PlayerSettings.h"

constexpr size_t MAX_NUM_PLAYERS = 4;

struct GameSettings
{
    u8 localPlayerIdx;
    u8 numPlayers;
    u16 stageID;
    u32 randomSeed;
    PlayerSettings playerSettings[MAX_NUM_PLAYERS];
};