#include <stdio.h>

char * ReadUserName(void) {
	char name[30];
	printf("What's your name?");
	gets(name);
	return name; // 지역변수로 선언된 배열의 주소값을 반환
}

int main(void) {
	char * name1;
	name1 = ReadUserName();
	
	printf("%s", name1);
	return 0;
}