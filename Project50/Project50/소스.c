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

	//문자열 비교
	char str3[20];
	char str4[20];

	printf("문자열 입력 1 : ");
	scanf("%s", str3);
	
	printf("문자열 입력 2 : ");
	scanf("%s", str4);

	if (!strcmp(str3, str4))
	{//strcmp는 문자열 내용이 같으면 0을반환하고, str3이 크면 양수를 str4가 크면 음수를 반환
		puts("두 문자열은 완벽히 동일합니다.");
	}
	else
	{
		puts("두 문자열은 동일하지 않습니다.");

		if (!strncmp(str1, str2, 3))
		{//3글자까지만 비교
			puts("그러나 앞의 3글자는 동일합니다");
		}
	}

	return 0;
}