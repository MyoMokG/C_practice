#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SQMETER_PER_PYEONG 3.3508

double pyeong = 0;

int main(void)
{
	printf("���� �Է��ϼ���. :");
	scanf("%lf", &pyeong);
	printf("%lf���� %lf�������Դϴ�.", pyeong, pyeong * SQMETER_PER_PYEONG);

	return 0;
}