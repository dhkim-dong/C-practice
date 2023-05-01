#include <iostream>

#include "tArray.h"

using namespace std;

// int형 배열 생성
void InitArr(tArr* pArr) {
	pArr->pint = (int*)malloc(sizeof(int) * 2);
	pArr->iCount = 0;
	pArr->iMaxCount = 2;
}

void Reallocate(tArr* pArr) {
	// 새로운 주소를 저장할 지역 변수를 생성한다.
	int* newPoint = (int*)malloc(sizeof(int) * pArr->iMaxCount * 2);

	// 기존 주소에 있는 데이터를 새로운 주소에 복사한다.
	for (int i = 0; i < pArr->iMaxCount; ++i)
	{
		newPoint[i] = pArr->pint[i];
	}

	// 기존 공간의 메모리를 해제한다.
	free(pArr->pint);

	// 새로운 공간으로 주소를 변경한다.
	pArr->pint = newPoint;

	// 최대 카운트 수를 갱신한다.
	pArr->iMaxCount *= 2;

}

// 배열에 데이터 넣기
void PushBack(tArr* pArr, int iData) {

	// 만약에 해당 주소의 현재 Count가 MaxCount : 배열이 가득 찼다면.. 재할당해야한다.
	if(pArr->iMaxCount <= pArr->iCount)
	Reallocate(pArr);

	pArr->pint[pArr->iCount++] = iData;
}

// main함수가 종료될 때 메모리를 해제시켜줘야 하기 때문
// c#에서는 GC가 자동으로 해준다.
// 모던 C++에서는?
void ReleaseArr(tArr* pArr) {
	free(pArr->pint);
	pArr->iCount = 0;
	pArr->iMaxCount = 0;
}

// pArr에 있는것 주소, icount, maxCount


void SortArr(tArr* pArr) {
    
	// 배열의 maxCount - 1 번 만큼 반복해서 진행해주세요.
	for (int i = 0; i < pArr->iCount; i++)
	{
		for(int j=0; j < pArr->iCount-1 -i; j++)
		{
			if (pArr->pint[j] > pArr->pint[j + 1]) {
				int temp = pArr->pint[j];
				pArr->pint[j] = pArr->pint[j + 1];
				pArr->pint[j + 1] = temp;
			}
		}
	}
}