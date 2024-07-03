#include <stdio.h>

int main()
{
	int arr1[50][50], arr2[50][50], i, j, row, col, length;
	printf("Enter number or rows: ");
	scanf("%d", &row);
	printf("Enter number or columns: ");
	scanf("%d", &col);
	
	printf("Enter array 1 elements:\n");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("Enter [%d][%d] element: ", i + 1, j + 1);
			scanf("%d", &arr1[i][j]);
		}
	}
	
	printf("Enter array 2 elements:\n");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("Enter [%d][%d] element: ", i + 1, j + 1);
			scanf("%d", &arr2[i][j]);
		}
	}

	printf("Sum of two array is \n");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("%d ", arr1[i][j] + arr2[i][j]);
			
		}
		printf("\n");
	}
}