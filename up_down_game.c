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
		printf("0���� 99������ �ڿ��� �� ���� ��� ������. :\n");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)
			printf("DOWN\n");
		if (guess < answer)
			printf("UP\n");

	} while (guess != answer);
	
	printf("�����մϴ�. �õ�Ƚ��: %d\n", tries);

	return 0;
}