#include <stdio.h>

int main()
{
	int num1;
	float num2, sum;
	printf("Enter number 1: ");
	scanf("%d", &num1);
	printf("Enter number 2: ");
	scanf("%f", &num2); 
	
	sum = num1 + num2;
	printf("Sum of given numbers is %.2f\n", sum);
}