#include <stdio.h>

using namespace std;

// �Լ�
// Factorial
// 8! �ǹ� : 8 x 7 x 6 x 5 x 4 x 3 x 2 x 1
// ������� ����� ����..
// �����ϱ� ���� ���ڸ� ���� �־� ���� �����غ���.
// main���� �ڵ�� ����� ����� �� ����ؾ� �ϴ� ��찡 ����� ��� �ؾ��ϳ���?
// �̷� ��� �����س��� ��� ����?
// ~���� ~�� �ִ� �ڵ� �����ؼ� ���� �ȴ�? (X)
// ��� : �ϳ��� ����� �Լ��� �����س���[���ȭ] ���� ������ ����ϱ� ����
// (1) �ϳ��� ������Ʈ ����� ����鼭 �ִ��� ���������� ���ȭ �Ϸ��� ����غ���.
// (2) �ڵ�� �޸� ������ �и��ؼ� �����غ���

int Factorial(int count) {
	int iValue = 1;

	for (int j = 0; j < count - 1; ++j) {
		iValue *= (j + 2);
	}

	return iValue;
}

int ReFun(int _c) {
	int iValue = 0;
	for (int i = 0; i < _c; ++i) {
		iValue = i * (i + 1);
	}
	return iValue;
}

// ����Լ�
// �Լ��� �����Ű�� ������ stack over flow ������ �߻��Ѵ�.
// ���� �ݵ�� Ż�� ������ �������־�� �Ѵ�.
// ����Լ� �� ���̴°�?
// ������, ������ ���� ���� ������ ǥ���ϴ� �Ϳ� �����ϴ�.

// ����Լ� ���丮��
int Factorial_Re(int _iNum) 
{
	if (_iNum == 1)
	{
		return 1;
	}

	return _iNum * Factorial_Re(_iNum - 1);
}

// �Ǻ���ġ ����
// 1 1 2 3 5 8 13 21 34 55 89

int Fibonacci(int _num) {
	if (_num == 1 || _num == 2) {
		return 1;
	}

	int iPrev1 = 1;
	int iPrev2 = 1;
	int iValue = 0;

	for (int i = 0; i < _num - 2; i++) {
		iValue = iPrev1 + iPrev2;
		iPrev1 = iPrev2;
		iPrev2 = iValue;
	}

	return iValue;
}

int Fibonacci_Re(int _num) {
	if (_num == 1 || _num == 2) {
		return 1;
	}

	return Fibonacci_Re(_num - 1) + Fibonacci_Re(_num - 2);
}

// �ӵ��� �ſ� ������.
// �ذ��ϱ� ���� ������� ���� ȸ�� (tail recursion) �� �ִ�.

int main1414()
{
	int mvalue = Factorial(5);
	 
	int iValue = Factorial_Re(5);

	iValue = Fibonacci(7);

	// �迭
	int iArray[10] = { }; // �����ϸ� �ȵǴ� ��ġ���� �ʰ������ϴ� ������ �߻��� �� �ִ�. �׻� �����ؾ� �Ѵ�.

	// �� ������ �Ǵ� �ɱ�?
	// �迭�� �޸𸮰� �������� �����̴�. 

	iArray[4] = 10;
	

	return 0;
}