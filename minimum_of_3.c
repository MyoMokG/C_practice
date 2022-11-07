#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, min;

	printf("정수 3개를 입력하세요.\n>>>");
	scanf("%d %d %d", &a, &b, &c);

	if ((a < b) && (a < c)) {
		min = a;
	}
	else if ((b < a) && (b < c)) {
		min = b;
	}
	else {
		min = c;
	}

	printf("제일 작은 정수는 %d입니다.", min);

	return 0;
}