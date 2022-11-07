#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char op;
	int x, y, result;

	printf("수식을 입력하세요.\n예시: 2 + 5\n>>");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else if (op == '%')
		result = x % y;
	else
		printf("지원되지 않는 연산자입니다.");

	
	printf("%d %c %d = %d", x, op, y, result);
	return 0;
}