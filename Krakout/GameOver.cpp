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
	cout << "��������������������������" << endl;
	cout << "��     ��ϲ��ͨ����     ��" << endl;
	cout << "��                      ��" << endl;
	cout << "��    ���س����ز˵�    ��" << endl;
	cout << "��                      ��" << endl;
	cout << "��������������������������" << endl;
}
