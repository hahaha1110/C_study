#include <stdio.h>

char * ReadUserName(void) {
	char name[30];
	printf("What's your name?");
	gets(name);
	return name; // ���������� ����� �迭�� �ּҰ��� ��ȯ
}

int main(void) {
	char * name1;
	name1 = ReadUserName();
	
	printf("%s", name1);
	return 0;
}