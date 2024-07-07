#include <stdio.h>

int main()
{
	float percentage;
	printf("Enter your percentage: ");
	scanf("%f", &percentage);
	
	if(percentage <= 100 && percentage >= 90)
	{
		printf("A");
	}
	else if(percentage < 90 && percentage >= 80 )
	{
		printf("B");
	}
	else if(percentage < 80 && percentage >= 70)
	{
		printf("C");
	}
	else if(percentage < 70 && percentage >= 60)
	{
		printf("D");
	}
	else if (percentage < 60 && percentage >= 50)
	{
		printf("E");
	}
	else
	{
		printf("Failed");
	}
	printf("\n");
}