#include <stdio.h>

int main()
{
	int written, lab, assignment;
	float grade;
	printf("Enter mark obtained in writter test: ");
	scanf("%d", &written);
	printf("Enter mark obtained in lab exams: ");
	scanf("%d", &lab);
	printf("Enter mark obtained in assignments: ");
	scanf("%d", &assignment);
	
	grade = (written * 0.7 ) + ( lab * 0.2) + (assignment * 0.1);
	printf("Total grade obtained is %.2f\n", grade);
}