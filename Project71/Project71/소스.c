#include <stdio.h>

int main(void)
{
	FILE * src = fopen("src.txt", "rt");
	FILE * des = fopen("dst.txt", "wt");
	int ch;

	if (src == NULL || des == NULL) {
		puts("파일오픈 실패");
		return -1;
	}

	while ((ch=fgetc(src))!=EOF)
	{
		fputc(ch, des);
	}

	if (feof(src) != 0) {//feof 함수는 파일의 끝에 도달한 경우 0이 아닌 값 반환
		puts("파일 복사 완료!");
	}
	else {
		puts("파일 복사 실패!");
	}

	fclose(src);
	fclose(des);

	return 0;
}