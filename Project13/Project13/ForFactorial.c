#include <stdio.h>

int main(void)
{
	int num, i;
	int fac = 1;

	printf("���ڸ� �Է��ϼ���");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		fac *= i;
	}

	printf("%d�� ���丮���� %d �Դϴ�.", num, fac);

	return 0;
}