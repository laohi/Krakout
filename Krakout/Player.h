#pragma once

struct SBlock
{
	int nRow;
	int nCol;
};

struct SPlayer
{
	void update();
	void setPosition(int x, int y);
	bool isExist(int x, int y);

	SBlock arrPlane[4];
	int nRow;
	int nCol;
	int nRowBk;
	int nColBk;
};

