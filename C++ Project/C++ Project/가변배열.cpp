#include <iostream>

#include "Arr.h"

void BubbleSort(int* _pData, int _iCount)
{
	// ���� ó��
	if(_iCount <= 1)
		return;

	while (true)
	{
		bool bFinish = true;

		int iLoop = _iCount - 1;
		for (int i = 0; i < iLoop; ++i)
		{
			// iLoop�� ��ŭ �ݺ��ߴµ� if���� �ѹ��� �Ȱɷȴ�? �׷��� ���� �Ϸ�!
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

	// ������ ����Ʈ

	return 0;
}