#pragma once
#include "ItemIdName.h"

#pragma pack(push, 2)
struct ItemReplay
{
  ItemIdName itemId;
  u16 itemVariant;
  ItemReplay()
  {
    itemVariant = 0;
  }
};
#pragma pack(pop)
