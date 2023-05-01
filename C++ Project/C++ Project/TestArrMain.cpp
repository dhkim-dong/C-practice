#include <iostream>

#include "tArray.h"

using namespace std;

int main() {

	MyArr s = { }; // 구조체 포인터를 사용하여, 필요한 정보들이 담겨 있는 메모리 사용가능

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