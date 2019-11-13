#include <stdio.h>

#define NAME "구정모"
#define AGE 24
#define PRINT_ADDR puts("주소: 서울시 서초구 \n");
#define SQUARE(X) ((X)*(X))

int main(void) {
	//printf("이름 : %s  나이 : %d \n", NAME, AGE);
	//PRINT_ADDR;

	// 매크로 함수
	int n = 3;
	printf("%d \n", SQUARE(2+3));
	printf("%d \n", SQUARE(120/12*10));
	
	return 0;
}