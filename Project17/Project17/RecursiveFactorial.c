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

	printf("���ڸ� �Է��ϼ��� \n");
	
	scanf("%d", &num);
	
	printf("!num = %d \n", Factorial(num));
	
	return 0;
}