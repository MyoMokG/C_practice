#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int user = 0;
	int npc = 0;
	int match = 0;
	int win = 0;
	int draw = 0;
	int lose = 0;

	srand(time(NULL));

	printf("���������� �ټ� �� �º��Դϴ�.\n");
	//�ټ� �� �ݺ�
	for (int repeat = 0; repeat < 5; repeat++) {
		printf("\n           <<< GAME %d >>>\n", repeat + 1);
		
		printf("����� ������? (1:����, 2:����, 3:��)  ");
		scanf("%d", &user);
		switch (user)
		{
		case(1):printf("����� ����: ����\n"); break;
		case(2):printf("����� ����: ����\n"); break;
		case(3):printf("����� ����: ��\n"); break;
		}

		npc = rand() % 3 + 1;
		switch (npc)
		{
		case(1):printf("����� ����: ����\n"); break;
		case(2):printf("����� ����: ����\n"); break;
		case(3):printf("����� ����: ��\n"); break;
		}
		
		match = user - npc;
		switch (match)
		{
		case(0):printf("            --- ���º� ---\n"); draw++; break;
		case(1):
		case(-2):printf("            --- �¸� ---\n"); win++; break;
		case(2):
		case(-1):printf("            --- �й� ---\n"); lose++; break;
		}
	}
	
	//��� ���
	printf("���� ����� %d�� %d�� %d���Դϴ�.\n", win, draw, lose);

	return 0;
}