#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b, c;
	printf("삼각형의 세 변을 정수로 입력하세요.\n>>>");
	scanf("%d %d %d", &a, &b, &c);

	if ((a + b) > c && (b + c) > a && (c + a) > b) {
		printf("올바른 삼각형입니다\n");

		if (a == b && b == c) {
			printf("정삼각형입니다.\n");
		}
		else if (a == b || b == c || c == a) {
			printf("이등변삼각형입니다.\n");
			}
		else if ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (c * c + a * a == b * b)) {
			printf("직각삼각형입니다.\n");
		}
		else {
			printf("일반적인 삼각형입니다.\n");
		}
	}
	else {
		printf("올바르지 않은 삼각형입니다.\n");
	}
	return 0;
}