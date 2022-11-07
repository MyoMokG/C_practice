#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int input)
{
    for (int div = 2; div * div <= input; div++)
    {
        if (input % div == 0) return 0;
    }
    return 1;
}

int main(void)
{
    int n = 0;

    printf("�ڿ����� �Է��Ͻø� �׺��� ���� �Ҽ��� ��� �˷��帳�ϴ�.");
    scanf("%d", &n);
    printf("%d���� ���� �Ҽ��� ", n);
    if (n <= 2) printf("�����ϴ�.\n");
    else
    {
        for (int m = 2; m < n; m++)
        {
            if (is_prime(m)) printf("%d ", m);
        }
        printf("�Դϴ�.\n");
    }
}
