#include <stdio.h>

int main(void)
{
	int arr[6] = {1, 2, 3, 4, 5, 6};
	int reArr[6];
	
	int * backP = arr+5;

	for (int i = 0; i < 6; i++)
	{
		reArr[i] = *backP;
		backP--;
	}


	for (size_t i = 0; i < 6; i++)
	{
		printf("%d \n", reArr[i]);
	}
	
	return 0;
}