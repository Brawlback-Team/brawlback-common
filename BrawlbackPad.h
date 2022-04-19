#pragma pack(push, 2)
struct BrawlbackPad {
    unsigned short buttons;
    char stickX;
    char stickY;
    char cStickX;
    char cStickY;
    char LTrigger;
    char RTrigger;
};
#pragma pack(pop)