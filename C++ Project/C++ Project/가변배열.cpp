#include <iostream>

#include "Arr.h"

void BubbleSort(int* _pData, int _iCount)
{
	// 예외 처리
	if(_iCount <= 1)
		return;

	while (true)
	{
		bool bFinish = true;

		int iLoop = _iCount - 1;
		for (int i = 0; i < iLoop; ++i)
		{
			// iLoop번 만큼 반복했는데 if문이 한번도 안걸렸다? 그러면 정렬 완료!
			if (_pData[i] > _pData[i + 1]) {
				int temp = _pData[i];
				_pData[i] = _pData[i + 1];
				_pData[i + 1] = temp;

				bFinish = false;
			}
		}

		if (bFinish)
			break;
	}
}

int main() {
	tArr s = { };

	InitArr(&s);

	srand(time(nullptr));

	for (int i = 0; i < 3; ++i) {
		int iRand = rand() % 100 + 1;
		PushBack(&s, iRand);
	}

	Sort(&s, BubbleSort);

	for (int i = 0; i < s.iCount; ++i) {
		printf("%d\n", s.pInt[i]);
	}

	ReleaseArr(&s);

	// 연결형 리스트

	return 0;
}