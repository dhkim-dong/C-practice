#include <iostream>

using namespace std;

int main1414()
{
	int N, X;

	cin >> N >> X; // ĭ �ٿ�

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