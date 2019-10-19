#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[20];
	printf("정수입력 : ");
	scanf("%s", str);
	printf("%d \n", atoi(str));//문자열을 int로 변환

	printf("실수입력 : ");
	scanf("%s", str);
	printf("%g \n", atof(str));//문자열을 double로 변환

	return 0;

}