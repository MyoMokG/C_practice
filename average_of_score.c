#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int grade = 0;
	int n = 0;
	float sum = 0;
	float average = 0;

	printf("���� ����� ���ϴ� ���α׷��Դϴ�. \n������ �Է��ϸ� ���� �Է��� ����˴ϴ�.\n");

	while (grade>=0)
	{
		printf("������ �Է��ϼ���. :");
		scanf("%d", &grade);

		sum += grade;
		n++;
	}

	sum = sum - grade;
	n--;
	average = sum / n;
	printf("�� %d���� ���� ����� %lf���Դϴ�.", n, average);

	return 0;
}