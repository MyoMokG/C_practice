#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double width=0;
	double depth=0;
	double height=0;

	printf("상자의 가로 세로 높이를 한번에 입력하세요. :");
	scanf("%lf %lf %lf", &width, &depth, &height);
	printf("상자의 부피는 %lf입니다.", width * depth * height);

	return 0;
}