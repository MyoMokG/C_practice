#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{

	int seed = 50;
	const int goal = 250;
	int cash = 0;
	int victory = 0;
	int i = 0;

	printf("초기 자본금: 50$\n");
	printf("목표 금액: 250$\n");
	printf("도박장에 100번 방문합니다.\n");

	srand(time(NULL));

	for (i = 0; i < 100; i++) {
		cash = seed;
		while (cash > 0 && cash < goal) {
			if ((double)rand() / RAND_MAX < 0.5) cash++;
			else cash--;
		}
		if (cash == goal) victory++;
	}

	printf("방문 결과: 목표 금액 달성 %d회, 파산 %d회", victory, 100 - victory);
	return 0;
}