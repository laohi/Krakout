#include "stdafx.h"
#include "Player.h"

void SPlayer::update()
{
	SMapDt mapDt = g_gameMgr.gameMap.curMapDt;
	if (KEY_DOWN(VK_UP))
	{
		if (nRow > 7)
		{
			setPosition(nRow - 1, nCol);
		}
	}
	else if (KEY_DOWN(VK_DOWN))
	{
		if (nRow < mapDt.nRowCount - 2)
		{
			setPosition(nRow + 1, nCol);
		}
	}
	else if (KEY_DOWN(VK_LEFT))
	{
		if (nCol > 2)
		{
			setPosition(nRow, nCol - 1);
		}
	}
	else if (KEY_DOWN(VK_RIGHT))
	{
		if (nCol < mapDt.nColCount - 3)
		{
			setPosition(nRow, nCol + 1);
		}
	}
	
	if (KEY_DOWN(VK_SPACE))
	{
		g_gameMgr.gameMap.bulletMgr.addBullet(arrPlane[2].nRow, arrPlane[2].nCol);
	}
}

void SPlayer::setPosition(int x, int y)
{
	nRow = x;
	nCol = y;
	arrPlane[0].nRow = x;
	arrPlane[0].nCol = y;
	arrPlane[1].nRow = x;
	arrPlane[1].nCol = y + 1;
	arrPlane[2].nRow = x - 1;
	arrPlane[2].nCol = y;
	arrPlane[3].nRow = x;
	arrPlane[3].nCol = y - 1;
}

bool SPlayer::isExist(int x, int y)
{
	for (int i = 0; i < 4; i++)
	{
		if (arrPlane[i].nRow == x && arrPlane[i].nCol == y)
		{
			return true;
		}
	}
	return false;
}
