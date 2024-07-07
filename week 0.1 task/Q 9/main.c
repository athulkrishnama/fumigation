#include <stdio.h>

int main()
{
	int i,j,lim;
	printf("Enter the limit: ");
	scanf("%d", &lim);

	for(i = 1; i <= lim; i++)
	{
		for(j = 1; j <= i; j ++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}	
}