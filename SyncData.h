#pragma once
#include "BrawlbackTypes.h"
#pragma pack(push, 4)
struct SyncData {
    #if __cplusplus == 199711L
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
        if( this != &D ) {
            percent = D.percent;
            locX = D.locX;
            locY = D.locY;
            anim = D.anim;
            stocks = D.stocks;
            facingDir = D.facingDir;
        }
        return *this;
    }
    #else
    float percent = 0.0;
    float locX = 0.0;
    float locY = 0.0;
    bu32 anim = 0;
    bu8 stocks = 0;
    bs8 facingDir = 0;
    #endif
};
#pragma pack(pop)
