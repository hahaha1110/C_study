#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20] = "Koojungmo~";
	char str2[20] = "cute";

	char str3[20] = "Simple num: ";
	char str4[20] = "1234567890";

	//case1
	strcat(str1, str2); // str1�� ���ڿ� �ڿ� str2�� �����ض�
	puts(str1);

	//case2
	strncat(str3, str4, 7);//str3�ڿ� str4�� ���̵� �ִ� 7�ڸ� ������ �ٿ���
	puts(str3);

	return 0;
}