#include <stdio.h>

void SimpleAdder(int n1, int n2)
{
	printf("%d  +%d = %d \n", n1, n2, n1 + n2);
}

void ShowString(char * str)
{
	printf("%s \n", str);
}

int main(void)
{
	char * str = "Function Pointer";
	int num1 = 10, num2 = 20;

	void (*fptr1)(int, int) = SimpleAdder;
	void (*fptr2)(char *) = ShowString;

	/* 함수 포인터 변수에 의한 호출 */
	fptr1(num1, num2);
	fptr2(str); // 함수로 호출하는 것과 결과값 똑같다.

	return 0;
}