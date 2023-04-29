#include <iostream>

using namespace std;

int main14141414()
{
	int N, X;

	cin >> N >> X; // Ä­ ¶Ù¿ò

	int val;

	for(int i=0; i<N; i++)
	{
		cin >> val;
		if (val < X) {
			cout << val << " ";
		}
	}
	return 0;
}