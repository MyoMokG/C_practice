#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, n, sum;

	printf("������ �Է��ϼ���. :");
	scanf("%d", &n);

	i = 1;
	sum = 0;

	while (i <= n)
	{
		sum += i;
		i++;
	}

	printf("1���� %d������ ���� %d�Դϴ�.", n, sum);
	return 0;
}