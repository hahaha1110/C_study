#include <stdio.h>

typedef struct myLove
{
	char name[20];
	int age;
}MyLove;

int main(void)
{
	MyLove love = { "���½�", 17 };
	MyLove love2 = { "������", 20 };

	printf("�ֱ� ���־��̵� ��%s�� �̰� %d�� �Դϴ�. \n", love.name, love.age);
	printf("(%s, %d) ��� ���ϴ��� �ƽô� �� \n", love2.name, love2.age);

	return 0;
}