#include <iostream>

#include "tArray.h"

using namespace std;

int main() {

	MyArr s = { }; // ����ü �����͸� ����Ͽ�, �ʿ��� �������� ��� �ִ� �޸� ��밡��

	InitArr(&s);

	for (int i = 3; i < 10; i++)
	{
		PushBack(&s, i);
	}

	for (int i = 1; i < 3; i++)
	{
		PushBack(&s, i);
	}

	SortArr(&s);

	for (int i = 0; i < s.iCount; i++) {
		printf("%d\n", s.pint[i]);
	}



	ReleaseArr(&s);

	return 0;

}