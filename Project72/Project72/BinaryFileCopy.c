#include <stdio.h>

int main(void) {
	FILE * src = fopen("IMG_20190808_195455.jpg", "rb");
	FILE * des = fopen("jkCopy.jpg", "wb");
	char buf[20];
	int readCnt;

	if (src == NULL || des == NULL) {
		puts("파일 오픈 실패!");
		return -1;
	}

	while (1) {
		readCnt = fread((void*)buf, 1, sizeof(buf), src); // 1크기의 데이터를 sizeof(buf)만큼 src로부터 읽어들여서 배열 buf에 저장하라

		if (readCnt < sizeof(buf)) {
			if (feof(src) != 0) {
				fwrite((void*)buf, 1, readCnt, des); // 1 크기의 데이터를 readCnt 만큼 buf로부터 읽어들여서 des에 저장하라
				puts("파일복사 완료");
				break;
			}
			else {
				puts("파일복사 실패");
			}
			break;
		}
		fwrite((void*)buf, 1, sizeof(buf), des);
	}
	fclose(src);
	fclose(des);

	return 0;
}