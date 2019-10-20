#include <stdio.h>
#include <string.h>

struct Person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void)
{
	struct Person man1, man2;
	strcpy(man1.name, "이태승");//man1.name에 이태승을 복사해 넣는다.
	strcpy(man1.phoneNum, "010-1111-2222");
	man1.age = 17;

	printf("이름입력: "); scanf("%s", man2.name);
	printf("번호입력: "); scanf("%s", man2.phoneNum);
	printf("나이입력: "); scanf("%d", &(man2.age));

	printf("이름: %s \n", man1.name);
	printf("번호: %s \n", man1.phoneNum);
	printf("나이: %d \n", man1.age);

	printf("이름: %s \n", man2.name);
	printf("번호: %s \n", man2.phoneNum);
	printf("나이: %d \n", man2.age);

	return 0;
}