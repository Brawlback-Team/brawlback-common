#pragma once


/* ======== Rollback ======== */
constexpr s32 MAX_ROLLBACK_FRAMES = 5;
constexpr s32 FRAME_DELAY = 2;
static_assert(FRAME_DELAY >= 1);
static_assert(FRAME_DELAY + MAX_ROLLBACK_FRAMES >= 6); // minimum frames of "compensation"
constexpr bool ROLLBACK_IMPL = true;

/* ======== General Netplay ======== */
// number of max FrameData's to keep in the (remote) queue
constexpr s32 FRAMEDATA_MAX_QUEUE_SIZE = 15; 
static_assert(FRAMEDATA_MAX_QUEUE_SIZE > MAX_ROLLBACK_FRAMES);
constexpr s32 GAME_START_FRAME = 0;
// before this frame we basically use delay-based netcode to ensure things are reasonably synced up before doing rollback stuff
constexpr s32 GAME_FULL_START_FRAME = 100;
constexpr s32 MAX_REMOTE_PLAYERS = 3;
constexpr s32 MAX_NUM_PLAYERS = 4;
constexpr s32 BRAWLBACK_PORT = 7779;

/* ======== Timesync ======== */
// update ping display every X frames
constexpr s32 PING_DISPLAY_INTERVAL = 30;
// check clock desynchronization every X frames
constexpr s32 ONLINE_LOCKSTEP_INTERVAL = 30;
constexpr s32 TIMESYNC_MAX_US_OFFSET = 10000; // 60% of a frame

/* ======== Debug Toggles ======== */
//#define SYNCLOG
//#define RANDOM_INPUTS

/* ======== Utils ======== */
constexpr float MS_IN_FRAME = 1000 / 60;
constexpr u8 USEC_IN_FRAME = MS_IN_FRAME * 1000;
#define MS_TO_FRAMES(ms) (ms * 60 / 1000)
#define FRAMES_TO_MS(frames) (1000 * frames / 60)