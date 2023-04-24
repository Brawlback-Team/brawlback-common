#pragma once
#include "PlayerType.h"

const u32 NAMETAG_SIZE = 8;
const u32 DISPLAY_NAME_SIZE = 31;
const u32 CONNECT_CODE_SIZE = 10;

#pragma pack(push, 2)
struct PlayerSettings
{
    u8 charID;
    u8 charColor;
    PlayerType playerType;
    u8 controllerPort;
    u16 nametag[NAMETAG_SIZE];
    u8 displayName[DISPLAY_NAME_SIZE];
    u8 connectCode[CONNECT_CODE_SIZE];
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
};
#pragma pack(pop)
