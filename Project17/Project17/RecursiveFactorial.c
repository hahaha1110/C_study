#include <stdio.h>

int Factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * Factorial(n - 1);

}


int main(void) 
{
	int num;

	printf("숫자를 입력하세요 \n");
	
	scanf("%d", &num);
	
	printf("!num = %d \n", Factorial(num));
	
	return 0;
}