#pragma once
#include <string>
#include <vector>
using namespace std;

struct SMapDt
{
	SMapDt()
	{
		nID = 0;
		strName = "";
		nTargetScore = 0;
		nRowCount = 0;
		nColCount = 0;
		nPlayerRow = 0;
		nPlayerCol = 0;
		memset(arrMap, 0, sizeof(arrMap));
	}

	int nID;
	string strName;
	int nTargetScore;
	int nRowCount;
	int nColCount;
	int nPlayerRow;
	int nPlayerCol;
	int arrMap[100][100];
};

struct SMapDtMgr
{
	void loadData(const string strPath);
	SMapDt getDataByID(int nID);

	vector<SMapDt> vecDatas;
};