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

	printf("�ʱ� �ں���: 50$\n");
	printf("��ǥ �ݾ�: 250$\n");
	printf("�����忡 100�� �湮�մϴ�.\n");

	srand(time(NULL));

	for (i = 0; i < 100; i++) {
		cash = seed;
		while (cash > 0 && cash < goal) {
			if ((double)rand() / RAND_MAX < 0.5) cash++;
			else cash--;
		}
		if (cash == goal) victory++;
	}

	printf("�湮 ���: ��ǥ �ݾ� �޼� %dȸ, �Ļ� %dȸ", victory, 100 - victory);
	return 0;
}