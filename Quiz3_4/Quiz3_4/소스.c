#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
	int i;
	int nowTime = (int)time(NULL);
	srand(nowTime); // ���� �ð��� �̿��Ͽ� ������ �ɴ´�.
	printf("����ð� : %d", nowTime);

	for (i = 0; i < 5; i++)
	{
		printf("���� ��� : %d \n", (rand() %6) + 1); // (rand() %6) + 1 : 1~6���� ������ ������ ����   %6�̶�� �ϸ� 0���� 5���� �����Ǵ°���
	}

	return 0;
}