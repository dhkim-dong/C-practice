#include <stdio.h>
#include "function.h"
#include "common.h"

int Add(int a, int b)
{
	printf("g_iExtern ÀÇ °ªÀº : %d\n", g_iExtern);

	return a + b;
}

int Mul(int a, int b)
{
	return a * b;
}

int Sub(int a, int b) {
	return a - b;
}