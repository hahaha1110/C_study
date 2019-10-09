#include <stdio.h>

void ShowArrayElem(int * param, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d", param[i]);
	printf("\n");
}

void AddArayElem(int * param, int len, int add)
{
	int i;
	for (i = 0; i < len; i++)
		param[i] += add;
}

int main(void)
{
	int arr1[3] = { 1, 2, 3 };
	int arr2[5] = { 4, 5, 6, 7, 8 };
	ShowArrayElem(arr1, sizeof(arr1) / sizeof(int));
	ShowArrayElem(arr2, sizeof(arr2) / sizeof(int));
	
	AddArayElem(arr1, sizeof(arr1) / sizeof(int), 1);
	ShowArrayElem(arr1, sizeof(arr1) / sizeof(int));

	//printf("%d", sizeof(arr1) / sizeof(int)); // �迭�� ũ�⸦ ���� ���� ��ü ������ ����� ũ��� ������ �Ѵ�.
	return 0;
}