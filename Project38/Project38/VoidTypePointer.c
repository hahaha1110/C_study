#include <stdio.h>

void SoSimpleFunc(void)
{
	printf("구정모 어디서 뭐하는지 아는사람....");
}

int main(void)
{
	int num = 20;
	void * ptr;

	// 변수 num 의 주소 값 저장
	ptr = &num;
	printf("%p \n", ptr);

	// 함수 SoSimpleFunc의 주소 값 저장
	ptr = SoSimpleFunc;
	printf("%p \n", ptr);

	return 0;
}