#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int dan;
	int i;

	while (1) {
		printf("�������� ����!\n�������� ����!\n���?");
		scanf("%d", &dan);
		if (dan == 0) {
			printf("0���� �ȵſ�!");
			break;
		}
		for (i = 1; i < 10; i++) {
			if (dan >= 10 || dan <= 0) {
				printf("�ܼ��� �ʹ� Ů�ϴ�.");
				break;
			}

			printf("%d X %d = %d\n", dan, i, dan * i);
		}
	}

}