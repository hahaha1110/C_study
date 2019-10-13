#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
	int i;
	int nowTime = (int)time(NULL);
	srand(nowTime); // 현재 시간을 이용하여 씨앗을 심는다.
	printf("현재시간 : %d", nowTime);

	for (i = 0; i < 5; i++)
	{
		printf("정수 출력 : %d \n", (rand() %6) + 1); // (rand() %6) + 1 : 1~6까지 범위의 난수를 생성   %6이라고 하면 0부터 5까지 생성되는거임
	}

	return 0;
}