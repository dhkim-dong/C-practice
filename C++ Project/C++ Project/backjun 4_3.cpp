#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[])
{
	int N; // 정수의 개수  입력

	cin >> N;

	int val;

	int array[100001];

	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}

	sort(array, array + N);

	cout << array[0] << " " << array[N - 1];

	return 0;
}