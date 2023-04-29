#include "Arr.h"

#include <iostream>

void Reallocate(tArr* _pArr);

void InitArr(tArr* _pArr)
{
	_pArr->pInt = (int*)malloc(sizeof(int) * 2);
	_pArr->iCount = 0;
	_pArr->iMaxCount = 2;
}


// Hip ������ �迭�� �߰��� ��쿡 �ش� �ϴ� �ּҿ��� ũ�⸦ �ø��� ���� �Ұ��� �ϴ�.
// ���� �߰��� ��ŭ�� ������ ����ϴ� �� �޸� ������ ���� �Ҵ� �޾ƾ� �Ѵ�.

void Reallocate(tArr* _pArr) {
	// 1. �� ������  �����Ҵ� �Ѵ�.
	int* pNew = (int*)malloc(_pArr->iMaxCount * 2 * sizeof(int));

	// 2. ���� ������ �ִ� �����͵��� ���� �Ҵ��� �������� �����Ų��.
	for (int i = 0; i < _pArr->iCount; ++i) {
		pNew[i] = _pArr->pInt[i];
	}


	// 3. ���� ������ �����Ѵ�.
	free(_pArr->pInt);

	// 4. �迭�� ���� �Ҵ�� ������ ����Ű�� �Ѵ�.
	_pArr->pInt = pNew;

	// 5. MaxCount ����
	_pArr->iMaxCount *= 2;
}


void PushBack(tArr* _pArr, int _iData) {

	if (_pArr->iMaxCount <= _pArr->iCount) {
		// ���Ҵ� (�޸� �߰�)
		Reallocate(_pArr);
	}

	// �� �޸� �ּ��� ���� Count�� �ش��ϴ� �迭�� ���� �ֱ�
	_pArr->pInt[_pArr->iCount++] = _iData;
}

void ReleaseArr(tArr* _pArr) {
	free(_pArr->pInt);
	_pArr->iCount = 0;
	_pArr->iMaxCount = 0;
}