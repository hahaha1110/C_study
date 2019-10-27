#include <stdio.h>

typedef enum syllable {
	Do = 1, Re = 2, Mi = 3, Fa = 4, So = 5, La = 6, Ti = 7
} Syllable;

void Sound(Syllable sy) {
	switch (sy)
	{
	case Do:
		puts("도는 도현이");
		return;
	case Re:
		puts("레는 둥근 레코드");
		return;
	case Mi:
		puts("미는 미나리");
		return;
	case Fa:
		puts("파는 파프리카");
		return; 
	case So:
		puts("솔은 솔방울");
		return;
	case La:
		puts("라는 구징모 어디서 뭐하는지 아시는 분");
		return;
	case Ti:
		puts("시는 시금치...");
		return;
	}
	puts("다같이 노래부르세..");
}

int main(void)
{
	Syllable tone;
	for (tone = Do; tone <= Ti; tone += 1) {
		Sound(tone);
	}
	return 0;
}