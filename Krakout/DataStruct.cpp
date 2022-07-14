#include "stdafx.h"
#include "DataStruct.h"
#include <fstream>

// ���ص�ͼ����
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
			// ��ͼ�ؿ�����������
			inFile >> data.nID >> data.strName >> data.nTargetScore >> data.nRowCount >> data.nColCount;
			// ���λ����Ϣ
			inFile >> data.nPlayerRow >> data.nPlayerCol;
			// ��ͼ��Ϣ
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

// ����id��ȡ��ͼ
SMapDt SMapDtMgr::getDataByID(int nID)
{
	for (int i = 0; i < vecDatas.size(); i++)
	{
		if (vecDatas[i].nID == nID)
		{
			return vecDatas[i];
		}
	}
	// ���ؿ�����
	SMapDt data;
	return data;
}
