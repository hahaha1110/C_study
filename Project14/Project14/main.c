#include <stdio.h>

int main(void)
{
	int num1, num2, num3;

	printf("세 개의 정수를 입력하세요 \n");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	printf("셋 중 가장 큰 정수는 %d 이고 가장 작은 정수는 %d 입니다. \n", max(num1, num2, num3),min(num1, num2, num3));

	return 0;
}