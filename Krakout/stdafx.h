#pragma once
#include <iostream>
#include <windows.h>

#include "GameMgr.h"
#include "DataMgr.h"

using namespace std;

extern SGameMgr g_gameMgr;
extern SDataMgr g_dataMgr;

enum {
	E_GAME_MENU,
	E_GAME_MAP,
	E_GAME_NEXT,
	E_GAME_OVER
};

#define KEY_DOWN(vk_code) ((GetAsyncKeyState(vk_code)&0x8000)?1:0)

