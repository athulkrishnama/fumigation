#include <stdio.h>

int main()
{
	int P;
	float n, R, SI;
	printf("Enter Principal amount: ");
	scanf("%d", &P);
	printf("Enter number of year: ");
	scanf("%f", &n);
	printf("Enter rate of interest: ");
	scanf("%f", &R);
	
	//Calculating Simple interest
	SI = (P * n * R)/100;
	printf("Simple interest is %.2f\n", SI);
}