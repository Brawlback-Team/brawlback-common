#pragma once
#include "PlayerType.h"
#include "BrawlbackTypes.h"
const bu32 NAMETAG_SIZE = 8;
const bu32 DISPLAY_NAME_SIZE = 31;
const bu32 CONNECT_CODE_SIZE = 10;

#pragma pack(push, 2)
struct PlayerSettings
{
    #if __cplusplus == 199711L
    bu8 charID;
    bu8 charColor;
    PlayerType playerType;
    bu8 controllerPort;
    bu16 nametag[NAMETAG_SIZE];
    bu8 displayName[DISPLAY_NAME_SIZE];
    bu8 connectCode[CONNECT_CODE_SIZE];
    PlayerSettings() {}
    PlayerSettings(const PlayerSettings &D)
    {
        charID = D.charID;
        charColor = D.charColor;
        playerType = D.playerType;
        controllerPort = D.controllerPort;
        for(int i = 0; i < NAMETAG_SIZE; i++)
        {
            nametag[i] = D.nametag[i];
        }
        for(int i = 0; i < DISPLAY_NAME_SIZE; i++)
        {
            displayName[i] = D.displayName[i];
        }
        for(int i = 0; i < CONNECT_CODE_SIZE; i++)
        {
            connectCode[i] = D.connectCode[i];
        }
    }
    PlayerSettings& operator = (const PlayerSettings &D ) {
        charID = D.charID;
        charColor = D.charColor;
        playerType = D.playerType;
        controllerPort = D.controllerPort;
        for(int i = 0; i < NAMETAG_SIZE; i++)
        {
            nametag[i] = D.nametag[i];
        }
        for(int i = 0; i < DISPLAY_NAME_SIZE; i++)
        {
            displayName[i] = D.displayName[i];
        }
        for(int i = 0; i < CONNECT_CODE_SIZE; i++)
        {
            connectCode[i] = D.connectCode[i];
        }
        return *this;
    }
    #else
    bu8 charID;
    bu8 charColor;
    PlayerType playerType;
    bu8 controllerPort;
    bu16 nametag[NAMETAG_SIZE];
    bu8 displayName[DISPLAY_NAME_SIZE];
    bu8 connectCode[CONNECT_CODE_SIZE];
    #endif
};
#pragma pack(pop)
