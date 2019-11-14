#include <stdio.h>
//#define ADD 1
//#define MIN 0
#define STRING_JOB(A, B) #A"의 직업은 " #B "입니다."
#define CON(UPP, LOW) UPP ## 00 ## LOW
#define CON2(UPP, LOW) UPP ## LOW
int main(void) {
	printf("%d \n", CON(101, 200));
	printf("%d \n", CON2(101, 200));
	//printf("%s", STRING_JOB("구정모", "갓수"));
	//int num1, num2;
	//printf("두 개의 정수 입력 \n");
	//scanf("%d %d", &num1, &num2);

#ifdef ADD // ADD가 정의되었다면
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
#endif

#ifdef MIN // MIN이 정의되었다면
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
#endif

	


	return 0;
}