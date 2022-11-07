#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int x1, y1, x2, y2, R, r, temp, distance;
	printf("두 원의 위치관계를 알려드립니다.");
	printf("첫 번째 원의 중심의 x좌표, y좌표를 순서대로 입력해 주세요.");
	scanf("%d %d", &x1, &y1);
	printf("첫 번째 원의 반지름을 입력해 주세요.");
	scanf("%d", &R);
	printf("두 번째 원의 중심의 x좌표와 y좌표를 순서대로 입력해 주세요.");
	scanf("%d %d", &x2, &y2);
	printf("두 번째 원의 반지름을 입력해 주세요.");
	scanf("%d", &r);

	distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

	if (R < r) {
		temp = R;
		R = r;
		r = temp;
	}

	printf("=============================\n");

	if (R + r < distance) {
		printf("두 원은 만나지 않습니다.\n");
	}
	else if (R - r > distance) {
		printf("두 원은 포함 관계입니다.\n");
	}
	else {
		printf("두 원은 일부 겹칩니다.\n");
	}

	printf("=============================");

	return 0;
}