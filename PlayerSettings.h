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
    bu8 colorFileIndex;
    PlayerType playerType;
    bu8 controllerPort;
    bool rumble;
    bu16 nametag[NAMETAG_SIZE];
    bu8 displayName[DISPLAY_NAME_SIZE];
    bu8 connectCode[CONNECT_CODE_SIZE];
    PlayerSettings();
    PlayerSettings(const PlayerSettings &D);
    PlayerSettings& operator=(const PlayerSettings &D );
    #else
    bu8 charID = 0;
    bu8 charColor = 0;
    bu8 colorFileIndex = 0;
    PlayerType playerType = 3;
    bu8 controllerPort = 0;
    bool rumble = false;
    bu16 nametag[NAMETAG_SIZE];
    bu8 displayName[DISPLAY_NAME_SIZE];
    bu8 connectCode[CONNECT_CODE_SIZE];
    #endif
};
#pragma pack(pop)
