#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main(void)
{
	int x = 0;
	int y = 0;
	int answer = 0;
	int i = 0;
	int status = 1;
	srand(time(NULL));

	printf("문제를 보고 답을 입력하세요. 나눗셈의 경우에는 몫을 입력하세요.\n");

	for (i = 0; i < 10; i++) {
		status = 1;
		x = rand() % 10;
		y = rand() % 10;

		switch (rand() % 4) {
			case 0:															//덧셈
				printf("%d번 문제입니다.\n%d + %d = ", i + 1, x, y);		//문제 제시
				while (status == 1) {
					scanf("%d", &answer);									//답을 스캔
					if (x + y == answer) status = 0;						//정답이면 반복문 탈출
					else printf("다시 생각해 보세요.\n");					//오답이면 다시해
				}
				printf("정답입니다.\n");									//정답 안내
				break;

			case 1:															//뺄셈
				printf("%d번 문제입니다.\n%d - %d = ", i + 1, x, y);		//(이하반복)
				while (status == 1) {
					scanf("%d", &answer);
					if (x - y == answer) status = 0;
					else printf("다시 생각해 보세요.\n");
				}
				printf("정답입니다.\n");
				break;

			case 2:															//곱셈
				printf("%d번 문제입니다.\n%d * %d = ", i + 1, x, y);		//(이하반복)
				while (status == 1) {
					scanf("%d", &answer);
					if (x * y == answer) status = 0;
					else printf("다시 생각해 보세요.\n");
				}
				printf("정답입니다.\n");
				break;

			case 3:															//나눗셈
				while (y == 0)												//분모가 0일 경우
					y = rand() % 10;										//분모를 다시 뽑는다.
				printf("%d번 문제입니다.\n%d / %d = ", i + 1, x, y);		//(이하반복)
				while (status == 1) {
					scanf("%d", &answer);
					if (x / y == answer) status = 0;
					else printf("다시 생각해 보세요.\n");
				}
				printf("정답입니다.\n");
				break;
		}
	}
	printf("수고하셨습니다.");
	return 0;
}