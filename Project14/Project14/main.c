#include <stdio.h>

int main(void)
{
	int num1, num2, num3;

	printf("�� ���� ������ �Է��ϼ��� \n");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	printf("�� �� ���� ū ������ %d �̰� ���� ���� ������ %d �Դϴ�. \n", max(num1, num2, num3),min(num1, num2, num3));

	return 0;
}