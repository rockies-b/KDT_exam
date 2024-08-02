#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct student {
	char name[20];
	int kor;
	int eng;
	float avg;
};

int main(){

	struct student s;
	struct student* p;
	p = &s;

	printf("이름 : ");
	scanf("%s", &p->name);

	printf("국어점수 : ");
	scanf("%d", &p->kor);
	
	printf("영어점수 : ");
	scanf("%d", &p->eng);
	
	p->avg = (p->kor + p->eng) / 2.0f;

	printf("\n");
	printf("학생 이름 ==> %s\n", p->name);
	printf("국어 점수 ==> %d\n", p->kor);
	printf("영어 점수 ==> % d\n", p->eng);
	printf("평균 점수 ==> %5.1f\n", p->avg);
}