#pragma once
struct SBullet
{
	SBullet();
	SBullet(int initRow, int initCol);
	void move();

	int nRow;
	int nCol;
	bool bShow;
};

