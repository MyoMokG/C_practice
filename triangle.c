#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b, c;
	printf("�ﰢ���� �� ���� ������ �Է��ϼ���.\n>>>");
	scanf("%d %d %d", &a, &b, &c);

	if ((a + b) > c && (b + c) > a && (c + a) > b) {
		printf("�ùٸ� �ﰢ���Դϴ�\n");

		if (a == b && b == c) {
			printf("���ﰢ���Դϴ�.\n");
		}
		else if (a == b || b == c || c == a) {
			printf("�̵�ﰢ���Դϴ�.\n");
			}
		else if ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (c * c + a * a == b * b)) {
			printf("�����ﰢ���Դϴ�.\n");
		}
		else {
			printf("�Ϲ����� �ﰢ���Դϴ�.\n");
		}
	}
	else {
		printf("�ùٸ��� ���� �ﰢ���Դϴ�.\n");
	}
	return 0;
}