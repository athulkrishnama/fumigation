#include <stdio.h>

int main()
{
	int i, j, row;
	printf("Enter number of rows: ");
	scanf("%d", &row);
	
	for(i = 0; i <= row; i++)
	{
		for(j = 0; j <= row - i; j++)
		{
			printf(" ");
		}
		for(j = 1; j <= i; j++)
		{
			printf("%d ", j);
		}
		printf("1\n");
	}
}