#include <stdio.h>

void DesSort(int arr[], int len)
{
	// 내림차순 정렬
	int temp;
	for (int i = 0; i < len-1; i++)
	{
		for (int j = len; j >i ; j--)
		{
			if (arr[j] > arr[j-1])
			{
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}
}

int main(void)
{
	int arr[7];
	printf("정렬 할 7개의 정수를 입력하세요 \n");
	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 7; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	DesSort(arr, sizeof(arr) / sizeof(int));
	for (int i = 0; i < 7; i++)
	{
		printf("%d", arr[i]);
	}

	return 0;
}