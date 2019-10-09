
#include<stdio.h>
void MaxAndMin(int *arr, int **maxP, int **minP)
{
	int max = arr[0];
	int min = arr[0];
	for (int i = 1; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	for (int i = 1; i < 5; i++)
	{
		if (arr[i] == max)
		{
			*maxP = &arr[i];
		}
		if (arr[i] == min)
		{
			*minP = &arr[i];
		}
	}
	printf("가장큰 값: %d, 가장 작은 값: %d \n", **maxP, **minP);
}
int main(void)
{
	int *maxPtr;
	int *minPtr;
	int arr[5] = { 3,1,2,5,6 };
	maxPtr = &arr[0];
	minPtr = &arr[0];
	printf("초기값 가장큰 값: %d, 초기값 가장 작은 값: %d \n", *maxPtr, *minPtr);
	printf("*maxPtr : %p, *minPtr : %p \n", maxPtr, minPtr);
	MaxAndMin(arr, &maxPtr, &minPtr);
	printf("*maxPtr : %p, *minPtr : %p \n", maxPtr, minPtr);
	//MaxAndMin(&maxPtr, &minPtr, arr);
	//printf("*maxPtr : %p ,  *minPtr : %p", maxPtr, minPtr);
	//printf("maxPtr : %d ,  minPtr : %d", *maxPtr, *minPtr);
	return 0;
}