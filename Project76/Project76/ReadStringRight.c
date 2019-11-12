#include <stdio.h>
#include <stdlib.h>

char * ReadUserName(void) {
	char * answer = (char *)malloc(sizeof(char) * 20);
	printf("Who is yunseong?   ");
	gets(answer);
	return answer;
}

int main(void) {
	
	char * answer1;
	answer1 = ReadUserName();
	printf("%s", answer1);
	free(answer1);
	return 0;
}