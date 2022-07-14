#include "stdafx.h"
#include "DataStruct.h"
#include <fstream>

// 加载地图数据
void SMapDtMgr::loadData(const string strPath)
{
	fstream inFile(strPath);
	if (inFile)
	{
		string str = "";
		getline(inFile, str);
		int nCount = 0;
		inFile >> nCount;
		for (int i = 0; i < nCount; i++)
		{
			SMapDt data;
			// 地图关卡名、行列数
			inFile >> data.nID >> data.strName >> data.nTargetScore >> data.nRowCount >> data.nColCount;
			// 玩家位置信息
			inFile >> data.nPlayerRow >> data.nPlayerCol;
			// 地图信息
			for (int x = 0; x < data.nRowCount; x++)
			{
				for (int y = 0; y < data.nColCount; y++)
				{
					inFile >> data.arrMap[x][y];
				}
			}
			vecDatas.push_back(data);
		}
	}
	inFile.close();
}

// 根据id获取地图
SMapDt SMapDtMgr::getDataByID(int nID)
{
	for (int i = 0; i < vecDatas.size(); i++)
	{
		if (vecDatas[i].nID == nID)
		{
			return vecDatas[i];
		}
	}
	// 返回空数据
	SMapDt data;
	return data;
}
