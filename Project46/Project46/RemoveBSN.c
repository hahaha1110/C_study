#include <stdio.h>
#include <string.h>

void RemoveBNS(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0;
}

int main(void)
{
	char str[100];
	printf("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);
	printf("���� : %d, ���� : %s \n", strlen(str), str);

	RemoveBNS(str);
	printf("���� : %d, ���� : %s \n", strlen(str), str);

	return 0;
}