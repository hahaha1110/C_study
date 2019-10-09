#include <stdio.h>

int max(int num1, int num2, int num3)
{
	int max = num1;

	max = (max < num2) ? num2 : max;
	max = (max < num3) ? num3 : max;
	
	return max;
}