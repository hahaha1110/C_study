#include <stdio.h>

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void) 
{
	struct person arr[3]=
	{
		{"이태승", "010-1111-2222", 17}, // 첫 번째 요소의 초기화
		{"남도현", "010-1111-1122", 16}, // 두 번째 요소의 초기화
		{"구정모", "010-2000-0205", 20} // 세 번째 요소의 초기화
	};

	int i;

	for (i = 0; i < 3; i++)
	{
		printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);

	}

	return 0;
}