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

	return iValue;
}

int main35()
{
	int myValue = Factorial(3);
	

	return 0;
}