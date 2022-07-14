#include "stdafx.h"
#include "GameMgr.h"

SGameMgr::SGameMgr()
{
	nGameState = E_GAME_MENU;
}

void SGameMgr::update()
{
	if (nGameState == E_GAME_MENU)
	{
		gameMenu.update();
	}
	else if (nGameState == E_GAME_MAP)
	{
		gameMap.update();
	}
	else if (nGameState == E_GAME_NEXT)
	{
		gameNext.update();
	}
	else if (nGameState == E_GAME_OVER)
	{
		gameOver.update();
	}
}

void SGameMgr::render()
{
	if (nGameState == E_GAME_MENU)
	{
		gameMenu.render();
	}
	else if (nGameState == E_GAME_MAP)
	{
		gameMap.render();
	}
	else if (nGameState == E_GAME_NEXT)
	{
		gameNext.render();
	}
	else if (nGameState == E_GAME_OVER)
	{
		gameOver.render();
	}
}
