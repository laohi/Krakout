// Krakout.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "stdafx.h"

// 隐藏光标
void hideCursor()
{
	CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

// 防止闪屏
void gotoxy(int x, int y)
{
	COORD pos;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	pos.X = x; pos.Y = y;
	SetConsoleCursorPosition(hOuput, pos);
}

SDataMgr g_dataMgr;
SGameMgr g_gameMgr;

int main()
{
	hideCursor();
	while (true) {
		system("cls");
		gotoxy(0, 0);
		g_gameMgr.update();
		g_gameMgr.render();
		Sleep(66);
	}
	return 0;
}