#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main(void)
{
	int x = 0;
	int y = 0;
	int answer = 0;
	int i = 0;
	int status = 1;
	srand(time(NULL));

	printf("������ ���� ���� �Է��ϼ���. �������� ��쿡�� ���� �Է��ϼ���.\n");

	for (i = 0; i < 10; i++) {
		status = 1;
		x = rand() % 10;
		y = rand() % 10;

		switch (rand() % 4) {
			case 0:															//����
				printf("%d�� �����Դϴ�.\n%d + %d = ", i + 1, x, y);		//���� ����
				while (status == 1) {
					scanf("%d", &answer);									//���� ��ĵ
					if (x + y == answer) status = 0;						//�����̸� �ݺ��� Ż��
					else printf("�ٽ� ������ ������.\n");					//�����̸� �ٽ���
				}
				printf("�����Դϴ�.\n");									//���� �ȳ�
				break;

			case 1:															//����
				printf("%d�� �����Դϴ�.\n%d - %d = ", i + 1, x, y);		//(���Ϲݺ�)
				while (status == 1) {
					scanf("%d", &answer);
					if (x - y == answer) status = 0;
					else printf("�ٽ� ������ ������.\n");
				}
				printf("�����Դϴ�.\n");
				break;

			case 2:															//����
				printf("%d�� �����Դϴ�.\n%d * %d = ", i + 1, x, y);		//(���Ϲݺ�)
				while (status == 1) {
					scanf("%d", &answer);
					if (x * y == answer) status = 0;
					else printf("�ٽ� ������ ������.\n");
				}
				printf("�����Դϴ�.\n");
				break;

			case 3:															//������
				while (y == 0)												//�и� 0�� ���
					y = rand() % 10;										//�и� �ٽ� �̴´�.
				printf("%d�� �����Դϴ�.\n%d / %d = ", i + 1, x, y);		//(���Ϲݺ�)
				while (status == 1) {
					scanf("%d", &answer);
					if (x / y == answer) status = 0;
					else printf("�ٽ� ������ ������.\n");
				}
				printf("�����Դϴ�.\n");
				break;
		}
	}
	printf("�����ϼ̽��ϴ�.");
	return 0;
}