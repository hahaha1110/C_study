#include <stdio.h>

int main(void)
{
	int num = 7;
	int * pnum; // ������ ���� pnum �� ����
	pnum = &num; // num�� �ּҰ��� ������ ���� pnum�� ����
	
	printf("%d \n", pnum);
	printf("%d \n", *pnum);

	return 0;
}