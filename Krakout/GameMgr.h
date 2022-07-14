#pragma once
#include "GameMenu.h"
#include "GameMap.h"
#include "GameNext.h"
#include "GameOver.h"

struct SGameMgr
{
	SGameMgr();
	void update();
	void render();
	// 游戏菜单
	SGameMenu gameMenu;
	// 游戏地图
	SGameMap gameMap;
	// 下一关
	SGameNext gameNext;
	// 通关
	SGameOver gameOver;
	// 游戏状态
	int nGameState;
};

