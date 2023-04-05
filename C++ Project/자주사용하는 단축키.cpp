// 단축키
// Ctrl K , C 주석화, 주석 해제
// Alt Drag : 묶어서 드래그 하기

// 디버깅
// 디버깅 시작 : F5
// 다음 중단점까지 일괄 코드 실행 : F5
// 중단점 생성 : F9  해당 구문을 실행 하기 직전에 멈춘다.
// 한 단계씩 실행 : F10
// 디버깅중 함수 실행 : F11
// 디버깅 중, 디버깅 종료하기 : Shift + F5

// main을 실행하기 위한 변수의 공간을 미리 생성해두기 때문에 로컬에 임의의(garbage)값이 들어가 있다.

#include <stdio.h>

using namespace std;

int Add3(int a, int b)
{
	return a + b;
}

int main()
{
	int i = 0;
	int i2 = 2;

	int iData = Add3(100, 200);

	printf("abcdef %d \n", 10);

	for (int i = 0; i < 10; ++i)
	{
		printf("Output i : %d \n", i);
	}

	// scanf
	int  iInput = 0;
	scanf_s("%d", &iInput);
}

// 콘솔
// printf : 콘솔 창에 출력한다.
// 출력한 자료형을 %로 선언한 값을 출력하는 기능 이있다.
// %d : 정수, %f : 실수

// scanf : 콘솔 창으로 부터 입력을 받는다. 입력을 받는 함수는 특정 조건을 만족하기 전 까지 무한 루프를 돌며 대기한다.