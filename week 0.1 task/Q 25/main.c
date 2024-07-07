#include <stdio.h>

int main()
{
	int i, j, k,row;
	printf("Enter number of rows: ");
	scanf("%d", &row);
	
	for(i = 1; i <= row; i++)
	{
		for(j = 1; j <= i * 2; j++)
		{
			printf("* ");
		}
		printf("\n");
		if( i == row) break;
		for(k = 1; k <= i * 3; k++)
		{
			printf("*\n");
		}
	}
}