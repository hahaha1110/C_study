#include <stdio.h>

int min(int num1, int num2, int num3)
{
	int min = num1;

	min = (min > num2) ? num2 : min;
	min = (min > num3) ? num3 : min;

	return min;
}