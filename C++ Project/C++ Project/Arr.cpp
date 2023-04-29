#include "Arr.h"

#include <iostream>

void Reallocate(tArr* _pArr);

void InitArr(tArr* _pArr)
{
	_pArr->pInt = (int*)malloc(sizeof(int) * 2);
	_pArr->iCount = 0;
	_pArr->iMaxCount = 2;
}


// Hip 영역에 배열을 추가할 경우에 해당 하는 주소에서 크기를 늘리는 것이 불가능 하다.
// 따라서 추가할 만큼의 공간을 사용하는 힙 메모리 영역을 새로 할당 받아야 한다.

void Reallocate(tArr* _pArr) {
	// 1. 새 공간을  동적할당 한다.
	int* pNew = (int*)malloc(_pArr->iMaxCount * 2 * sizeof(int));

	// 2. 기존 공간에 있던 데이터들을 새로 할당한 공간으로 복사시킨다.
	for (int i = 0; i < _pArr->iCount; ++i) {
		pNew[i] = _pArr->pInt[i];
	}


	// 3. 기존 공간을 해제한다.
	free(_pArr->pInt);

	// 4. 배열이 새로 할당된 공간을 가리키게 한다.
	_pArr->pInt = pNew;

	// 5. MaxCount 갱신
	_pArr->iMaxCount *= 2;
}


void PushBack(tArr* _pArr, int _iData) {

	if (_pArr->iMaxCount <= _pArr->iCount) {
		// 재할당 (메모리 추가)
		Reallocate(_pArr);
	}

	// 힙 메모리 주소의 현재 Count에 해당하는 배열에 원소 넣기
	_pArr->pInt[_pArr->iCount++] = _iData;
}

void ReleaseArr(tArr* _pArr) {
	free(_pArr->pInt);
	_pArr->iCount = 0;
	_pArr->iMaxCount = 0;
}