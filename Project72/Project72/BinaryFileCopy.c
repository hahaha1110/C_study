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

void StructFileWireRead(void) {
	// 구조체 변수를 하나의 바이너리 데이터로 인식하고 처리하기. 그러면 fwrite함수를 통해서 통째로 저장하고 fread 함수를 통해서 통째로 복원가능
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
	printf("이름 성별 나이 입력 \n");
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
	// 바이너리 파일의 복사
	//BinaryFileCopy();

	// 텍스트데이터와 바이너리 데이터 동시에 입출력
	//ComplexFileWite(); // 입력
	//ComplexFileRead(); // 출력

	// 텍스트와 바이너리 데이터의 집합체인 구조체 변수의 입출력
	StructFileWireRead();

	return 0;
}