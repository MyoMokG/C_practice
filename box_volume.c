#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double width=0;
	double depth=0;
	double height=0;

	printf("������ ���� ���� ���̸� �ѹ��� �Է��ϼ���. :");
	scanf("%lf %lf %lf", &width, &depth, &height);
	printf("������ ���Ǵ� %lf�Դϴ�.", width * depth * height);

	return 0;
}