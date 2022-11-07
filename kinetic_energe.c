#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double mass = 0;
double speed = 0;

int main(void)
{
	printf("질량(kg): ");
	scanf("%lf", &mass);
	printf("속도(m/s): ");
	scanf("%lf", &speed);

	printf("운동에너지: %lf", 0.5 * mass * speed * speed);

	return 0;
}