#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int factorial(int input)
{
	int fac = 1;
	for (int i = input; i > 0; i--)
	{
		fac *= i;
	}
	return fac;
}

int combination(int n, int r)
{
	return(factorial(n) / factorial(r) / factorial(n - r));
}

int get_integer()
{
	int n;
	scanf("%d", &n);
	return n;
}

int main(void)
{
	int n, r;

	printf("n개 중 r개를 순서 구분 없이 추출합니다.\n");
	printf("n을 입력하세요. >>> ");
	n = get_integer();
	printf("r을 입력하세요. >>> ");
	r = get_integer();

	printf("C(%d,%d)은 %d입니다.", n, r, combination(n, r));

	return 0;
}