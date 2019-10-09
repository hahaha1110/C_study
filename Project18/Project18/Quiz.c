#include <stdio.h>

void time(int num)
{
	// 사용자로부터 초를 입력받은 후 시, 분, 초의 형태로 출력
	int hour = 0; 
	int min = 0;
	int second;

	// 초가 1시간 넘을 경우
	if (num >= 3600)
	{
		hour = num / 3600;
		num = num - hour * 3600;
		if (num >= 60) {
			min = num / 60;
			second = num - min * 60;
		}
		else {
			second = num;
		}
	}
	else if (num >= 60)
	{
		min = num / 60;
		second = num - min*60;
	}
	else
	{
		second = num;
	}

	printf("%d시 %d 분 %d초", hour, min, second);
}

int table(int num)
{
	//2의 n승
	int dap;

	if (num == 0) {
		return 1;
	}
	else
	{
		return 2 * table(num - 1);
	}
}
int main(void)
{
	int num;
	printf("숫자를 입력해주세요 \n");
	scanf("%d", &num);

	// 시분초 계산
	//time(num);
	
	// 재귀함수
	printf("%d \n", table(num));

	return 0;
}