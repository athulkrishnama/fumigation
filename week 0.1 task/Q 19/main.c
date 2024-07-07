#include <stdio.h>

int main()
{
	int income;
	float tax;
	printf("Enter your annual income: ");
	scanf("%d", &income);
	
	if(income <= 250000)
	{
		tax = 0;
	}else if(income >250000 && income <= 500000)
	{
		tax = income * 0.05;
	}else if(income > 500000 && income <= 1000000)
	{
		tax = income * 0.2;
	}else if(income > 1000000 && income <= 5000000)
	{
		tax = income * 0.3;
	}
	
	printf("Income tax amount = %.2f\n", tax);

}