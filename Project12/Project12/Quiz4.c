#include <stdio.h>

int main(void)
{
	// �Է¹��� �������� ���� ���
	int dan;
	int num = 9;

	printf("�� ��?");
	scanf("%d", &dan);

	while (num >= 1) 
	{
		printf("%d x %d = %d \n", dan, num, dan*num);
		num--;
	}
	
	return 0;
}