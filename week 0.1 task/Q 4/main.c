#include <stdio.h>

int main()
{
	float mark;
	printf("Enter your mark: ");
	scanf("%f", &mark);

	if( mark <= 100 && mark >= 50)
	{
		printf("You are passed\n");
	}
	else if ( mark >= 0 && mark < 50)
	{
		printf("Yor are failed\n");
	}
	else
	{
		printf("Invalid mark\n");
	}
}