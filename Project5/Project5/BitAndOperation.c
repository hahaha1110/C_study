/*
	��Ʈ ������
*/
#include <stdio.h>

int main(void)
{
	int num1 = 15; 
	int num2 = 20;
	printf("AND ������ ��� : %d \n", num1 & num2);

	printf("OR ������ ��� : %d \n", num1 | num2);

	// �� ���� ��Ʈ�� ���� �ٸ� ��쿡 1�� ��ȯ
	printf("XOR ������ ��� : %d \n", num1 ^ num2);

	printf("NOT ������ ��� : %d \n", ~num1);

	//shift ������
	printf("%d \n", num1 << 1);

	printf("%d \n", num1 << 2);
}