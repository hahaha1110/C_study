/*
	비트 연산자
*/
#include <stdio.h>

int main(void)
{
	int num1 = 15; 
	int num2 = 20;
	printf("AND 연산의 결과 : %d \n", num1 & num2);

	printf("OR 연산의 결과 : %d \n", num1 | num2);

	// 두 개의 비트가 서로 다를 경우에 1을 반환
	printf("XOR 연산의 결과 : %d \n", num1 ^ num2);

	printf("NOT 연산의 결과 : %d \n", ~num1);

	//shift 연산자
	printf("%d \n", num1 << 1);

	printf("%d \n", num1 << 2);
}