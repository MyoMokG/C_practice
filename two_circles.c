#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int R, r, temp, distance;
	printf("두 원의 위치관계를 알려드립니다.\n첫 번째 반지름, 두 번째 반지름, 중심간 거리를 순서대로 정수형으로 입력해 주세요.\n>>>");
	scanf("%d %d %d", &R, &r, &distance);

	if (R < r){
		temp = R;
		R = r;
		r = temp;
	}

	if (R + r < distance) {
		printf("두 원은 만나지 않습니다.\n");
	}
	else if (R - r > distance) {
		printf("두 원은 포함 관계입니다.\n");
	}
	else {
		printf("두 원은 일부 겹칩니다.\n");
	}
	return 0;
}