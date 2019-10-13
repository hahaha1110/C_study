#include <stdio.h>

void ShowAllString(int argc, char * argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s \n", argv[i]);
}

int main(void)
{
	char * str[3] = {
		"구정모",
		"모구정",
		"정모구"
	};
	ShowAllString(3, str);
	return 0;
}