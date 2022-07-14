#include "stdafx.h"
#include "GameMap.h"
#include "Bullet.h"	

void SGameMap::initGame()
{
	nCurLevel = 3001;
	// ��ʼ����ͼ�ؿ�
	curMapDt = g_dataMgr.mapDtMgr.getDataByID(nCurLevel);
	// ��ʼ�����λ��
	player.setPosition(curMapDt.nPlayerRow, curMapDt.nPlayerCol);
	nCurScore = 0;
}

SGameMap::SGameMap()
{
	initGame();
}

void SGameMap::update()
{
	if (KEY_DOWN(VK_ESCAPE))
	{
		g_gameMgr.nGameState = E_GAME_MENU;
		initGame();
	}
	player.update();
	bulletMgr.update();
	if (nCurScore >= curMapDt.nTargetScore)
	{
		g_gameMgr.nGameState = E_GAME_NEXT;
		if (nCurLevel >= 3003)
		{
			g_gameMgr.nGameState = E_GAME_OVER;
			initGame();
		}
		else
		{
			nCurLevel++;
		}

		curMapDt = g_dataMgr.mapDtMgr.getDataByID(nCurLevel);
		nCurScore = 0;
		player.setPosition(curMapDt.nPlayerRow, curMapDt.nPlayerCol);
	}
}

void SGameMap::render()
{
	cout << "��ǰ�ؿ���" << curMapDt.strName << endl;
	cout << "Ŀ�������" << curMapDt.nTargetScore << endl;
	cout << "��ǰ������" << nCurScore << endl;

	for (int i = 0; i < curMapDt.nRowCount; i++)
	{
		for (int j = 0; j < curMapDt.nColCount; j++)
		{
			// �Ƿ���Ⱦ���
			bool bDrawPlane = player.isExist(i, j);
			SBullet bullet = bulletMgr.isExist(i, j);

			if (curMapDt.arrMap[i][j] == 1)
			{
				cout << "��";
			}
			else if (curMapDt.arrMap[i][j] == 2)
			{
				cout << "��";
				//cout << "  ";
			}
			else if (bDrawPlane)
			{
				cout << "��";
			}
			else if (bullet.bShow)
			{
				cout << "��";
			}
			else if (curMapDt.arrMap[i][j] == 0)
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
}
