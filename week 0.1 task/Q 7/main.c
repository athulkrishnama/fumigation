#include <stdio.h>

int main()
{
	int num,i;
	printf("Enter the number: ");
	scanf("%d", &num);
	
	for(i = 1; i <= 10; i++)
	{
		printf("%d x %d = %d\n", i, num, i * num);
	}
}