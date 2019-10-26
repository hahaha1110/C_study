#include <stdio.h>

typedef struct point {
	int xpos;
	int ypos;
} Point;

void ShowPosition(Point pos) {
	printf("%d %d ", pos.xpos, pos.ypos);
}

int main(void)
{
	Point pos = { 10, 11 };
	
	ShowPosition(pos);

	return 0;
}