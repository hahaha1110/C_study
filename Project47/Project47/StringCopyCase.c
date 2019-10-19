#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];

	/**** case 1 ****/
	strcpy(str2, str1); // str1의 문자열을 str2에 복사
	puts(str2);

	/**** case 2 ****/
	strncpy(str3, str1, sizeof(str3));//str1에 저장된 문자열을 str3에 복사하되 str1의 길이가 길다면, sizeof(str3)가 반환한 값에 해당하는 문자의 수 만큼만 복사를 진행해라
	puts(str3);

	/**** case 3 ****/
	strncpy(str3, str1, sizeof(str3)-1);
	str3[sizeof(str3) - 1] = 0;
	puts(str3);

	return 0;
}