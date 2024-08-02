#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int dan;
	int i;

	printf("구구단을 외자!\n구구단을 외자!\n몇단?");
	scanf("%d", &dan);
	


	for (i = 1; i < 20; i++){
		if (dan >= 20 || dan <= 0) {
			printf("단수가 너무 큽니다.");
			break;
		}

		printf("%d X %d = %d\n", dan, i, dan * i);
	}
	
}