#pragma once
#include "BrawlbackTypes.h"
#pragma pack(push, 4)
struct SyncData {
    float percent;
    float locX;
    float locY;
    bu32 anim;
    bu8 stocks;
    bs8 facingDir;

    SyncData()
    {
        percent = 0.0;
        locX = 0.0;
        locY = 0.0;
        anim = 0;
        stocks = 0;
        facingDir = 0;
    }
    #if __cplusplus == 199711L
    SyncData(const SyncData &D )
    {
        percent = D.percent;
        locX = D.locX;
        locY = D.locY;
        anim = D.anim;
        stocks = D.stocks;
        facingDir = D.facingDir;
    }
    SyncData& operator = (const SyncData &D ) {
        percent = D.percent;
        locX = D.locX;
        locY = D.locY;
        anim = D.anim;
        stocks = D.stocks;
        facingDir = D.facingDir;
        return *this;
    }
    #endif
};
#pragma pack(pop)
