#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double mass = 0;
double speed = 0;

int main(void)
{
	printf("����(kg): ");
	scanf("%lf", &mass);
	printf("�ӵ�(m/s): ");
	scanf("%lf", &speed);

	printf("�������: %lf", 0.5 * mass * speed * speed);

	return 0;
}