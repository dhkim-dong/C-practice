// �ݺ���
// C#�� ũ�� �ٸ��� ����.
// ù ��° �ٿ��� 4�� ����� �־�����.

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