#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int x1, y1, x2, y2, R, r, temp, distance;
	printf("�� ���� ��ġ���踦 �˷��帳�ϴ�.");
	printf("ù ��° ���� �߽��� x��ǥ, y��ǥ�� ������� �Է��� �ּ���.");
	scanf("%d %d", &x1, &y1);
	printf("ù ��° ���� �������� �Է��� �ּ���.");
	scanf("%d", &R);
	printf("�� ��° ���� �߽��� x��ǥ�� y��ǥ�� ������� �Է��� �ּ���.");
	scanf("%d %d", &x2, &y2);
	printf("�� ��° ���� �������� �Է��� �ּ���.");
	scanf("%d", &r);

	distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

	if (R < r) {
		temp = R;
		R = r;
		r = temp;
	}

	printf("=============================\n");

	if (R + r < distance) {
		printf("�� ���� ������ �ʽ��ϴ�.\n");
	}
	else if (R - r > distance) {
		printf("�� ���� ���� �����Դϴ�.\n");
	}
	else {
		printf("�� ���� �Ϻ� ��Ĩ�ϴ�.\n");
	}

	printf("=============================");

	return 0;
}