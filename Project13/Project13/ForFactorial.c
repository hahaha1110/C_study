#include <stdio.h>

int main(void)
{
	int num, i;
	int fac = 1;

	printf("숫자를 입력하세요");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		fac *= i;
	}

	printf("%d의 팩토리얼은 %d 입니다.", num, fac);

	return 0;
}