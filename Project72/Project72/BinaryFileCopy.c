#include <stdio.h>

int main(void) {
	FILE * src = fopen("IMG_20190808_195455.jpg", "rb");
	FILE * des = fopen("jkCopy.jpg", "wb");
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

	return 0;
}