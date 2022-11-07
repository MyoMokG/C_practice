#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int grade = 0;
	int n = 0;
	float sum = 0;
	float average = 0;

	printf("성적 평균을 구하는 프로그램입니다. \n음수를 입력하면 성적 입력이 종료됩니다.\n");

	while (grade>=0)
	{
		printf("성적을 입력하세요. :");
		scanf("%d", &grade);

		sum += grade;
		n++;
	}

	sum = sum - grade;
	n--;
	average = sum / n;
	printf("총 %d명의 성적 평균은 %lf점입니다.", n, average);

	return 0;
}