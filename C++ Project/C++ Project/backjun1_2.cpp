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
int main() {
	int a, b;
	cin >> a >> b;
	cout << a + b;
}

// return 0을 해야하는 이유?
// precision cpp에서 소수점을 고정시키는 메서드