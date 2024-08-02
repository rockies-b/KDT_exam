#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int dan;
	int i;

	while (1) {
		printf("구구단을 외자!\n구구단을 외자!\n몇단?");
		scanf("%d", &dan);
		if (dan == 0) {
			printf("0단은 안돼요!");
			break;
		}
		for (i = 1; i < 10; i++) {
			if (dan >= 10 || dan <= 0) {
				printf("단수가 너무 큽니다.");
				break;
			}

			printf("%d X %d = %d\n", dan, i, dan * i);
		}
	}

}