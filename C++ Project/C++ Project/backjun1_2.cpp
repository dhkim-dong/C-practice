#include <iostream>

// stdio.h 와 iostream의 차이점에 대해서 알아야 된다.

// 2023-03-08
// C++에 값을 입력을 수 있는 프로그램을 만드는 방법

//int main() {
//	int a, b;
//	std::cin >> a >> b;
//	std::cout << a + b;
//}

// 쉬프트연산자 <<, >>
// cin 입력
// cout 출력

// 추가할점, 쉬프트 연산자의 방향에 대한 의미를 잘 모르겠습니다. (2023-03-08)
// 답안 :

// std라는 네임스페이스 사용을 줄이기 위해 선언한다.
using namespace std;
int main5151() {
	int a, b;
	cin >> a >> b;
	cout << a + b;
	return 0;
}

// return 0을 해야하는 이유? 현재 실행 중인 함수를 끝낸다는 의미이다.
// OS의 쉘에서 0을 true로 간주하기 때문이다.
// precision cpp에서 소수점을 고정시키는 메서드

// a+b, a-b, a*b. a/b, a%b를 출력하는 프로그램
// endl "\n" 의 역할 + 내부 버퍼를 비우는 기능.