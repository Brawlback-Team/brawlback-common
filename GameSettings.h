#pragma once
#include "BrawlbackConstants.h"
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
    void operator = (const GameSettings &D ) { 
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
};
#pragma pack(pop)
