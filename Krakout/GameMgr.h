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
	// ��Ϸ�˵�
	SGameMenu gameMenu;
	// ��Ϸ��ͼ
	SGameMap gameMap;
	// ��һ��
	SGameNext gameNext;
	// ͨ��
	SGameOver gameOver;
	// ��Ϸ״̬
	int nGameState;
};

