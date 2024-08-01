#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{

	while (1) {
		int a;
		printf("점수를 입력하세요 :");
		scanf("%d", &a);
		if (a > 100 || a < 0)
		{
			printf("학점 부여를 종료합니다.");
			break;
		}
		if (a >= 90)
			printf("A학점 입니다.");
		else if (a >= 80)
			printf("B학점 입니다.");
		else if (a >= 70)
			printf("C학점 입니다.");
		else if (a >= 60)
			printf("C학점 입니다.");
		else
			printf("D학점 입니다.");
	}
}