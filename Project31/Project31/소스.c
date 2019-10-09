#include <stdio.h>

int main(void)
{
	int arr2d[3][3];
	printf("%d \n", arr2d);
	printf("%d \n", arr2d[0]);
	printf("%d \n\n", &arr2d[0][0]);

	printf("%d \n", arr2d[1]);
	printf("%d \n", &arr2d[1][0]);

	printf("%d \n", arr2d[2]);
	printf("%d \n", &arr2d[2][0]);

	printf("sizeof(arr2d) : %d \n", sizeof(arr2d));
	printf("sizeof(arr2d[0]) : %d \n", sizeof(arr2d[0]));
	printf("sizeof(arr2d[1]) : %d \n", sizeof(arr2d[1]));
	printf("sizeof(arr2d[2]) : %d \n", sizeof(arr2d[2]));


	printf("\n\n\n\n\n\n");

	int arr1[3][2];
	int arr2[2][3];

	printf("arr1 : %p \n", arr1);
	printf("arr1 : %p \n", arr1+1); // sizeof(int) * 배열가로길이 만큼 증가
	printf("arr1 : %p \n", arr1+2);
	
	printf("arr2 : %p \n", arr2);
	printf("arr2 : %p \n", arr2+1);

	return 0;
}