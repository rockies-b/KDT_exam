#include<stdio.h>

void myfunc() {
	static int a = 0;
	a = a + 100;
	printf("aÀÇ °ª ==> %d\n", a);
}

void main() {

	myfunc();
	myfunc();
}