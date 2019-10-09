#include <stdint.h>

int main(void)
{
	int num = 20;
	const int * ptr = &num; // 포인터변수 ptr을 이용해서 ptr이 가리키는 변수에 저장된 값을 변경하는 것을 허용하지 않음
	//*ptr = 30; // 컴파일 에러
	num = 30; // 컴파일 성공

	///////////////////////////////////////////////////////////////////////////////////////////////

	int num1 = 20;
	int num2 = 30;
	int * const ptr2 = &num1;
	*ptr2 = 40; // 컴파일성공
	//ptr2 = &num2; // 컴파일오류
	return 0;
}