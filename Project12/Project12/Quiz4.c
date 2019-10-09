#include <stdio.h>

int main(void)
{
	// 입력받은 구구단의 역순 출력
	int dan;
	int num = 9;

	printf("몇 단?");
	scanf("%d", &dan);

	while (num >= 1) 
	{
		printf("%d x %d = %d \n", dan, num, dan*num);
		num--;
	}
	
	return 0;
}