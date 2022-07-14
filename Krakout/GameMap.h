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

	// ��ǰ�ĵ�ͼ����
	SMapDt curMapDt;
	// ���
	SPlayer player;
	// �ӵ�����
	SBulletMgr bulletMgr;
	// ��ǰ����
	int nCurScore;
	// ��ǰ�ؿ�
	int nCurLevel;
};

