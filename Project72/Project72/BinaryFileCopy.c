#include <stdio.h>

void BinaryFileCopy(void) {
	FILE * src = fopen("1527690995872.jpg", "rb");
	FILE * des = fopen("jsCopy.jpg", "wb");
	char buf[20];
	int readCnt;

	if (src == NULL || des == NULL) {
		puts("���� ���� ����!");
		return -1;
	}

	while (1) {
		readCnt = fread((void*)buf, 1, sizeof(buf), src); // 1ũ���� �����͸� sizeof(buf)��ŭ src�κ��� �о�鿩�� �迭 buf�� �����϶�

		if (readCnt < sizeof(buf)) {
			if (feof(src) != 0) {
				fwrite((void*)buf, 1, readCnt, des); // 1 ũ���� �����͸� readCnt ��ŭ buf�κ��� �о�鿩�� des�� �����϶�
				puts("���Ϻ��� �Ϸ�");
				break;
			}
			else {
				puts("���Ϻ��� ����");
			}
			break;
		}
		fwrite((void*)buf, 1, sizeof(buf), des);
	}
	fclose(src);
	fclose(des);
}

void ComplexFileWite(void) {
	char name[10];
	char sex;
	int age;

	FILE * fp = fopen("friend.txt", "wt");
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("�̸� ���� ���� �� �Է� :");
		scanf("%s %c %d",name, &sex, &age);
		getchar(); // ���ۿ� �����ִ� \n�� �Ҹ��� ���ؼ�
		fprintf(fp, "%s %c %d", name, sex, age);
	}
	fclose(fp);
	
}

void ComplexFileRead(void) {
	char name[10];
	char sex;
	int age;

	FILE * fp = fopen("friend.txt", "rt");
	int ret;

	while (1)
	{
		ret = fscanf(fp, "%s %c %d", name, &sex, &age);
		if (ret == EOF)
			break;
		printf("%s %c %d \n", name, sex, age);
	}
	fclose(fp);
}

void StructFileWireRead(void) {
	// ����ü ������ �ϳ��� ���̳ʸ� �����ͷ� �ν��ϰ� ó���ϱ�. �׷��� fwrite�Լ��� ���ؼ� ��°�� �����ϰ� fread �Լ��� ���ؼ� ��°�� ��������
	typedef struct minam {
		char name[10];
		char sex;
		int age;
	}Minam;

	FILE * fp;
	Minam myMinam1;
	Minam myMinam2;

	/** file write **/
	fp = fopen("Minam.bin", "wb");
	printf("�̸� ���� ���� �Է� \n");
	scanf("%s %c %d", myMinam1.name, &(myMinam1.sex), &(myMinam1.age));
	fwrite((void*)&myMinam1, sizeof(myMinam1), 1, fp);
	fclose(fp);

	/* file read */
	fp = fopen("Minam.bin", "rb");
	fread((void*)&myMinam2, sizeof(myMinam2), 1, fp);

	printf("%s %c %d \n", myMinam2.name, myMinam2.sex, myMinam2.age);
	fclose(fp);

}

int main(void) {
	// ���̳ʸ� ������ ����
	//BinaryFileCopy();

	// �ؽ�Ʈ�����Ϳ� ���̳ʸ� ������ ���ÿ� �����
	//ComplexFileWite(); // �Է�
	//ComplexFileRead(); // ���

	// �ؽ�Ʈ�� ���̳ʸ� �������� ����ü�� ����ü ������ �����
	StructFileWireRead();

	return 0;
}