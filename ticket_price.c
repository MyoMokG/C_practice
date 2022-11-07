#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int time, age, price;
	printf("현재 시간과 나이를 입력하세요.\n(시간, 나이)>>>");
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

	printf("요금은 %d원입니다.", price);

	return 0;
}