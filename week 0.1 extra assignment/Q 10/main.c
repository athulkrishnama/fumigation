#include <stdio.h>

int main()
{
	int i,j,row,incrementer;
	printf("Enter number of rows : ");
	scanf("%d", &row);
	for(i = 1; i <= row; i++)
	{
		for(j = 0; j < row - i; j++)
		{
			printf("  ");
		}
		incrementer = 1;
		for(j = 1; j > 0; j += incrementer)
		{
			printf("%c ", 64+j);
			if(j == i )
			{
				incrementer = -1;
			}
		} 
		printf("\n");
	}
}