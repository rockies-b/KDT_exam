#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

	while (1) {
		int a;
		printf("������ �Է��ϼ��� :");
		scanf("%d", &a);
		if (a > 100 || a < 0)
		{
			printf("���� �ο��� �����մϴ�.");
			break;
		}
		if (a >= 90)
			printf("A���� �Դϴ�.");
		else if (a >= 80)
			printf("B���� �Դϴ�.");
		else if (a >= 70)
			printf("C���� �Դϴ�.");
		else if (a >= 60)
			printf("C���� �Դϴ�.");
		else
			printf("D���� �Դϴ�.");
	}
}