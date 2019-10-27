#include <stdio.h>

void FileOpen() {
	FILE * fp = fopen("jungmo.txt", "wt"); // 출력 스트림의 형성(해당 파일이 생성된다)
	if (fp == NULL) {
		puts("파일 오픈 실패");
		return -1;// 비정상적 종료를 의미하기 위해서 -1을 반환
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);
}

int main(void)
{
	int ch, i;
	FILE * fp = fopen("jungmo.txt", "rt"); // 입력 스트림의 형성
	if (fp == NULL) {
		puts("파일 오픈 실패");
		return -1;// 비정상적 종료를 의미하기 위해서 -1을 반환
	}

	for (i = 0; i < 3; i++) {
		ch = fgetc(fp);
		printf("%c \n", ch);
	}
	fclose(fp);


	return 0;
}