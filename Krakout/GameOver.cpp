#include "stdafx.h"
#include "GameOver.h"

void SGameOver::update()
{
	if (KEY_DOWN(VK_RETURN))
	{
		g_gameMgr.nGameState = E_GAME_MENU;
	}
}

void SGameOver::render()
{
	cout << "■■■■■■■■■■■■■" << endl;
	cout << "■     恭喜你通关了     ■" << endl;
	cout << "■                      ■" << endl;
	cout << "■    按回车返回菜单    ■" << endl;
	cout << "■                      ■" << endl;
	cout << "■■■■■■■■■■■■■" << endl;
}
