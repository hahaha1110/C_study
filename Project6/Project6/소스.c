#include <stdio.h>

// 음수의 비트연산
int main(void) 
{
	int num = -16;
	printf("음수 2칸 오른쪽 이동의 결과 %d \n", num >> 2);
}