#include <stdio.h>

#define NAME "������"
#define AGE 24
#define PRINT_ADDR puts("�ּ�: ����� ���ʱ� \n");
#define SQUARE(X) ((X)*(X))

int main(void) {
	//printf("�̸� : %s  ���� : %d \n", NAME, AGE);
	//PRINT_ADDR;

	// ��ũ�� �Լ�
	int n = 3;
	printf("%d \n", SQUARE(2+3));
	printf("%d \n", SQUARE(120/12*10));
	
	return 0;
}