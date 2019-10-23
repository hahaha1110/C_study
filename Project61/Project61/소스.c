#include <stdio.h>

typedef struct myLove
{
	char name[20];
	int age;
}MyLove;

int main(void)
{
	MyLove love = { "이태승", 17 };
	MyLove love2 = { "구정모", 20 };

	printf("최근 나애아이돌 은%s군 이고 %d세 입니다. \n", love.name, love.age);
	printf("(%s, %d) 어디서 뭐하는지 아시는 분 \n", love2.name, love2.age);

	return 0;
}