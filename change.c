#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int user = 0;
	int change = 0;
	int price = 0;
	int c50000 = 0;
	int c10000 = 0;
	int c5000 = 0;
	int c1000 = 0;
	int c500 = 0;
	int c100 = 0;

	printf("���� ���� �Է��ϼ���.: ");
	scanf("%d", &price);
	printf("����ڰ� �� ��: ");
	scanf("%d", &user);
	change = user - price;

	c50000 = change / 50000;
	change %= 50000;

	c10000 = change / 10000;
	change %= 10000;

	c5000 = change / 5000;
	change %= 5000;

	c1000 = change / 1000;
	change %= 1000;

	c500 = change / 500;
	change %= 500;

	c100 = change / 100;
	change %= 100;

	printf("=========�Ž�����=========\n");
	printf("��������: %d��\n", c50000);
	printf("������: %d��\n", c10000);
	printf("��õ����: %d��\n", c5000);
	printf("õ����: %d��\n", c1000);
	printf("����� ����: %d��\n", c500);
	printf("��� ����: %d��\n", c100);

	return 0;

}