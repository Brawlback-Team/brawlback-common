#pragma once
#include "BrawlbackConstants.h"
#include "PlayerSettings.h"

#pragma pack(push, 2)
struct GameSettings
{
    bu8 localPlayerIdx;
    bu8 localPlayerPort;
    bu8 numPlayers;
    bu16 stageID;
    bu32 randomSeed;
    PlayerSettings playerSettings[MAX_NUM_PLAYERS];
    GameSettings() {}
    #if __cplusplus == 199711L
    GameSettings(const GameSettings &D)
    {
        localPlayerIdx = D.localPlayerIdx;
        localPlayerPort = D.localPlayerPort;
        numPlayers = D.numPlayers;
        stageID = D.stageID;
        randomSeed = D.randomSeed;
        for(int i = 0; i < MAX_NUM_PLAYERS; i++)
        {
            playerSettings[i] = D.playerSettings[i];
        }
    }
    GameSettings& operator = (const GameSettings &D ) { 
        localPlayerIdx = D.localPlayerIdx;
        localPlayerPort = D.localPlayerPort;
        numPlayers = D.numPlayers;
        stageID = D.stageID;
        randomSeed = D.randomSeed;
        for(int i = 0; i < MAX_NUM_PLAYERS; i++)
        {
            playerSettings[i] = D.playerSettings[i];
        }
        return *this;
    }
    #endif
};
#pragma pack(pop)
