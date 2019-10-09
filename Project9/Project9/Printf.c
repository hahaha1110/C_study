#include <stdio.h>

int main(void)
{
	printf("앞집 강아지가 말했다. \"멍~! 멍~!\" 정말 귀엽다\n");
	
	// 경고음
	printf("\a");

	printf("제 나이는 10진수로 %d 살, 16진수로 %X살입니다.\n",12,12);

	printf("%s, %s, %s \n", "AAA", "BBB", "CCC");

	printf("%-8s %14s %5s \n", "이 름", "전공학과", "학년");
	printf("%-8s %14s %5s \n", "구정모", "컴퓨터공학", "3");
	printf("%-8s %14s %5s \n", "강민희", "시각디자인", "1");
	return 0;
}