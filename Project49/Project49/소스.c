#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[20];
	printf("�����Է� : ");
	scanf("%s", str);
	printf("%d \n", atoi(str));//���ڿ��� int�� ��ȯ

	printf("�Ǽ��Է� : ");
	scanf("%s", str);
	printf("%g \n", atof(str));//���ڿ��� double�� ��ȯ

	return 0;

}