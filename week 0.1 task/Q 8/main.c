#include <stdio.h>

int main()
{
	int i, limit, sum = 0;
	printf("Enter the limit: ");
	scanf("%d", &limit);
	for(i = 1; i <= limit; i = i + 2)
	{
		sum += i;
	}
	printf("Sum of odd numbers = %d\n", sum); 
}