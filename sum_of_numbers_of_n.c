#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0;
	int sum = 0;

	printf("�ڿ����� �Է��Ͻø� �� �ڸ����� ���� �˷��帳�ϴ�.");
	scanf("%d", &n);
	printf("%d�� �� �ڸ����� �� = ", n);

	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	printf("%d", sum);

	return 0;
}