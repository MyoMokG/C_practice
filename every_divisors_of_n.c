#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {

	int n = 0;
	printf("�ڿ����� �Է��ϸ� ��� ����� �˷��帳�ϴ�.");
	scanf("%d", &n);
	for (int i = 1; i < n + 1; i++) {
		if (n % i == 0) printf("%d\n", i);
	}

	return 0;
}