#include <stdio.h>

void moveFileReWrPos(void) {
	/*���� ����*/
	FILE * fp = fopen("text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);

	/*���ϰ���*/
	fp = fopen("text.txt", "rt");

	/*SEEK_END*/
	fseek(fp, -2, SEEK_END); // fp�� ���޵� ���� �����ڸ� SEEK_END(���ϳ�)�������� ������ġ�� ���� 2��ŭ ��������
	putchar(fgetc(fp));

	/*SEEK_SET test*/
	fseek(fp, 2, SEEK_SET);// SEEK_SET ���� �� �տ������� ������ ���� ���� 2��ŭ �̵�
	putchar(fgetc(fp));

	/*SEEK_CUR test*/
	fseek(fp, 2, SEEK_CUR);// ������ ������ġ���� �������� 2��ŭ �̵�
	putchar(fgetc(fp));

	fclose(fp);
}

void TellFileReWrPos(void) {
	long fpos;
	int i;

	/*���ϻ���*/
	FILE * fp = fopen("text.txt", "wt");
	fputs("1234-", fp);
	fclose(fp);

	/*���ϰ���*/
	fp = fopen("text.txt", "rt");

	for (i = 0; i < 4; i++) {
		putchar(fgetc(fp));
		fpos = ftell(fp);// fpos�� ������ ���� ��ġ ������ ������ ����
		fseek(fp, -1, SEEK_END);
		putchar(fgetc(fp));
		fseek(fp, fpos, SEEK_SET);
	}
	fclose(fp);

}

int main(void) {
	//moveFileReWrPos();
	TellFileReWrPos();

	return 0;
}