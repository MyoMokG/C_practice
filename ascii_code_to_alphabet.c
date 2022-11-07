#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ascii_code = 0;

int main(void)
{
	printf("아스키 코드값을 입력하세요. :");
	scanf("%d", &ascii_code);
	printf("해당되는 문자는 %c입니다.", ascii_code);

	return 0;
}