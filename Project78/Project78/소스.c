#include <stdio.h>
//#define ADD 1
//#define MIN 0
#define STRING_JOB(A, B) #A"�� ������ " #B "�Դϴ�."

int main(void) {
	printf("%s", STRING_JOB("������", "����"));
	//int num1, num2;
	//printf("�� ���� ���� �Է� \n");
	//scanf("%d %d", &num1, &num2);

#ifdef ADD // ADD�� ���ǵǾ��ٸ�
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
#endif

#ifdef MIN // MIN�� ���ǵǾ��ٸ�
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
#endif

	


	return 0;
}