#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int time, age, price;
	printf("���� �ð��� ���̸� �Է��ϼ���.\n(�ð�, ����)>>>");
	scanf("%d %d", &time, &age);

	if (time >= 17) {
		price = 10000;
	}
	else if ((13 <= age) && (age <= 64)) {
		price = 34000;
	}
	else {
		price = 25000;
	}

	printf("����� %d���Դϴ�.", price);

	return 0;
}