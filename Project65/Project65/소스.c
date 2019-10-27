#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct circle
{
	Point cen; // 구조체의 중첩
	double rad;
} Circle;

void ShowCircleInfo(Circle * cptr)
{
	printf("%d %d \n", (cptr->cen).xpos, (cptr->cen).ypos); 
	printf("radius : %g \n\n", cptr->rad);
}

int main(void)
{
	Circle c1 = { {1,2},3.5 }; // 구조체 변수가 멤버로 존재할 경우, 이렇듯 중괄호를 이용해서 구조체 멤버의 초기화를 구분지을 수 있다.
	Circle c2 = { 2,4,3.5 }; // 중괄호를 이용해서 구분 짓지 않으면 순서대로 초기화 된다.
	ShowCircleInfo(&c1);
	ShowCircleInfo(&c2);

	return 0;
}