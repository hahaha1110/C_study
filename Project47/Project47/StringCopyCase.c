#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];

	/**** case 1 ****/
	strcpy(str2, str1); // str1�� ���ڿ��� str2�� ����
	puts(str2);

	/**** case 2 ****/
	strncpy(str3, str1, sizeof(str3));//str1�� ����� ���ڿ��� str3�� �����ϵ� str1�� ���̰� ��ٸ�, sizeof(str3)�� ��ȯ�� ���� �ش��ϴ� ������ �� ��ŭ�� ���縦 �����ض�
	puts(str3);

	/**** case 3 ****/
	strncpy(str3, str1, sizeof(str3)-1);
	str3[sizeof(str3) - 1] = 0;
	puts(str3);

	return 0;
}