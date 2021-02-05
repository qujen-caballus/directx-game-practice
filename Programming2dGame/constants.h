#ifndef _CONSTANTS_H
#define _CONSTANTS_H
#define WIN32_LEAN_AND_MEAN

#include <Windows.h>

#define SAFE_DELETE(ptr) {if (ptr) {delete (ptr); (ptr)=NULL;}}
#define SAFE_RELEASE(ptr) {if(ptr) {(ptr) -> Release(); (ptr)=NULL;}}
#define SAFE_DELETE_ARRAY(ptr) {if(ptr){delete [](ptr); (ptr) = NULL;}}

const char CLASS_NAME[] = "WinMain";
const char GAME_TITLE[] = "DirectX Window";
const bool FULLSCREEN = false;
const UINT GAME_WIDTH = 640;
const UINT GAME_HEIGHT = 480;

const double PI = 3.14159265;
const float FRAME_RATE = 200.0f;
const float MIN_FRAME_RATE = 10.0f;
const float MIN_FRAME_TIME = 1.0f / FRAME_RATE;
const float MAX_FRAME_TIME = 1.0f / MIN_FRAME_RATE;


const UCHAR ESC_KEY = VK_ESCAPE;
const UCHAR ALT_KEY = VK_MENU;
const UCHAR ENTER_KEY = VK_RETURN;

#endif