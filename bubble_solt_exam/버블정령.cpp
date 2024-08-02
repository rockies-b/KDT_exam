#include<stdio.h>

void main(){
	int a[5] = { 7,3,5,2,6 };
	int temp;
	int i, k;

	printf("정렬 전 배열 a ==>");
	for (i = 0; i < sizeof(a) / sizeof(int); i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 0; i < sizeof(a) / sizeof(int); i++) {
		for (k = 0; k <= sizeof(a) / sizeof(int) - 2; k++) {
			if (a[k] >= a[k + 1]) {
				temp = a[k];
				a[k] = a[k + 1];
				a[k + 1] = temp;
			}
		}
	}

	printf("정렬 후 배열 a ==>");
	for (i = 0; i < sizeof(a) / sizeof(int); i++) {
		printf("%d, ", a[i]);
	}

}