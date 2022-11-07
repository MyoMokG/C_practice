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

    printf("자연수를 입력하시면 그보다 작은 소수를 모두 알려드립니다.");
    scanf("%d", &n);
    printf("%d보다 작은 소수는 ", n);
    if (n <= 2) printf("없습니다.\n");
    else
    {
        for (int m = 2; m < n; m++)
        {
            if (is_prime(m)) printf("%d ", m);
        }
        printf("입니다.\n");
    }
}
