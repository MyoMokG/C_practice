#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char printOptions()
{
	printf(" --- ���ϴ� �޴��� �����ϼ���. --- \n");
	printf("�����µ����� ȭ���µ��� ��ȯ�ϱ�: c\n");
	printf("ȭ���µ����� �����µ��� ��ȯ�ϱ�: f\n");
	printf("����: q\n>>> ");
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
			printf("�����µ�: ");
			scanf("%lf", &temp);
			printf("ȭ���µ�: %lf\n\n", C2F(temp));
			break;

		case('f'):
			printf("ȭ���µ�: ");
			scanf("%lf", &temp);
			printf("�����µ�: %lf\n\n", F2C(temp));
			break;

		case('q'):
			running = 0;
			printf("�̿��� �ּż� �����մϴ�.\n");
			break;

		default:
			printf("!!! ��Ȯ�� �Է��� �ּ���. !!!\n");
			break;
		}

		getchar();
	}
	
	return 0;
}