#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ascii_code = 0;

int main(void)
{
	printf("�ƽ�Ű �ڵ尪�� �Է��ϼ���. :");
	scanf("%d", &ascii_code);
	printf("�ش�Ǵ� ���ڴ� %c�Դϴ�.", ascii_code);

	return 0;
}