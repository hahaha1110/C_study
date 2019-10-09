#include <stdio.h>

int main(void)
{
	int num = 7;
	int * pnum; // 포인터 변수 pnum 의 선언
	pnum = &num; // num의 주소값을 포인터 변수 pnum에 저장
	
	printf("%d \n", pnum);
	printf("%d \n", *pnum);

	return 0;
}