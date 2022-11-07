#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int answer, guess;
	int tries = 0;
	srand((int)time(NULL));
	answer = rand() % 100;

	do {
		printf("0에서 99까지의 자연수 중 답을 골라 보세요. :\n");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)
			printf("DOWN\n");
		if (guess < answer)
			printf("UP\n");

	} while (guess != answer);
	
	printf("축하합니다. 시도횟수: %d\n", tries);

	return 0;
}