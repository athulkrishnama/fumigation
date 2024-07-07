#include <stdio.h>

int len, arr1[50][50], arr2[50][50], arr3[50][50];
void getArray();
void addArray();
void displayArray();
int main()
{
	printf("Enter size of array: ");
	scanf("%d", &len);
	getArray();
	addArray();
	displayArray();
}

void getArray()
{
	int i, j;
	printf("Enter elements of array 1\n");
	for(i = 0; i < len; i++)
	{
		for(j = 0; j < len; j++)
		{
			printf("Element [%d][%d]: ", i + 1, j + 1);
			scanf("%d", &arr1[i][j]);
			
		}
	}
	printf("Enter elements of array 2\n");
	for(i = 0; i < len; i++)
	{
		for(j = 0; j < len; j++)
		{
			printf("Element [%d][%d]: ", i + 1, j + 1);
			scanf("%d", &arr2[i][j]);
			
		}
	}

}


void addArray()
{
	int i, j;
	for(i = 0; i < len; i++)
	{
		for(j = 0; j < len; j++)
		{
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
}

void displayArray()
{
	int i, j;
	for(i = 0; i < len; i++)
	{
		for(j = 0; j < len; j++)
		{
			printf("%d\t", arr3[i][j]);
		}
		printf("\n");
	}
}

