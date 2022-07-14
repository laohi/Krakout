#include "stdafx.h"
#include "GameMenu.h"

enum {
	E_MENU_START,
	E_MENU_SET,
	E_MENU_EXIT
};

SGameMenu::SGameMenu()
{
	nMenuState = E_MENU_START;
}

void SGameMenu::update()
{
	if (KEY_DOWN(VK_UP))
	{
		nMenuState = (nMenuState + 2) % 3;
	}
	else if (KEY_DOWN(VK_DOWN))
	{
		nMenuState = (nMenuState + 1) % 3;
	}

	if (KEY_DOWN(VK_RETURN))
	{
		if (nMenuState == E_MENU_START)
		{
			g_gameMgr.nGameState = E_GAME_NEXT;
		}
		else if (nMenuState == E_MENU_EXIT)
		{
			exit(0);
		}
	}
}

void SGameMenu::render()
{
	if (nMenuState == E_MENU_START)
	{
		cout << "��������������������������" << endl;
		cout << "��     ��  Ϸ  ��  ��   ��" << endl;
		cout << "��     -> ��Ϸ��ʼ      ��" << endl;
		cout << "��        ��Ϸ����      ��" << endl;
		cout << "��        ��Ϸ�˳�      ��" << endl;
		cout << "��������������������������" << endl;
	}
	else if (nMenuState == E_MENU_SET)
	{
		cout << "��������������������������" << endl;
		cout << "��     ��  Ϸ  ��  ��   ��" << endl;
		cout << "��        ��Ϸ��ʼ      ��" << endl;
		cout << "��     -> ��Ϸ����      ��" << endl;
		cout << "��        ��Ϸ�˳�      ��" << endl;
		cout << "��������������������������" << endl;
	}
	else if (nMenuState == E_MENU_EXIT)
	{
		cout << "��������������������������" << endl;
		cout << "��     ��  Ϸ  ��  ��   ��" << endl;
		cout << "��        ��Ϸ��ʼ      ��" << endl;
		cout << "��        ��Ϸ����      ��" << endl;
		cout << "��     -> ��Ϸ�˳�      ��" << endl;
		cout << "��������������������������" << endl;
	}
}
