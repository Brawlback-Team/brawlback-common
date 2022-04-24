#pragma once
#include "PlayerType.h"

#define NAMETAG_SIZE 8
#define DISPLAY_NAME_SIZE 31
#define CONNECT_CODE_SIZE 10

struct PlayerSettings
{
    u8 charID;
    u8 charColor;
    PlayerType playerType;
    u8 controllerPort;
    u16 nametag[NAMETAG_SIZE];
    u8 displayName[DISPLAY_NAME_SIZE];
    u8 connectCode[CONNECT_CODE_SIZE];
};