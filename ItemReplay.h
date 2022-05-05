#pragma once
#include "ItemIdName.h"

#pragma pack(push, 2)
struct ItemReplay
{
  ItemIdName* itemIds;
  u16* itemVariants;
};
#pragma pack(pop)
