#include<stdio.h>
void main() {
	union student {
		int tot;
		char grade;
	};
	union student u;
	u.tot = 300;
	u.grade = 'A';
	printf("\n---����ü ����---\n");
	printf("���� ==> %d\n", u.tot);
	printf("��� ==> %c\n", u.grade);

	u.tot = 100;
	printf("���� ==> %d\n", u.tot);
	printf("��� ==> %c\n", u.grade);


}