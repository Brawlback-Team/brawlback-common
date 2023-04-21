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
};
#pragma pack(pop)
