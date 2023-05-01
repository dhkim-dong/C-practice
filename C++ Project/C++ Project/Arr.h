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

void Sort(tArr* _pArr, void(*SortFunc)(int*, int));

// 헤더에서 소스파일로 생성하는 단축키 ctrl + '+' + '.'