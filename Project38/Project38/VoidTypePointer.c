#include <stdio.h>

void SoSimpleFunc(void)
{
	printf("������ ��� ���ϴ��� �ƴ»��....");
}

int main(void)
{
	int num = 20;
	void * ptr;

	// ���� num �� �ּ� �� ����
	ptr = &num;
	printf("%p \n", ptr);

	// �Լ� SoSimpleFunc�� �ּ� �� ����
	ptr = SoSimpleFunc;
	printf("%p \n", ptr);

	return 0;
}