#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int dan;
	int i;

	printf("�������� ����!\n�������� ����!\n���?");
	scanf("%d", &dan);
	


	for (i = 1; i < 20; i++){
		if (dan >= 20 || dan <= 0) {
			printf("�ܼ��� �ʹ� Ů�ϴ�.");
			break;
		}

		printf("%d X %d = %d\n", dan, i, dan * i);
	}
	
}