#pragma once
#include "DataStruct.h"
#include "Player.h"
#include "BulletMgr.h"

struct SGameMap
{
	SGameMap();
	void update();
	void render();
	void initGame();

	// 当前的地图数据
	SMapDt curMapDt;
	// 玩家
	SPlayer player;
	// 子弹管理
	SBulletMgr bulletMgr;
	// 当前分数
	int nCurScore;
	// 当前关卡
	int nCurLevel;
};

