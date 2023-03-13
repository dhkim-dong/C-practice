#include <iostream>;

using namespace std;

// 함수에서 상태를 사용하여 관리할 수 있다.

// C++ 개발에서 전처리기란 ? 
// # 키워드가 붙은 전처리기 키워드.
// #define 전처리.

#define HUNGRY 0x1 // 비쥬얼 스튜디오 컴파일러가 HUNGRY를 보면 1로 바꾼다. (전처리라서 가장 먼저 실행 된다.)
#define THIRSTY 0x2 //  
#define TIRED 0x4   // 각 칸의 자리에 맞는 숫자로 넣어야 한다.
#define FIRE 0x8

#define COLD 0x10
#define POISON 0x20
#define POISON1 0x40
#define POISON2 0x80

#define POISON3 0x100
#define POISON4 0x200
#define POISON5 0x400
#define POISON6 0x800 // 16진법으로 사용했을 때의 규칙

// 전처리 define의 장점 1. 가독성. 프로그래머가 숫자로 각각의 의미를 외울 필요 없이 메크로 설정을 할 수 있다.
// 장점 2. 코드의 유지 보수 측면에서 쉽게 변경할 수 있다.

#define MAX_SIZE 20

// 비트 연산의 사용법!! 실제로 알아보기 힘들기 때문에 자주 상기 시켜줘야 한다.
// (1) 특정 상태를 표현하고 바꾸는 곳에 사용된다.

// 비트 연산자
// 쉬프트 <<. >>
int main() 
{
	unsigned char byte = 1;

	byte << 1; // (자리를 왼쪽으로 민다. 2진법에서는 2배)

	byte <<= 1; // 나머지를 생각할 필요가 없다. 오른쪽으로 민 부호식을 계산하면 된다. 2^n 나눈 몫

	// 비트 곱(&), 합(|), xor(^) 반전(~)

	// 비트의 자리수 대로 연산을 하겠다..

	// 비트 곱 : 둘다 1이면 1, 하나라도 0이면 0

	// 비트 xor : 같으면 0 , 다르면 1

	int iStatus = 0; // 비트연산을 이용한 상태 변화

	iStatus |= HUNGRY; // 기본 상태에서 배고픔 상태를 변경하라.
	iStatus |= THIRSTY; // 기본 상태에서 목마름 상태를 변경하라.

	if (iStatus & THIRSTY)  // 상태를 확인하기 위해서 비트 곱을 사용.
	{

	}

	// 특정 자리 비트 제거
	iStatus &= -THIRSTY; // 원래 숫자는 그대로 유지하면서 특정 자리 비트만 0이기 때문에 변경해준다. 

}