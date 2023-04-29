#include <stdio.h>

// 자료형이 뭔가요? 변수 선언할 때 반드시 필요한 것. 내가 만든 변수가 어떤 형태의 데이터인지 알려주는 것. 데이터의 타입입니다.
	// 구조체? 사용자 정의 자료형이다.
	// 내 코드에서만 적용되는 데이터의 타입이다.

typedef struct _tagMyST {
	int      a;
	float    f;
}MYST;   // C 스타일 문법 ( C, C++ 양쪽 호환 가능하게 선언한 모습 )

// typedef : 타입을 재정의 한다.

typedef int INT; // 컴파일러가 INT도 int로 파악한다. int의 새로운 이름이다. int 자료형으로 파악한다.

// C로 컴파일 할 경우 : 사용자가 직접 정의한 구조체 앞에 struct를 명시해줘야 사용 가능하다.
// 매번 struct를 지칭하는 것 귀찮다.
// sturct _tagMyST 매번 지칭하는 것 귀찮으니깐 MYST로 이름을 변경해서 쓴다.
// 단, C++에서는 개선이 되어 _tagMyST 앞의 struct 키워드를 생략해도 문제가 없다.

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8 }; // 선언하지 않은 배열의 요소는 0으로 초기화 된다.

	MYST t = { }; // 구조체의 초기화도 빈칸을 0으로 초기화 한다.
	t.a = 10;
	t.f = 10.231f;

	int iSize = sizeof(MYST);

	INT a;

	return 0;
}