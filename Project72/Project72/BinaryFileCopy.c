#include <stdio.h>

void BinaryFileCopy(void) {
	FILE * src = fopen("1527690995872.jpg", "rb");
	FILE * des = fopen("jsCopy.jpg", "wb");
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
}

void ComplexFileWite(void) {
	char name[10];
	char sex;
	int age;

	FILE * fp = fopen("friend.txt", "wt");
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("이름 성별 나이 순 입력 :");
		scanf("%s %c %d",name, &sex, &age);
		getchar(); // 버퍼에 남아있는 \n의 소멸을 위해서
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

int main(void) {
	// 바이너리 파일의 복사
	//BinaryFileCopy();

	// 텍스트데이터와 바이너리 데이터 동시에 입출력
	//ComplexFileWite(); // 입력
	ComplexFileRead(); // 출력

	return 0;
}