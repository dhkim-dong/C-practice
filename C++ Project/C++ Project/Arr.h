#pragma once

typedef struct _tagArr 
{
	int* pInt;
	int iCount;
	int iMaxCount;
}tArr;

void InitArr(tArr* _pArr);

void PushBack(tArr* _pArr, int _iData);

void ReleaseArr(tArr* _pArr);
