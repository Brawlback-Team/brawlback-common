#pragma once
#include "BrawlbackConstants.h"
#include "PlayerSettings.h"

#pragma pack(push, 2)
struct GameSettings
{
    #if __cplusplus == 199711L
    bu8 localPlayerIdx;
    bu8 localPlayerPort;
    bu8 numPlayers;
    bu16 stageID;
    bu32 randomSeed;
    PlayerSettings playerSettings[MAX_NUM_PLAYERS];
    GameSettings();
    GameSettings(const GameSettings &D);
    GameSettings& operator = (const GameSettings &D );
    #else
    bu8 localPlayerIdx;
    bu8 localPlayerPort;
    bu8 numPlayers;
    bu16 stageID;
    bu32 randomSeed;
    PlayerSettings playerSettings[MAX_NUM_PLAYERS];
    GameSettings();
    GameSettings(const GameSettings &D);
    GameSettings& operator = (const GameSettings &D );
    #endif
};
#pragma pack(pop)
