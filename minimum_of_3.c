#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, min;

	printf("���� 3���� �Է��ϼ���.\n>>>");
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

	printf("���� ���� ������ %d�Դϴ�.", min);

	return 0;
}