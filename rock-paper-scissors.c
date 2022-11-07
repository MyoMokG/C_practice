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

	printf("가위바위보 다섯 판 승부입니다.\n");
	//다섯 판 반복
	for (int repeat = 0; repeat < 5; repeat++) {
		printf("\n           <<< GAME %d >>>\n", repeat + 1);
		
		printf("당신의 선택은? (1:가위, 2:바위, 3:보)  ");
		scanf("%d", &user);
		switch (user)
		{
		case(1):printf("당신의 선택: 가위\n"); break;
		case(2):printf("당신의 선택: 바위\n"); break;
		case(3):printf("당신의 선택: 보\n"); break;
		}

		npc = rand() % 3 + 1;
		switch (npc)
		{
		case(1):printf("상대의 선택: 가위\n"); break;
		case(2):printf("상대의 선택: 바위\n"); break;
		case(3):printf("상대의 선택: 보\n"); break;
		}
		
		match = user - npc;
		switch (match)
		{
		case(0):printf("            --- 무승부 ---\n"); draw++; break;
		case(1):
		case(-2):printf("            --- 승리 ---\n"); win++; break;
		case(2):
		case(-1):printf("            --- 패배 ---\n"); lose++; break;
		}
	}
	
	//결과 출력
	printf("최종 결과는 %d승 %d무 %d패입니다.\n", win, draw, lose);

	return 0;
}