#include "stdafx.h"
#include "BulletMgr.h"
#include "DataStruct.h"

// 判断最下面一行是否为空
bool isLineEmpty()
{
	for (int i = 2; i < g_gameMgr.gameMap.curMapDt.nColCount - 2; i++)
	{
		if (g_gameMgr.gameMap.curMapDt.arrMap[5][i] == 2)
		{
			return false;
		}
	}
	return true;
}

// 下降一行
void dropLine()
{
	for (int i = 5; i > 1; i--)
	{
		for (int j = 0; j < g_gameMgr.gameMap.curMapDt.nColCount - 1; j++)
		{
			g_gameMgr.gameMap.curMapDt.arrMap[i][j] = g_gameMgr.gameMap.curMapDt.arrMap[i - 1][j];
		}
	}

	for (int i = 2; i < g_gameMgr.gameMap.curMapDt.nColCount - 2; i++)
	{
		g_gameMgr.gameMap.curMapDt.arrMap[1][i] = 2;
	}
}

void SBulletMgr::update()
{
	SMapDt& curMapDt = g_gameMgr.gameMap.curMapDt;
	int& nCurScore = g_gameMgr.gameMap.nCurScore;
	for (int i = 0; i < vecBullets.size();)
	{
		vecBullets[i].move();

		// 子弹到边界消失
		if (vecBullets[i].nRow < 0)
		{
			vecBullets.erase(vecBullets.begin() + i);
		}
		else if (2 == curMapDt.arrMap[vecBullets[i].nRow][vecBullets[i].nCol])
		{
			curMapDt.arrMap[vecBullets[i].nRow][vecBullets[i].nCol] = 0;

			vecBullets.erase(vecBullets.begin() + i);
			nCurScore += 10;
		}
		else
		{
			i++;
		}
	}
	// 如果最后一行，空了下降一行
	if (isLineEmpty())
	{
		dropLine();
	}
}

void SBulletMgr::addBullet(int initRow, int initCol)
{
	SBullet bullet(initRow, initCol);
	vecBullets.push_back(bullet);
}

SBullet SBulletMgr::isExist(int x, int y)
{
	for (SBullet bullet : vecBullets)
	{
		if (bullet.nRow == x && bullet.nCol == y)
		{
			return bullet;
		}
	}
	SBullet bullet;
	return bullet;
}
