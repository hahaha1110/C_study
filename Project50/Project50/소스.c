#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "koojungmo";
	char str2[] = "koojungmo";

	if (str1 == str2) {
		printf("equal \n");
	}
	else {
		printf("not equal \n");
	}

	//���ڿ� ��
	char str3[20];
	char str4[20];

	printf("���ڿ� �Է� 1 : ");
	scanf("%s", str3);
	
	printf("���ڿ� �Է� 2 : ");
	scanf("%s", str4);

	if (!strcmp(str3, str4))
	{//strcmp�� ���ڿ� ������ ������ 0����ȯ�ϰ�, str3�� ũ�� ����� str4�� ũ�� ������ ��ȯ
		puts("�� ���ڿ��� �Ϻ��� �����մϴ�.");
	}
	else
	{
		puts("�� ���ڿ��� �������� �ʽ��ϴ�.");

		if (!strncmp(str1, str2, 3))
		{//3���ڱ����� ��
			puts("�׷��� ���� 3���ڴ� �����մϴ�");
		}
	}

	return 0;
}