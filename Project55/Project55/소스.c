#include <stdio.h>

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void) 
{
	struct person arr[3]=
	{
		{"���½�", "010-1111-2222", 17}, // ù ��° ����� �ʱ�ȭ
		{"������", "010-1111-1122", 16}, // �� ��° ����� �ʱ�ȭ
		{"������", "010-2000-0205", 20} // �� ��° ����� �ʱ�ȭ
	};

	int i;

	for (i = 0; i < 3; i++)
	{
		printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);

	}

	return 0;
}