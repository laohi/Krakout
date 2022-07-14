#include "stdafx.h"
#include "GameNext.h"

void SGameNext::update()
{
	if (KEY_DOWN(VK_RETURN))
	{
		g_gameMgr.gameMap.bulletMgr.vecBullets.clear();
		g_gameMgr.nGameState = E_GAME_MAP;
	}
}

void SGameNext::render()
{
	cout << "■■■■■■■■■■■■■" << endl;
	cout << "■        " << g_gameMgr.gameMap.curMapDt.strName << "        ■" << endl;
	cout << "■                      ■" << endl;
	cout << "■      " << "按回车开始" << "      ■" << endl;
	cout << "■                      ■" << endl;
	cout << "■■■■■■■■■■■■■" << endl;
}
