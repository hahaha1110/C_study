#include <stdio.h>

void time(int num)
{
	// ����ڷκ��� �ʸ� �Է¹��� �� ��, ��, ���� ���·� ���
	int hour = 0; 
	int min = 0;
	int second;

	// �ʰ� 1�ð� ���� ���
	if (num >= 3600)
	{
		hour = num / 3600;
		num = num - hour * 3600;
		if (num >= 60) {
			min = num / 60;
			second = num - min * 60;
		}
		else {
			second = num;
		}
	}
	else if (num >= 60)
	{
		min = num / 60;
		second = num - min*60;
	}
	else
	{
		second = num;
	}

	printf("%d�� %d �� %d��", hour, min, second);
}

int table(int num)
{
	//2�� n��
	int dap;

	if (num == 0) {
		return 1;
	}
	else
	{
		return 2 * table(num - 1);
	}
}
int main(void)
{
	int num;
	printf("���ڸ� �Է����ּ��� \n");
	scanf("%d", &num);

	// �ú��� ���
	//time(num);
	
	// ����Լ�
	printf("%d \n", table(num));

	return 0;
}