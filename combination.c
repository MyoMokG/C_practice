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

	printf("n�� �� r���� ���� ���� ���� �����մϴ�.\n");
	printf("n�� �Է��ϼ���. >>> ");
	n = get_integer();
	printf("r�� �Է��ϼ���. >>> ");
	r = get_integer();

	printf("C(%d,%d)�� %d�Դϴ�.", n, r, combination(n, r));

	return 0;
}