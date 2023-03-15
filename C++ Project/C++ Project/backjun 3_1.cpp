// 반복문
// C#과 크게 다를게 없음.
// 첫 번째 줄에는 4의 배수가 주어진다.

#include <iostream>

using namespace std;

int main52335() {
    int a;
    cin >> a;
    for (int i = 0; i < a / 4; i++) {
        cout << "long ";
        if (i == a / 4 - 1) cout << "int";
    }
    return 0;
}