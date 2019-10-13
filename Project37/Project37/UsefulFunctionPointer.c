#include <stdio.h>

int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2))
{
	return cmp(age1, age2);
}

int OlderFirst(int age1, int age2)
{
	if (age1 > age2)
		return age1;
	else if (age1 < age2)
		return age2;
	else
		return 0;
}

int YoungerFirst(int age1, int age2)
{
	if (age1 < age2)
		return age1;
	else if (age1 > age2)
		return age2;
	else
		return 0;
}

int main(void)
{
	int jungmoAge = 20;
	int jungkookAge = 23;
	int first;

	
	printf("������� 1 \n");
	first = WhoIsFirst(jungmoAge, jungkookAge, OlderFirst);
	printf("%d���� %d�� �� %d���� ���� ����! \n\n", jungmoAge, jungkookAge, first);

	printf("������� 2 \n");
	first = WhoIsFirst(jungmoAge, jungkookAge, YoungerFirst);
	printf("%d���� %d�� �� %d���� ���� ����! \n\n", jungmoAge, jungkookAge, first);


	return 0;
}