#pragma once
#include "Bullet.h"
#include <vector>
using namespace std;

struct SBulletMgr
{
	void update();
	void addBullet(int initRow, int initCol);
	SBullet isExist(int x, int y);

	vector<SBullet> vecBullets;
};

