#pragma once
struct PreserveBlock {
    u32 address;
    u32 length;
    bool operator==(const PreserveBlock& p) const
    {
      return address == p.address && length == p.length;
    }
};
