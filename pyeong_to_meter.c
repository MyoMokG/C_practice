#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SQMETER_PER_PYEONG 3.3508

double pyeong = 0;

int main(void)
{
	printf("평을 입력하세요. :");
	scanf("%lf", &pyeong);
	printf("%lf평은 %lf평방미터입니다.", pyeong, pyeong * SQMETER_PER_PYEONG);

	return 0;
}