#include <stdio.h>

void moveFileReWrPos(void) {
	/*파일 생성*/
	FILE * fp = fopen("text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);

	/*파일개방*/
	fp = fopen("text.txt", "rt");

	/*SEEK_END*/
	fseek(fp, -2, SEEK_END); // fp로 전달된 파일 지시자를 SEEK_END(파일끝)에서부터 시작위치를 향해 2만큼 움직여라
	putchar(fgetc(fp));

	/*SEEK_SET test*/
	fseek(fp, 2, SEEK_SET);// SEEK_SET 파일 맨 앞에서부터 파일의 끝을 향해 2만큼 이동
	putchar(fgetc(fp));

	/*SEEK_CUR test*/
	fseek(fp, 2, SEEK_CUR);// 파일의 현재위치부터 끝을향해 2만큼 이동
	putchar(fgetc(fp));

	fclose(fp);
}

void TellFileReWrPos(void) {
	long fpos;
	int i;

	/*파일생성*/
	FILE * fp = fopen("text.txt", "wt");
	fputs("1234-", fp);
	fclose(fp);

	/*파일개방*/
	fp = fopen("text.txt", "rt");

	for (i = 0; i < 4; i++) {
		putchar(fgetc(fp));
		fpos = ftell(fp);// fpos에 현재의 파일 위치 지사자 정보를 저장
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