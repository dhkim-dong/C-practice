#include <stdio.h>

using namespace std;

// 함수
// Factorial
// 8! 의미 : 8 x 7 x 6 x 5 x 4 x 3 x 2 x 1
// 기능으로 만들어 보자..
// 예상하기 쉬운 숫자를 먼저 넣어 보고 생각해보자.
// main에서 코드로 사용한 기능이 또 사용해야 하는 경우가 생기면 어떻게 해야하나요?
// 이런 기능 구현해놓은 사람 없어?
// ~파일 ~에 있는 코드 복사해서 쓰면 된다? (X)
// 결론 : 하나의 기능을 함수로 정의해놓고[모듈화] 여러 곳에서 사용하기 위함
// (1) 하나의 프로젝트 기능을 만들면서 최대한 세부적으로 모듈화 하려고 노력해보자.
// (2) 코드와 메모리 영역을 분리해서 생각해보자

int Factorial(int count) {
	int iValue = 1;

	for (int j = 0; j < count - 1; ++j) {
		iValue *= (j + 2);
	}

	Factorial(10);

	return iValue;
}

int ReFun(int _c) {
	int iValue = 0;
	for (int i = 0; i < _c; ++i) {
		iValue = i * (i + 1);
	}
	return iValue;
}

// 재귀함수
// 함수를 종료시키지 않으면 stack over flow 에러가 발생한다.
// 따라서 반드시 탈출 조건을 제시해주어야 한다.
// 재귀함수 왜 쓰이는가?
// 가독성, 구현의 용이 계층 구조를 표현하는 것에 용이하다.

int main()
{
	Factorial(5);

	return 0;
}