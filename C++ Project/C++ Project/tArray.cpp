#include <iostream>

#include "tArray.h"

using namespace std;

// int�� �迭 ����
void InitArr(tArr* pArr) {
	pArr->pint = (int*)malloc(sizeof(int) * 2);
	pArr->iCount = 0;
	pArr->iMaxCount = 2;
}

void Reallocate(tArr* pArr) {
	// ���ο� �ּҸ� ������ ���� ������ �����Ѵ�.
	int* newPoint = (int*)malloc(sizeof(int) * pArr->iMaxCount * 2);

	// ���� �ּҿ� �ִ� �����͸� ���ο� �ּҿ� �����Ѵ�.
	for (int i = 0; i < pArr->iMaxCount; ++i)
	{
		newPoint[i] = pArr->pint[i];
	}

	// ���� ������ �޸𸮸� �����Ѵ�.
	free(pArr->pint);

	// ���ο� �������� �ּҸ� �����Ѵ�.
	pArr->pint = newPoint;

	// �ִ� ī��Ʈ ���� �����Ѵ�.
	pArr->iMaxCount *= 2;

}

// �迭�� ������ �ֱ�
void PushBack(tArr* pArr, int iData) {

	// ���࿡ �ش� �ּ��� ���� Count�� MaxCount : �迭�� ���� á�ٸ�.. ���Ҵ��ؾ��Ѵ�.
	if(pArr->iMaxCount <= pArr->iCount)
	Reallocate(pArr);

	pArr->pint[pArr->iCount++] = iData;
}

// main�Լ��� ����� �� �޸𸮸� ����������� �ϱ� ����
// c#������ GC�� �ڵ����� ���ش�.
// ��� C++������?
void ReleaseArr(tArr* pArr) {
	free(pArr->pint);
	pArr->iCount = 0;
	pArr->iMaxCount = 0;
}

// pArr�� �ִ°� �ּ�, icount, maxCount


void SortArr(tArr* pArr) {
    
	// �迭�� maxCount - 1 �� ��ŭ �ݺ��ؼ� �������ּ���.
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