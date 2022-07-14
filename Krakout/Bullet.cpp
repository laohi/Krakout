#include "stdafx.h"
#include "Bullet.h"

SBullet::SBullet()
{
	nRow = 0;
	nCol = 0;
	bShow = false;
}

SBullet::SBullet(int initRow, int initCol)
{
	nRow = initRow;
	nCol = initCol;
	bShow = true;
}

void SBullet::move()
{
	nRow--;
}
