#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int R, r, temp, distance;
	printf("�� ���� ��ġ���踦 �˷��帳�ϴ�.\nù ��° ������, �� ��° ������, �߽ɰ� �Ÿ��� ������� ���������� �Է��� �ּ���.\n>>>");
	scanf("%d %d %d", &R, &r, &distance);

	if (R < r){
		temp = R;
		R = r;
		r = temp;
	}

	if (R + r < distance) {
		printf("�� ���� ������ �ʽ��ϴ�.\n");
	}
	else if (R - r > distance) {
		printf("�� ���� ���� �����Դϴ�.\n");
	}
	else {
		printf("�� ���� �Ϻ� ��Ĩ�ϴ�.\n");
	}
	return 0;
}