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
const UINT GAME_HEIGHT = 640;


const byte ESC_KEY = VK_ESCAPE;

#endif