#include <stdio.h>

void FileOpen() {
	FILE * fp = fopen("jungmo.txt", "wt"); // ��� ��Ʈ���� ����(�ش� ������ �����ȴ�)
	if (fp == NULL) {
		puts("���� ���� ����");
		return -1;// �������� ���Ḧ �ǹ��ϱ� ���ؼ� -1�� ��ȯ
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);
}

int main(void)
{
	int ch, i;
	FILE * fp = fopen("jungmo.txt", "rt"); // �Է� ��Ʈ���� ����
	if (fp == NULL) {
		puts("���� ���� ����");
		return -1;// �������� ���Ḧ �ǹ��ϱ� ���ؼ� -1�� ��ȯ
	}

	for (i = 0; i < 3; i++) {
		ch = fgetc(fp);
		printf("%c \n", ch);
	}
	fclose(fp);


	return 0;
}