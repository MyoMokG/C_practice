#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char printOptions()
{
	printf(" --- 원하는 메뉴를 선택하세요. --- \n");
	printf("섭씨온도에서 화씨온도로 변환하기: c\n");
	printf("화씨온도에서 섭씨온도로 변환하기: f\n");
	printf("종료: q\n>>> ");
	return getchar();
}

double C2F(double c_temp)
{
	return 9.0 / 5.0 * c_temp + 32;
}

double F2C(double f_temp)
{
	return (f_temp - 32) * 5.0 / 9.0;
}

int main(void)
{
	double temp;
	int running = 1;

	while (running == 1)
	{
		switch (printOptions())
		{
		case('c'):
			printf("섭씨온도: ");
			scanf("%lf", &temp);
			printf("화씨온도: %lf\n\n", C2F(temp));
			break;

		case('f'):
			printf("화씨온도: ");
			scanf("%lf", &temp);
			printf("섭씨온도: %lf\n\n", F2C(temp));
			break;

		case('q'):
			running = 0;
			printf("이용해 주셔서 감사합니다.\n");
			break;

		default:
			printf("!!! 정확히 입력해 주세요. !!!\n");
			break;
		}

		getchar();
	}
	
	return 0;
}