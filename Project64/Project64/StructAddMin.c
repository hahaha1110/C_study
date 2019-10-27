#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

Point AddPoint(Point pos1, Point pos2)
{
	Point pos = { pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos };
	return pos;
}

Point MinPoint(Point pos1, Point pos2) {
	Point pos = { pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos };
	return pos;
}

int main(void)
{
	Point pos1 = { 9,10 };
	Point pos2 = { 3,5 };
	Point result; // 계산 결과값을 담을 곳
	
	printf("pos1 : %d %d, pos2 : %d %d \n",pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
	
	result = AddPoint(pos1, pos2);
	printf("pos1+pos2 = %d %d  \n", result.xpos, result.ypos);

	result = MinPoint(pos1, pos2);
	printf("pos1-pos2 = %d %d  \n", result.xpos, result.ypos);

	return 0;
}