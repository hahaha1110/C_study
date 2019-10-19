#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20] = "Koojungmo~";
	char str2[20] = "cute";

	char str3[20] = "Simple num: ";
	char str4[20] = "1234567890";

	//case1
	strcat(str1, str2); // str1의 문자열 뒤에 str2를 복사해라
	puts(str1);

	//case2
	strncat(str3, str4, 7);//str3뒤에 str4를 붙이되 최대 7자리 까지만 붙여라
	puts(str3);

	return 0;
}