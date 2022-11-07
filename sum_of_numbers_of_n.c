#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0;
	int sum = 0;

	printf("자연수를 입력하시면 각 자릿수의 합을 알려드립니다.");
	scanf("%d", &n);
	printf("%d의 각 자릿수의 합 = ", n);

	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	printf("%d", sum);

	return 0;
}